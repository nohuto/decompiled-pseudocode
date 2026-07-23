/*
 * XREFs of PspValidateJobAffinityState @ 0x140947398
 * Callers:
 *     PspInsertProcess @ 0x140945AAC (PspInsertProcess.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x140276050 (ExAcquireFastResourceShared.c)
 *     ExInitializeFastOwnerEntry @ 0x14042FF20 (ExInitializeFastOwnerEntry.c)
 *     ExReleaseFastResourceShared @ 0x14047F770 (ExReleaseFastResourceShared.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspCheckJobAccessState @ 0x14077BB78 (PspCheckJobAccessState.c)
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
