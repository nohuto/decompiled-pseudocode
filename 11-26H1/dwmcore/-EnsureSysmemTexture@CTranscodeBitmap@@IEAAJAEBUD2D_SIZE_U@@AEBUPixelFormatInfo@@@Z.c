/*
 * XREFs of ?EnsureSysmemTexture@CTranscodeBitmap@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@@Z @ 0x1802B24D0
 * Callers:
 *     ?Transcode@CTranscodeBitmap@@QEAAJPEAVIDeviceTexture@@AEBUPixelFormatInfo@@@Z @ 0x1802B27FC (-Transcode@CTranscodeBitmap@@QEAAJPEAVIDeviceTexture@@AEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?Create@CTextureCollection@@SAJPEAVIDeviceTexture@@PEAPEAV1@@Z @ 0x1802B167C (-Create@CTextureCollection@@SAJPEAVIDeviceTexture@@PEAPEAV1@@Z.c)
 *     ?Create@CSysmemTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z @ 0x1802B920C (-Create@CSysmemTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTranscodeBitmap::EnsureSysmemTexture(
        CTranscodeBitmap *this,
        const struct D2D_SIZE_U *a2,
        const struct PixelFormatInfo *a3)
{
  __int64 *v3; // rbx
  __int64 v5; // rcx
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  _QWORD v12[2]; // [rsp+20h] [rbp-39h] BYREF
  _DWORD v13[5]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v14; // [rsp+44h] [rbp-15h]
  int v15; // [rsp+4Ch] [rbp-Dh]
  __int64 v16; // [rsp+50h] [rbp-9h]
  int v17; // [rsp+58h] [rbp-1h]
  const char *v18; // [rsp+60h] [rbp+7h]
  int v19; // [rsp+68h] [rbp+Fh]
  int v20; // [rsp+6Ch] [rbp+13h]
  _BYTE v21[12]; // [rsp+70h] [rbp+17h] BYREF
  int v22; // [rsp+7Ch] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v3 = (__int64 *)((char *)this + 16);
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    v12[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD *, char *))(*(_QWORD *)(v5 + 240) + 32LL))(
           v5 + 240,
           v12,
           (char *)v12 + 4) < 0
      || v12[0] != *a2
      || *(_DWORD *)a3 != *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*v3 + 128) + 24LL))(
                                       *v3 + 128,
                                       v21) )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v3);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 3);
      *((_BYTE *)this + 32) = 0;
    }
  }
  if ( !*v3 )
  {
    v19 = 28;
    v13[2] = 1;
    v18 = "DWM Transcode Sysmem Texture";
    v20 = v22;
    v13[0] = a2->width;
    v13[1] = a2->height;
    v8 = *(_DWORD *)a3;
    v13[3] = 1;
    v14 = 1LL;
    v13[4] = v8;
    v15 = 0;
    v16 = 8LL;
    v17 = 2;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 2);
    v9 = CSysmemTexture::Create((const struct DWM_TEXTURE2D_DESC *)v13, (struct CSysmemTexture **)this + 2);
    if ( v9 < 0 )
    {
      v10 = 104LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\transcodebitmap.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 2) + 248LL) + 32LL))(
    *((_QWORD *)this + 2) + 248LL,
    *((unsigned int *)a3 + 1));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 2) + 248LL) + 40LL))(
    *((_QWORD *)this + 2) + 248LL,
    *((unsigned int *)a3 + 2));
  if ( !*((_QWORD *)this + 3) )
  {
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 3);
    v9 = CTextureCollection::Create(
           (struct IDeviceTexture *)((*((_QWORD *)this + 2) + 120LL) & -(__int64)(*((_QWORD *)this + 2) != 0LL)),
           (struct CTextureCollection **)this + 3);
    if ( v9 < 0 )
    {
      v10 = 114LL;
      goto LABEL_9;
    }
  }
  return 0LL;
}
