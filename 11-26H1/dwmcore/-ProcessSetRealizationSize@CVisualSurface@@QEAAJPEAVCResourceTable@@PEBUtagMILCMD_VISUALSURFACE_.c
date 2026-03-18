/*
 * XREFs of ?ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE@@@Z @ 0x18020E52C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800224D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearAllRenderTargets@CVisualSurface@@AEAAXXZ @ 0x18009A268 (-ClearAllRenderTargets@CVisualSurface@@AEAAXXZ.c)
 *     ?clear@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18009C2C0 (-clear@-$vector_facade@USourceCVI@CVisualSurface@@V-$buffer_impl@USourceCVI@CVisualSurface@@$03$.c)
 *     ?CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180203C2C (-CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$emplace_back@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@H@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@H@Z @ 0x18026333C (--$emplace_back@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@H@-$vector_f.c)
 */

__int64 __fastcall CVisualSurface::ProcessSetRealizationSize(
        CVisualSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE *a3)
{
  float *v3; // rdi
  __int32 v4; // xmm1_4
  bool v6; // zf
  char v7; // di
  int v8; // eax
  unsigned int v9; // esi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CCachedVisualImage *v12; // [rsp+50h] [rbp+8h] BYREF
  struct CCachedVisualImage *v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  v3 = (float *)((char *)this + 196);
  COERCE_FLOAT(v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 2) - *((float *)this + 48)) & v4) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 3) - *v3) & v4) > 0.0000011920929 )
  {
    v6 = *((_BYTE *)this + 205) == 0;
    *((_QWORD *)this + 24) = *((_QWORD *)a3 + 1);
    if ( v6 )
    {
      CVisualSurface::ClearAllRenderTargets(this);
      v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    }
  }
  v7 = COERCE_FLOAT(*((_DWORD *)this + 48) & v4) >= 0.0000011920929
    || COERCE_FLOAT(*(_DWORD *)v3 & v4) >= 0.0000011920929;
  if ( v7 != *((_BYTE *)this + 204) )
  {
    detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 11);
    if ( v7 )
    {
      v13 = 0LL;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v13);
      v8 = CCachedVisualImage::CreateForVisualSurface(*((struct CComposition **)this + 3), &v13);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF6,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
          (const char *)(unsigned int)v8);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
        return v9;
      }
      v12 = v13;
      v13 = 0LL;
      detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::emplace_back<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,int>(
        (char *)this + 88,
        &v12);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
    }
    *((_BYTE *)this + 204) = v7;
  }
  CResource::NotifyOnChanged((__int64)this, 6u, 0LL);
  return 0LL;
}
