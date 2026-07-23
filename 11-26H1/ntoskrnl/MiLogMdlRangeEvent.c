/*
 * XREFs of MiLogMdlRangeEvent @ 0x1406F34E8
 * Callers:
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     MiAllocatePagesForMdl @ 0x14034AA0C (MiAllocatePagesForMdl.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     MiGetPfnPidSafe @ 0x14040A730 (MiGetPfnPidSafe.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogMdlRangeEvent(_KPROCESS *Process, _QWORD *a2, __int16 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  _QWORD *v8; // rdi
  __int64 v9; // r14
  __int64 PfnPidSafe; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  int v16; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+38h] [rbp-38h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h]
  _QWORD v19[2]; // [rsp+50h] [rbp-20h] BYREF

  v18 = 0LL;
  v6 = *a2;
  v8 = a2;
  v17 = 0LL;
  v9 = 48 * v6 - 0x220000000000LL;
  if ( ((*(_QWORD *)(v9 + 40) >> 60) & 7) == 1 )
  {
    if ( !Process )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, (int)a2);
      }
      v16 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v16);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      PfnPidSafe = (unsigned int)MiGetPfnPidSafe(v9, 3u);
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      goto LABEL_20;
    }
    if ( *(_QWORD *)&Process->Header.Lock == 399680LL )
    {
      if ( ((__int64)Process->Header.WaitListHead.Flink & 1) == 0 )
      {
        PfnPidSafe = 0LL;
LABEL_20:
        result = 9LL;
        goto LABEL_22;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
    }
    PfnPidSafe = LODWORD(Process[1].Header.WaitListHead.Flink);
    goto LABEL_20;
  }
  PfnPidSafe = 0LL;
  result = 10LL;
LABEL_22:
  if ( a4 )
  {
    v13 = result | (16 * PfnPidSafe);
    do
    {
      v14 = v8;
      *((_QWORD *)&v17 + 1) = *v8;
      *(_QWORD *)&v17 = v13;
      do
      {
        v15 = v8++;
        --a4;
      }
      while ( a4 && *v8 == a5 + *v15 );
      v19[1] = 24LL;
      v18 = v8 - v14;
      v19[0] = &v17;
      result = EtwTraceKernelEvent((int)v19, 1, 0x20000001u, a3, 290462468);
    }
    while ( a4 );
  }
  return result;
}
