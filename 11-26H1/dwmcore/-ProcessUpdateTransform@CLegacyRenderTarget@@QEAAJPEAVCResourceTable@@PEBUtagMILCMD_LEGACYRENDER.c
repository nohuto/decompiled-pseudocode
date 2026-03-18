/*
 * XREFs of ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1801FC5DC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x18014921C (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x18014ACF0 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180204064 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1802594EC (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::ProcessUpdateTransform(
        CLegacyRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM *a3)
{
  int v3; // edx
  __int64 v6; // rcx
  __int128 v7; // xmm0
  int v8; // eax
  int v9; // r9d
  CDDARenderTarget *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 result; // rax
  _DWORD v14[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v16[208]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 8028) != v3 )
  {
    *((_DWORD *)this + 8028) = v3;
    v6 = *((_QWORD *)this + 25);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v6 + 24) + 168LL))(v6 + 24);
  }
  CLegacyRenderTarget::EnsureDXGIOutput(this);
  v7 = *((_OWORD *)a3 + 1);
  v14[0] = *((_DWORD *)a3 + 10);
  v14[1] = *((_DWORD *)a3 + 11);
  v14[2] = *((_DWORD *)a3 + 12);
  v14[3] = *((_DWORD *)a3 + 13);
  v8 = *((_DWORD *)a3 + 14);
  v15 = v7;
  CMonitorTransform::Initialize(
    (_DWORD)this + 29920,
    (_DWORD)this + 120,
    (unsigned int)&v15,
    v9,
    *((_DWORD *)a3 + 9),
    v8,
    (__int64)v14);
  CLegacyRenderTarget::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 160));
  v10 = (CDDARenderTarget *)*((_QWORD *)this + 26);
  if ( v10 )
    CDDARenderTarget::UpdateTransform(v10, (CLegacyRenderTarget *)((char *)this + 29920));
  v11 = *((_QWORD *)this + 24);
  if ( v11 )
  {
    memset_0(v16, 0, 0xC8uLL);
    if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11 + 32LL))(v11, v16) >= 0 )
      *((_BYTE *)this + 32514) = (v16[108] & 8) != 0;
  }
  CTargetDirtyBase<8>::SetFullDirty((__int64)this + 30208);
  v12 = *((_QWORD *)this + 23);
  if ( v12 )
    *(_BYTE *)(v12 + 2628) = 1;
  result = 0LL;
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 616LL) + 747LL) = 1;
  return result;
}
