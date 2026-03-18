/*
 * XREFs of ?CreateSubResourceBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z @ 0x1802A960C
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1802AEA50 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x1800F62F4 (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_NPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmap::CreateSubResourceBitmap(CD2DBitmap *this, __int64 a2, struct CD2DBitmap **a3)
{
  bool v4; // zf
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  struct CD2DBitmap *v9; // rax
  unsigned int v11; // [rsp+20h] [rbp-38h]
  struct CD2DBitmap *v12; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0LL;
  v4 = *((_DWORD *)this + 58) == 0;
  v12 = 0LL;
  if ( !v4 || *((_DWORD *)this + 39) <= 1u )
  {
    v7 = -2147024809;
    v11 = 403;
    goto LABEL_13;
  }
  v6 = (*(__int64 (__fastcall **)(CD2DBitmap *))(*(_QWORD *)this + 24LL))(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x196u, 0LL);
  }
  else
  {
    if ( (*((_DWORD *)this + 44) & 0x400000) != 0 )
    {
      v7 = -2147024891;
      v11 = 411;
LABEL_13:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v11, 0LL);
      goto LABEL_14;
    }
    v8 = (__int64)MIDL_user_allocate(0xF0uLL);
    if ( v8 )
      v8 = CD2DBitmap::CD2DBitmap(
             v8,
             *((_QWORD *)this + 5),
             0LL,
             *((_QWORD *)this + 13),
             (__int64)this + 144,
             (_OWORD *)this + 12,
             *((_DWORD *)this + 56),
             *((_DWORD *)this + 57),
             1);
    wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)&v12, v8);
    v9 = v12;
    if ( !v12 )
    {
      v7 = -2147024882;
      v11 = 422;
      goto LABEL_13;
    }
    v12 = 0LL;
    *a3 = v9;
  }
LABEL_14:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v12);
  return v7;
}
