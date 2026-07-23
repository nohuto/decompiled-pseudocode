/*
 * XREFs of MiWriteSharedDemandZeroPte @ 0x140494784
 * Callers:
 *     MiHandleForkZeroPte @ 0x1402ECDE8 (MiHandleForkZeroPte.c)
 *     MiHandleForkDemandZeroPte @ 0x14049460C (MiHandleForkDemandZeroPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteDirect @ 0x1402B4570 (MiMakePrototypePteDirect.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1402ED680 (MiIncreaseUsedPtesInPfn.c)
 *     MiGetCloneCharges @ 0x14036B234 (MiGetCloneCharges.c)
 *     MiLockCloneBlockAtDpc @ 0x14036C5A0 (MiLockCloneBlockAtDpc.c)
 *     MiUpdateCloneReducedCommit @ 0x1404948AC (MiUpdateCloneReducedCommit.c)
 */

__int64 __fastcall MiWriteSharedDemandZeroPte(_QWORD *a1, unsigned __int64 *a2, __int64 *a3)
{
  __int64 v3; // r12
  __int64 v5; // rsi
  unsigned __int64 v8; // rbp
  volatile signed __int64 *v9; // rdi
  int v10; // ebx
  unsigned __int64 PrototypePteDirect; // rax
  __int64 v12; // rbx
  __int64 result; // rax
  int v14; // ecx
  int v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1[1];
  v5 = a1[41];
  MiLockCloneBlockAtDpc((__int64)a2);
  v8 = a2[3];
  v9 = (volatile signed __int64 *)(a2 + 2);
  v10 = *(_DWORD *)(a1[33] + 48LL);
  if ( !v8 )
  {
    result = MiGetCloneCharges(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v3 + 1198)), 2);
    if ( !(_DWORD)result )
    {
      _InterlockedAnd64(v9, 0x7FFFFFFFFFFFFFFFuLL);
      return result;
    }
    v14 = *(_DWORD *)v9 & 0x1F | 0x800000;
    if ( (v10 & 0x8080000) != 0x8080000 )
      LOBYTE(v14) = *(_BYTE *)v9 & 0x1F;
    *a2 = MiMakeDemandZeroPte(v14);
  }
  a2[3] = v8 + 1;
  MiUpdateCloneReducedCommit(a2, 1LL);
  _InterlockedAnd64(v9, 0x7FFFFFFFFFFFFFFFuLL);
  PrototypePteDirect = MiMakePrototypePteDirect((unsigned __int64)a2);
  v15 = 0;
  v12 = PrototypePteDirect | 8;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v15);
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  *a3 = v12;
  ++a1[32];
  MiIncreaseUsedPtesInPfn(v5, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 1LL;
}
