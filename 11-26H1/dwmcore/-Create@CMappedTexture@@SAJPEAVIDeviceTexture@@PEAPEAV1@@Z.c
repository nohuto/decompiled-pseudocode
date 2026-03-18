/*
 * XREFs of ?Create@CMappedTexture@@SAJPEAVIDeviceTexture@@PEAPEAV1@@Z @ 0x1802B8904
 * Callers:
 *     ?Transcode@CTranscodeBitmap@@QEAAJPEAVIDeviceTexture@@AEBUPixelFormatInfo@@@Z @ 0x1802B27FC (-Transcode@CTranscodeBitmap@@QEAAJPEAVIDeviceTexture@@AEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014448 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCMappedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800E2D20 (--1-$com_ptr_t@VCMappedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?Initialize@CMappedTexture@@QEAAJPEAVIDeviceTexture@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802B8B78 (-Initialize@CMappedTexture@@QEAAJPEAVIDeviceTexture@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMappedTexture::Create(struct IDeviceTexture *a1, struct CMappedTexture **a2)
{
  void *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // edi
  int v10[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v11[4]; // [rsp+28h] [rbp-20h] BYREF
  enum DXGI_ALPHA_MODE v12; // [rsp+2Ch] [rbp-1Ch]
  enum DXGI_COLOR_SPACE_TYPE v13; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  (*(void (__fastcall **)(char *, _BYTE *))(*((_QWORD *)a1 + 1) + 24LL))((char *)a1 + 8, v11);
  v4 = operator new(0x48uLL);
  v5 = (__int64)v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x48uLL);
    CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>(
      v5,
      v6);
    *(_QWORD *)v10 = v5;
    *(_QWORD *)v5 = &CMappedTexture::`vftable';
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 36) = 0LL;
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_QWORD *)(v5 + 56) = 0LL;
    *(_BYTE *)(v5 + 64) = 0;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v5 + 8));
  }
  else
  {
    v5 = 0LL;
    *(_QWORD *)v10 = 0LL;
  }
  v7 = CMappedTexture::Initialize((CMappedTexture *)v5, a1, v12, v13);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *(_QWORD *)v10 = 0LL;
    v8 = 0;
    *a2 = (struct CMappedTexture *)v5;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\mappedtexture.cpp",
      (const char *)(unsigned int)v7);
  }
  wil::com_ptr_t<CMappedTexture,wil::err_returncode_policy>::~com_ptr_t<CMappedTexture,wil::err_returncode_policy>((__int64 *)v10);
  return v8;
}
