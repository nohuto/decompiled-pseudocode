/*
 * XREFs of EtwpReserveWithPmcCounters @ 0x1402185C0
 * Callers:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     EtwpLogContextSwapEvent @ 0x1404075AC (EtwpLogContextSwapEvent.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x140218740 (EtwpReserveTraceBuffer.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall EtwpReserveWithPmcCounters(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5, int a6)
{
  __int64 v6; // r13
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  unsigned int v10; // r14d
  int v11; // esi
  unsigned __int8 CurrentIrql; // bp
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int16 v19; // [rsp+78h] [rbp+10h]
  int v20; // [rsp+80h] [rbp+18h]

  v19 = a2;
  v6 = *(_QWORD *)(a1 + 1064);
  v7 = a1;
  v8 = a4;
  v9 = (unsigned __int8)*(_DWORD *)(v6 + 20);
  v20 = *(_DWORD *)(v6 + 20);
  v10 = 8 * v9 + 16;
  v11 = v10 + a3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v13 = KeGetCurrentIrql();
    if ( (_BYTE)v13 != 2 )
    {
      a2 = 2LL;
      __writecr8(2uLL);
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(v13, a2);
      v8 = a4;
    }
  }
  v14 = EtwpReserveTraceBuffer(v7, v11, v8, (_DWORD)a5, a6);
  v16 = v14;
  if ( v14 )
  {
    *(_QWORD *)(v14 + 8) = *a5;
    *(_WORD *)(v14 + 4) = v11;
    *(_DWORD *)v14 = (unsigned __int8)a6 | (v9 << 8) | 0xC0110000;
    *(_WORD *)(v14 + 6) = v19;
    v17 = *(_QWORD *)(v6 + 8LL * KeGetPcr()->Prcb.Number + 24);
    if ( v17 )
      guard_dispatch_icall_no_overrides(v17, v14 + 16, v15);
    else
      memset_0((void *)(v14 + 16), 0, 8LL * (unsigned __int8)v20);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    return v16 + v10;
  }
  else
  {
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
}
