/*
 * XREFs of KeQueryPrimaryGroupAffinityThread @ 0x1404E02B0
 * Callers:
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 *     NtGetCurrentProcessorNumber @ 0x140B1E710 (NtGetCurrentProcessorNumber.c)
 * Callees:
 *     KiReleaseThreadLockLowerIrql @ 0x14030F2A0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 */

__int64 __fastcall KeQueryPrimaryGroupAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _WORD *v5; // rcx
  __int64 v6; // rax
  unsigned __int8 v7; // dl
  unsigned __int8 v9; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a2 + 10) = 0;
  v3 = 0LL;
  *(_WORD *)(a2 + 14) = 0;
  v9 = 0;
  KiAcquireThreadLockRaiseToDpc(a1, &v9);
  *(_WORD *)(a2 + 8) = *(_WORD *)(a1 + 584);
  v5 = *(_WORD **)(a1 + 576);
  v6 = *(unsigned __int16 *)(a1 + 584);
  if ( (unsigned __int16)v6 < *v5 )
    v3 = *(_QWORD *)&v5[4 * v6 + 4];
  v7 = v9;
  *(_QWORD *)a2 = v3;
  return KiReleaseThreadLockLowerIrql(a1, v7);
}
