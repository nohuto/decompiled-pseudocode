/*
 * XREFs of ?OnPeerDisconnected@MPCManagerConnection@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@_N@Z @ 0x1800BEB10
 * Callers:
 *     <none>
 * Callees:
 *     ?OnPeerDisconnected@MPCManager@@QEAAXPEAVBamoPeer@MPCManagerBamo_AutoBamos@@@Z @ 0x1800B7DD4 (-OnPeerDisconnected@MPCManager@@QEAAXPEAVBamoPeer@MPCManagerBamo_AutoBamos@@@Z.c)
 */

__int64 __fastcall MPCManagerConnection::OnPeerDisconnected(
        MPCManager **this,
        struct MPCManagerBamo_AutoBamos::BamoPeer *a2)
{
  MPCManager::OnPeerDisconnected(this[31], a2);
  return 0LL;
}
