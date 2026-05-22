/*
 * XREFs of ?OnPeerConnected@MPCManagerClientConnection@@MEAAJPEAVBamoPeer@MPCManagerBamo_AutoBamos@@PEA_NPEAPEAVBamoPrincipal@Bamo@Microsoft@@@Z @ 0x180176AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCManagerClientConnection::OnPeerConnected(
        MPCManagerClientConnection *this,
        struct MPCManagerBamo_AutoBamos::BamoPeer *a2,
        bool *a3,
        struct Microsoft::Bamo::BamoPrincipal **a4)
{
  struct Microsoft::Bamo::BamoPrincipal *v4; // rcx

  *a3 = 1;
  v4 = *(struct Microsoft::Bamo::BamoPrincipal **)(*((_QWORD *)this + 32) + 1616LL);
  *a4 = v4;
  (**(void (__fastcall ***)(struct Microsoft::Bamo::BamoPrincipal *, struct MPCManagerBamo_AutoBamos::BamoPeer *))v4)(
    v4,
    a2);
  return 0LL;
}
