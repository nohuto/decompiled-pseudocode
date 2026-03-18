/*
 * XREFs of ?SyncLock@CLegacyRenderTarget@@UEAAXI@Z @ 0x1801B0040
 * Callers:
 *     <none>
 * Callees:
 *     ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z @ 0x1800F0834 (-SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CLegacyRenderTarget::SyncLock(CLegacyRenderTarget *this, unsigned int a2)
{
  _DWORD *v4; // rcx
  char v5; // al
  __int64 v6; // rcx

  v4 = (_DWORD *)((char *)this - 160);
  if ( v4[8094] )
  {
    v5 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 224LL))(v4);
    if ( (int)COverlayContext::SyncLock(
                (CLegacyRenderTarget *)((char *)this + 56),
                (struct IOverlaySwapChain *)((*((_QWORD *)this + 5) + 24LL) & -(__int64)(*((_QWORD *)this + 5) != 0LL)),
                a2,
                *((_DWORD *)this + 8044),
                v5) >= 0 )
    {
      *((_DWORD *)this + 8054) += a2;
      ++*((_DWORD *)this + 8055);
      v6 = *((_QWORD *)this + 4020);
      if ( v6 )
      {
        *((_QWORD *)this + 4020) = v6 + *((_QWORD *)this + 4021) * a2;
        *((_DWORD *)this + 8044) += a2;
      }
    }
  }
}
