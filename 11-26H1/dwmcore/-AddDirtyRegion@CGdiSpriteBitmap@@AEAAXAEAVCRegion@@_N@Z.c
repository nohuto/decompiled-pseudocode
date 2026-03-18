/*
 * XREFs of ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18012DBA4
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18002FF00 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x18012EF44 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?SetDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1801CC11C (-SetDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV-$span@$$CBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@U.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x18001F980 (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z.c)
 *     ?last@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ @ 0x180021E10 (-last@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJAEAVCRegion@@@Z @ 0x1800E98E8 (-GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJAEAVCRegion@@@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18012DEDC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ @ 0x18012EBFC (-TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ.c)
 *     ?Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z @ 0x18012EC2C (-Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z.c)
 *     McTemplateU0xxxxx_EventWriteTransfer @ 0x1801CF384 (McTemplateU0xxxxx_EventWriteTransfer.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGdiSpriteBitmap::AddDirtyRegion(CGdiSpriteBitmap *this, struct CRegion *a2, char a3)
{
  int v3; // eax
  int v6; // ecx
  int v8; // eax
  __int64 v9; // rcx
  struct IVtrSurfaceManager *VtrSurfaceManager; // rax
  char v11; // r12
  CWindowNode **v12; // rbx
  unsigned __int64 v13; // rdi
  CWindowNode *v14; // r15
  int v15; // edx
  int v16; // ecx
  __int64 *v17; // r12
  __int64 *i; // r15
  __int64 v19; // rdi
  int (__fastcall *v20)(__int64, __int64 *); // rbx
  CRedirectedGDISurface *v21; // rcx
  int v22; // eax
  int v23; // [rsp+20h] [rbp-B9h]
  __int64 v24[2]; // [rsp+40h] [rbp-99h] BYREF
  FastRegion::CRegion *v25; // [rsp+50h] [rbp-89h] BYREF
  __int64 v26; // [rsp+58h] [rbp-81h] BYREF
  int v27; // [rsp+60h] [rbp-79h]
  int v28; // [rsp+64h] [rbp-75h]
  int v29; // [rsp+68h] [rbp-71h]
  int v30; // [rsp+6Ch] [rbp-6Dh]
  __int64 v31; // [rsp+70h] [rbp-69h]
  int v32; // [rsp+78h] [rbp-61h]
  FastRegion::CRegion *v33; // [rsp+A0h] [rbp-39h] BYREF
  int v34; // [rsp+A8h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  v3 = *((_DWORD *)this + 108);
  v25 = (FastRegion::CRegion *)&v26;
  v6 = *((_DWORD *)this + 109);
  if ( v3 <= 0 || v6 <= 0 )
  {
    LODWORD(v26) = 0;
  }
  else
  {
    v26 = 2LL;
    v29 = 16;
    v31 = 16LL;
    v27 = v3;
    v28 = 0;
    v32 = v3;
    v30 = v6;
  }
  if ( **(_DWORD **)a2 )
  {
    if ( !*((_QWORD *)this + 45) && *((_BYTE *)this + 152) )
    {
      v21 = (CRedirectedGDISurface *)*((_QWORD *)this + 16);
      v33 = (FastRegion::CRegion *)&v34;
      v34 = 0;
      if ( (int)CRedirectedGDISurface::GetDirtyRegionFromAccum(v21, (struct CRegion *)&v33) >= 0 )
      {
        v22 = FastRegion::CRegion::Intersect(a2, (const struct CRegion *)&v33);
        if ( v22 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x1B1,
            (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
            (const char *)(unsigned int)v22,
            v23);
      }
      FastRegion::CRegion::FreeMemory(&v33);
    }
    v8 = FastRegion::CRegion::Intersect(a2, (const struct CRegion *)&v25);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1B1,
        (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
        (const char *)(unsigned int)v8,
        v23);
    if ( **(_DWORD **)a2 )
    {
      if ( !*((_BYTE *)this + 152) || !FastRegion::CRegion::Contains((CGdiSpriteBitmap *)((char *)this + 176), a2) )
      {
        CRegion::Union(
          (const struct FastRegion::Internal::CRgnData **)this + 22,
          (const struct FastRegion::Internal::CRgnData **)a2);
        *((_BYTE *)this + 154) = 1;
      }
      v9 = *((_QWORD *)this + 56);
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64, struct CRegion *))(*(_QWORD *)v9 + 80LL))(v9, a2);
        v17 = (__int64 *)*((_QWORD *)this + 58);
        for ( i = (__int64 *)*((_QWORD *)this + 57); i != v17; ++i )
        {
          v19 = *i;
          v24[0] = 0LL;
          v20 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v19 + 72) + 64LL);
          wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v24);
          if ( v20(v19 + 72, v24) >= 0 )
            (*(void (__fastcall **)(__int64, struct CRegion *))(*(_QWORD *)v24[0] + 80LL))(v24[0], a2);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v24);
        }
      }
      if ( *((_BYTE *)this + 149) )
      {
        VtrSurfaceManager = TryGetVtrSurfaceManager();
        if ( VtrSurfaceManager )
          (*(void (__fastcall **)(struct IVtrSurfaceManager *, char *, struct CRegion *))(*(_QWORD *)VtrSurfaceManager
                                                                                        + 8LL))(
            VtrSurfaceManager,
            (char *)this + 120,
            a2);
      }
      v11 = *((_BYTE *)this + 148);
      *((_BYTE *)this + 148) = 1;
      if ( a3 )
      {
        v12 = (CWindowNode **)detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first((_QWORD *)this + 4);
        v13 = detail::pointer_buffer_impl<CResource *,0>::last((__int64 *)this + 4);
        while ( v12 != (CWindowNode **)v13 )
        {
          v14 = *v12;
          if ( (*(unsigned __int8 (__fastcall **)(CWindowNode *, __int64))(*(_QWORD *)*v12 + 64LL))(*v12, 164LL) )
          {
            if ( !v11 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              McTemplateU0xxxxx_EventWriteTransfer(
                v16,
                v15,
                (_DWORD)this,
                *((_QWORD *)this + 52),
                (char)v14,
                *((_QWORD *)v14 + 11),
                *((_QWORD *)this + 10));
            CWindowNode::NotifyDirtySurface(v14, (int **)a2, *((_BYTE *)this + 154));
          }
          ++v12;
        }
      }
    }
  }
  FastRegion::CRegion::FreeMemory(&v25);
}
