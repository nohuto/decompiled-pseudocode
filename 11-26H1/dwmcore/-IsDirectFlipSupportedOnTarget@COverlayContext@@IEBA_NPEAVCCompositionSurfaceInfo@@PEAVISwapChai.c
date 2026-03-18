/*
 * XREFs of ?IsDirectFlipSupportedOnTarget@COverlayContext@@IEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@@Z @ 0x18023CEC8
 * Callers:
 *     ?IsCandidateDirectFlipCompatible@COverlayContext@@IEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@I_N@Z @ 0x18023CAF0 (-IsCandidateDirectFlipCompatible@COverlayContext@@IEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapCh.c)
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::IsDirectFlipSupportedOnTarget(
        COverlayContext *this,
        struct CCompositionSurfaceInfo *a2,
        struct ISwapChainRealization *a3)
{
  __int64 v3; // rax
  __int64 v6; // rbx
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *((_QWORD *)this + 2411);
  if ( v3 )
  {
    if ( *(struct CCompositionSurfaceInfo **)(v3 + 16) == a2 )
    {
      v6 = *(_QWORD *)(v3 + 24);
      if ( v6 == (*(__int64 (__fastcall **)(struct CCompositionSurfaceInfo *))(*(_QWORD *)a2 + 64LL))(a2) )
        return 1;
    }
  }
  v8 = *(_OWORD *)((*(__int64 (__fastcall **)(_QWORD, struct CCompositionSurfaceInfo *))(**((_QWORD **)this + 7) + 256LL))(
                     *((_QWORD *)this + 7),
                     a2)
                 + 24);
  v9 = *(_QWORD *)a3;
  v13 = v8;
  v10 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(v9 + 128))(a3);
  v11 = *(_DWORD *)((*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)a3 + 1) + 24LL))((char *)a3 + 8, v14) + 8);
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 280LL))(*((_QWORD *)this + 7));
  return (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v12 + 352LL))(
           v12,
           ((unsigned __int64)a3 + 16) & -(__int64)(a3 != 0LL),
           v11,
           v10,
           &v13);
}
