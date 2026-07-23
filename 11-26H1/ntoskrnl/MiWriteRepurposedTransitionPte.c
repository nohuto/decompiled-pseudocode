/*
 * XREFs of MiWriteRepurposedTransitionPte @ 0x1403440B0
 * Callers:
 *     MiCombineWithStandbyExisting @ 0x1402E9D44 (MiCombineWithStandbyExisting.c)
 *     MiCombineInitialFinish @ 0x1402EC334 (MiCombineInitialFinish.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 */

__int64 __fastcall MiWriteRepurposedTransitionPte(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r10
  unsigned __int64 v7; // r10
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL, 0LL, 0x80000000);
  v6 = *(_QWORD *)(a1 + 8) & 0xFFFLL;
  v10 = a2;
  v7 = v4 + v6;
  v8 = 0;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v8 = MiSanitizeShadowPxe(0xFFFFF6FB7DBED7F8uLL, &v10, v5);
    a2 = v10;
  }
  *(_QWORD *)v7 = a2;
  if ( v8 )
    MiWritePteShadow();
  result = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  return result;
}
