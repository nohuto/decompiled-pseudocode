/*
 * XREFs of ?Retire@CCompositionFrame@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z @ 0x14001DFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001EB30 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001EB70 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x14001EB9C (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x14005FD70 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionFrame::Retire(
        CCompositionFrame *this,
        const struct DXGI_FRAME_STATISTICS *a2,
        const struct DXGI_FRAME_STATISTICS *a3)
{
  char *v3; // rsi
  char *i; // rbx
  CLegacyTokenBuffer *v8; // rbx
  __int64 v9; // rsi
  CLegacyTokenBuffer **v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // edx

  v3 = (char *)this + 248;
  *((_DWORD *)this + 48) = 2;
  for ( i = (char *)*((_QWORD *)this + 31); i != v3; i = *(char **)i )
    (*(void (__fastcall **)(_QWORD *, const struct DXGI_FRAME_STATISTICS *, const struct DXGI_FRAME_STATISTICS *))(*((_QWORD *)i - 1) + 48LL))(
      (_QWORD *)i - 1,
      a2,
      a3);
  v8 = (CLegacyTokenBuffer *)*((_QWORD *)this + 26);
  if ( v8 )
  {
    v9 = *((_QWORD *)this + 37);
    CLegacyTokenBuffer::Reset(*((CLegacyTokenBuffer **)this + 26));
    CTokenManager::AcquireTokenManagerLock((CTokenManager *)v9);
    if ( *(_DWORD *)(v9 + 176) <= 3u )
    {
      v10 = (CLegacyTokenBuffer **)(v9 + 160);
      v11 = *(_QWORD *)(v9 + 160);
      if ( *(_QWORD *)(v11 + 8) != v9 + 160 )
        __fastfail(3u);
      *(_QWORD *)v8 = v11;
      *((_QWORD *)v8 + 1) = v10;
      *(_QWORD *)(v11 + 8) = v8;
      *v10 = v8;
      ++*(_DWORD *)(v9 + 176);
      v8 = 0LL;
    }
    CTokenManager::ReleaseTokenManagerLock((CTokenManager *)v9);
    if ( v8 )
      CLegacyTokenBuffer::`scalar deleting destructor'(v8, v12);
    *((_QWORD *)this + 26) = 0LL;
  }
  *((_BYTE *)this + 216) = 0;
}
