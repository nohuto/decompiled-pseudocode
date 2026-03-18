/*
 * XREFs of ?UpdateCrossAdapterSource@CTextureCollection@@IEAAJXZ @ 0x1802B21B0
 * Callers:
 *     ?EnsureSecondaryTexture@CTextureCollection@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCCachedTexture@@@Z @ 0x1802B1888 (-EnsureSecondaryTexture@CTextureCollection@@IEAAJAEBVRenderTargetInfo@@PEAPEAVCCachedTexture@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?MarkFullInvalid@CCachedTexture@@QEAAXXZ @ 0x1802B1DE4 (-MarkFullInvalid@CCachedTexture@@QEAAXXZ.c)
 *     ?Update@CCachedTexture@@IEAAJXZ @ 0x1802B1FF4 (-Update@CCachedTexture@@IEAAJXZ.c)
 *     ?Create@CCrossAdapterTexture@@SAJPEAVCD3DDevice@@AEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z @ 0x1802B7740 (-Create@CCrossAdapterTexture@@SAJPEAVCD3DDevice@@AEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTextureCollection::UpdateCrossAdapterSource(CTextureCollection *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // rax
  struct CD3DDevice *v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  struct CCrossAdapterTexture *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  struct CCrossAdapterTexture *v15; // [rsp+20h] [rbp-60h] BYREF
  int v16; // [rsp+2Ch] [rbp-54h]
  _BYTE v17[28]; // [rsp+30h] [rbp-50h] BYREF
  int v18; // [rsp+4Ch] [rbp-34h]
  __int64 v19; // [rsp+50h] [rbp-30h]
  int v20; // [rsp+58h] [rbp-28h]
  const char *v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+6Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  if ( *((_BYTE *)this + 160) )
    return 0LL;
  if ( !*((_QWORD *)this + 17) )
  {
    v2 = *((_QWORD *)this + 16);
    v21 = "DWM Cross-Adapter Source Bitmap";
    v23 = v16;
    v22 = 31;
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 120LL))(v2, 0LL);
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 80LL))(v3, v17);
    v4 = (__int64 *)*((_QWORD *)this + 16);
    v18 = 0;
    v19 = 8LL;
    v20 = 2;
    v5 = *v4;
    v15 = 0LL;
    v6 = (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64 *))(v5 + 40))(v4);
    v7 = CCrossAdapterTexture::Create(v6, (const struct DWM_TEXTURE2D_DESC *)v17, &v15);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF9,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\texturecollection.cpp",
        (const char *)(unsigned int)v7);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
      return v8;
    }
    v10 = v15;
    v11 = *((_QWORD *)this + 17);
    v15 = 0LL;
    v12 = ((unsigned __int64)v10 + 120) & -(__int64)(v10 != 0LL);
    *((_QWORD *)this + 17) = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    CCachedTexture::MarkFullInvalid(this);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
  }
  v13 = CCachedTexture::Update(this);
  v14 = v13;
  if ( v13 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFF,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\texturecollection.cpp",
    (const char *)(unsigned int)v13);
  return v14;
}
