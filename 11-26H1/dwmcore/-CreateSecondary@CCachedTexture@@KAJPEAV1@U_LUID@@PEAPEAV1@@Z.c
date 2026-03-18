/*
 * XREFs of ?CreateSecondary@CCachedTexture@@KAJPEAV1@U_LUID@@PEAPEAV1@@Z @ 0x1802B17C4
 * Callers:
 *     ?EnsureSecondaryTexture@CTextureCollection@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCCachedTexture@@@Z @ 0x1802B1888 (-EnsureSecondaryTexture@CTextureCollection@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCCachedTexture@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ??0CCachedTexture@@IEAA@U_LUID@@AEBUD2D_SIZE_U@@PEAV0@@Z @ 0x1802B1440 (--0CCachedTexture@@IEAA@U_LUID@@AEBUD2D_SIZE_U@@PEAV0@@Z.c)
 *     ?InitSecondary@CCachedTexture@@IEAAJPEAVICrossAdapterTexture@@@Z @ 0x1802B1BF8 (-InitSecondary@CCachedTexture@@IEAAJPEAVICrossAdapterTexture@@@Z.c)
 */

__int64 __fastcall CCachedTexture::CreateSecondary(
        struct CCachedTexture *a1,
        struct _LUID a2,
        struct CCachedTexture **a3)
{
  CCachedTexture *v6; // rax
  UINT32 v7; // ecx
  struct ICrossAdapterTexture *v8; // rdx
  struct CCachedTexture *v9; // rdi
  int inited; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  D2D_SIZE_U v14; // [rsp+30h] [rbp+8h] BYREF

  v6 = (CCachedTexture *)operator new(0xA8uLL);
  if ( v6 )
  {
    v7 = *((_DWORD *)a1 + 9) - *((_DWORD *)a1 + 7);
    v14.width = *((_DWORD *)a1 + 8) - *((_DWORD *)a1 + 6);
    v14.height = v7;
    v6 = CCachedTexture::CCachedTexture(v6, a2, &v14, a1);
  }
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    &v14,
    (__int64)v6);
  v8 = (struct ICrossAdapterTexture *)*((_QWORD *)a1 + 17);
  v9 = (struct CCachedTexture *)v14;
  inited = CCachedTexture::InitSecondary(*(CCachedTexture **)&v14, v8);
  v11 = inited;
  if ( inited >= 0 )
  {
    v14 = 0LL;
    v11 = 0;
    *a3 = v9;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\texturecollection.cpp",
      (const char *)(unsigned int)inited);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  return v11;
}
