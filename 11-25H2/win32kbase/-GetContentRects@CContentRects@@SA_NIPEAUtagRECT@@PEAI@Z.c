/*
 * XREFs of ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1401AC540
 * Callers:
 *     NtUserGetSystemContentRects @ 0x1401BD9F0 (NtUserGetSystemContentRects.c)
 *     IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x14021C174 (IVContentRectsSync--_anonymous_namespace_--ivSendContentRectsUpdate.c)
 * Callees:
 *     RIMLockShared @ 0x14000D340 (RIMLockShared.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetInstance@CContentRects@@CAPEAV1@XZ @ 0x14015D360 (-GetInstance@CContentRects@@CAPEAV1@XZ.c)
 *     ?Get@CContentRects@@AEAA_NIPEAUtagRECT@@PEAI@Z @ 0x1401AC3A0 (-Get@CContentRects@@AEAA_NIPEAUtagRECT@@PEAI@Z.c)
 */

char __fastcall CContentRects::GetContentRects(__int64 a1, struct tagRECT *a2, unsigned int *a3)
{
  unsigned int v5; // r14d
  struct CContentRects *Instance; // rax
  char v7; // bl
  CContentRects *v8; // rdi

  v5 = a1;
  Instance = CContentRects::GetInstance(a1, (__int64)a2);
  v7 = 0;
  v8 = Instance;
  if ( Instance )
  {
    RIMLockShared((__int64)Instance);
    v7 = CContentRects::Get(v8, v5, a2, a3);
    CPushLock::ReleaseLock(v8);
  }
  return v7;
}
