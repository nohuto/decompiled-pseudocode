/*
 * XREFs of ?GetCount@CContentRects@@SAIXZ @ 0x1401AC5B8
 * Callers:
 *     NtUserGetSystemContentRects @ 0x1401BD9F0 (NtUserGetSystemContentRects.c)
 * Callees:
 *     RIMLockShared @ 0x14000D340 (RIMLockShared.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetInstance@CContentRects@@CAPEAV1@XZ @ 0x14015D360 (-GetInstance@CContentRects@@CAPEAV1@XZ.c)
 */

__int64 __fastcall CContentRects::GetCount(__int64 a1, __int64 a2)
{
  struct CContentRects *Instance; // rax
  unsigned int v3; // edi
  CPushLock *v4; // rbx

  Instance = CContentRects::GetInstance(a1, a2);
  v3 = 0;
  v4 = Instance;
  if ( Instance )
  {
    RIMLockShared((__int64)Instance);
    v3 = *((_DWORD *)v4 + 20);
    CPushLock::ReleaseLock(v4);
  }
  return v3;
}
