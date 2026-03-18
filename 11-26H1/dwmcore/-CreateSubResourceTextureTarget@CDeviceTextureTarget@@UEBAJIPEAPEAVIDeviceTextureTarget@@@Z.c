/*
 * XREFs of ?CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z @ 0x1802A9C30
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDeviceTextureTarget@@IEAA@PEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NI@Z @ 0x1800F5CDC (--0CDeviceTextureTarget@@IEAA@PEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_.c)
 *     ??1?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800F5FD8 (--1-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CDeviceTextureTarget@@MEAAJXZ @ 0x1800F6130 (-Initialize@CDeviceTextureTarget@@MEAAJXZ.c)
 *     ?IsValid@CD2DBitmap@@UEBAJXZ @ 0x180173780 (-IsValid@CD2DBitmap@@UEBAJXZ.c)
 *     ??4?$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTextureTarget@@@Z @ 0x1801B7248 (--4-$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTe.c)
 */

__int64 __fastcall CDeviceTextureTarget::CreateSubResourceTextureTarget(
        CDeviceTextureTarget *this,
        unsigned int a2,
        struct IDeviceTextureTarget **a3)
{
  CD2DBitmap *v4; // rcx
  int IsValid; // eax
  unsigned int v8; // edi
  volatile signed __int32 *v9; // rax
  CDeviceTextureTarget *v10; // rbx
  int v11; // r9d
  unsigned int v13; // [rsp+20h] [rbp-38h]
  CDeviceTextureTarget *v14; // [rsp+60h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = (CDeviceTextureTarget *)((char *)this - 240);
  v14 = 0LL;
  if ( a2 >= *((_DWORD *)v4 + 39) || a2 == *((_DWORD *)this - 2) )
  {
    v8 = -2147024809;
    v13 = 100;
    goto LABEL_14;
  }
  IsValid = CD2DBitmap::IsValid(v4);
  v8 = IsValid;
  if ( IsValid < 0 )
  {
    v13 = 103;
    goto LABEL_11;
  }
  v9 = (volatile signed __int32 *)MIDL_user_allocate(0x128uLL);
  if ( v9 )
    v9 = (volatile signed __int32 *)CDeviceTextureTarget::CDeviceTextureTarget(
                                      (__int64)v9,
                                      *((_QWORD *)this - 25),
                                      *((_QWORD *)this - 17),
                                      (__int64)this - 96,
                                      (__int64)this - 48,
                                      *((_DWORD *)this - 4),
                                      *((_DWORD *)this - 3),
                                      *((_DWORD *)this + 11),
                                      *((_BYTE *)this + 49),
                                      a2);
  wil::com_ptr_t<CDeviceTextureTarget,wil::err_returncode_policy>::operator=((volatile signed __int32 **)&v14, v9);
  v10 = v14;
  if ( !v14 )
  {
    v8 = -2147024882;
    v13 = 114;
LABEL_14:
    v11 = v8;
    goto LABEL_15;
  }
  IsValid = CDeviceTextureTarget::Initialize(v14);
  v8 = IsValid;
  if ( IsValid < 0 )
  {
    v13 = 116;
LABEL_11:
    v11 = IsValid;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v13, 0LL);
    goto LABEL_16;
  }
  v14 = 0LL;
  *a3 = (struct IDeviceTextureTarget *)(((unsigned __int64)v10 + 240) & -(__int64)(v10 != 0LL));
LABEL_16:
  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::~com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>((__int64 *)&v14);
  return v8;
}
