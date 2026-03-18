/*
 * XREFs of PspValidateJobAffinityState @ 0x140985390
 * Callers:
 *     PspInsertProcess @ 0x140983A9C (PspInsertProcess.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x140276AE0 (ExAcquireFastResourceShared.c)
 *     ExInitializeFastOwnerEntry @ 0x14043D670 (ExInitializeFastOwnerEntry.c)
 *     ExReleaseFastResourceShared @ 0x140485E00 (ExReleaseFastResourceShared.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PspCheckJobAccessState @ 0x140778CD8 (PspCheckJobAccessState.c)
 */

__int64 __fastcall PspValidateJobAffinityState(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  ULONG_PTR v9[10]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(v9, 0, 0x48uLL);
  v4 = 0;
  ExInitializeFastOwnerEntry((__int64)v9);
  ExAcquireFastResourceShared((__int64 *)(a1 + 56), (ULONG_PTR)v9, 1);
  v7 = *(_QWORD *)(a1 + 528);
  if ( !v7 || (v4 = PspCheckJobAccessState(v7, a2), v4 >= 0) )
    _InterlockedOr((volatile signed __int32 *)(a2 + 500), 0x4000000u);
  ExReleaseFastResourceShared(a1 + 56, (ULONG_PTR)v9, v5, v6);
  return (unsigned int)v4;
}
