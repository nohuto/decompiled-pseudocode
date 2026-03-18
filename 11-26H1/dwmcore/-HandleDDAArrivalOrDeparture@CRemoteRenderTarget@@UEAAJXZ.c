/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ @ 0x180255170
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180149134 (-reset@-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180204064 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ??0CMonitorTransform@@QEAA@XZ @ 0x180209CC4 (--0CMonitorTransform@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x18025935C (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteRenderTarget::HandleDDAArrivalOrDeparture(CRemoteRenderTarget *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax
  struct D2D_SIZE_U v6; // [rsp+40h] [rbp-148h] BYREF
  _BYTE v7[288]; // [rsp+50h] [rbp-138h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 3);
  if ( v3
    && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) != 0) != (*((_QWORD *)this + 5) != 0LL) )
  {
    if ( *((_QWORD *)this + 5) )
    {
      wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset((CResource **)this + 5);
    }
    else
    {
      CMonitorTransform::CMonitorTransform((CMonitorTransform *)v7);
      v6 = 0LL;
      CMonitorTransform::Initialize((__int64)v7, &v6, (__int128 *)this + 4, 1.0, SLODWORD(FLOAT_1_0), 1, 0LL);
      wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset((CResource **)this + 5);
      v4 = CDDARenderTarget::Create(
             *((struct IDXGIOutputDWM **)this + 3),
             *((struct CDesktopTree **)this + 6),
             (CRemoteRenderTarget *)((char *)this + 148),
             (const struct CMonitorTransform *)v7,
             (struct CDDARenderTarget **)this + 5);
      v2 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x110u, 0LL);
    }
  }
  return v2;
}
