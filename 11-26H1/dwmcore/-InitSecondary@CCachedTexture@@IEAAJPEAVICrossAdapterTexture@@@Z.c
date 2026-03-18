/*
 * XREFs of ?InitSecondary@CCachedTexture@@IEAAJPEAVICrossAdapterTexture@@@Z @ 0x1802B1BF8
 * Callers:
 *     ?CreateSecondary@CCachedTexture@@KAJPEAV1@U_LUID@@PEAPEAV1@@Z @ 0x1802B17C4 (-CreateSecondary@CCachedTexture@@KAJPEAV1@U_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?CanTextureFromCrossAdapter@CD3DDevice@@QEBA_NXZ @ 0x1802B164C (-CanTextureFromCrossAdapter@CD3DDevice@@QEBA_NXZ.c)
 *     ?MarkFullInvalid@CCachedTexture@@QEAAXXZ @ 0x1802B1DE4 (-MarkFullInvalid@CCachedTexture@@QEAAXXZ.c)
 *     ?Create@CDeviceTexture@@SAJPEAVCD3DDevice@@AEBVDWM_TEXTURE2D_DESC@@_NPEAPEAV1@@Z @ 0x1802B78B8 (-Create@CDeviceTexture@@SAJPEAVCD3DDevice@@AEBVDWM_TEXTURE2D_DESC@@_NPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedTexture::InitSecondary(CCachedTexture *this, struct ICrossAdapterTexture *a2)
{
  _QWORD *v2; // rsi
  __int64 (__fastcall *v5)(struct ICrossAdapterTexture *, _QWORD, _QWORD *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rcx
  CD3DDevice *v10; // rbx
  char CanTextureFromCrossAdapter; // al
  __int64 v12; // rax
  bool v13; // r8
  int v14; // eax
  struct CDeviceTexture *v15; // rdx
  struct CDeviceTexture *v16; // [rsp+20h] [rbp-60h] BYREF
  int v17; // [rsp+2Ch] [rbp-54h]
  _DWORD v18[5]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+44h] [rbp-3Ch]
  int v20; // [rsp+4Ch] [rbp-34h]
  __int64 v21; // [rsp+50h] [rbp-30h]
  int v22; // [rsp+58h] [rbp-28h]
  const char *v23; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+68h] [rbp-18h]
  int v25; // [rsp+6Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v2 = (_QWORD *)((char *)this + 136);
  v5 = *(__int64 (__fastcall **)(struct ICrossAdapterTexture *, _QWORD, _QWORD *))(*(_QWORD *)a2 + 136LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 17);
  v6 = v5(a2, *((_QWORD *)this + 14), v2);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\texturecollection.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  (*(void (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*v2 + 72LL))(
    *v2,
    ((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
  v9 = *v2;
  *((_BYTE *)this + 160) = 1;
  v10 = (CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
  CanTextureFromCrossAdapter = CD3DDevice::CanTextureFromCrossAdapter(v10);
  *((_BYTE *)this + 161) = CanTextureFromCrossAdapter;
  if ( !CanTextureFromCrossAdapter )
  {
    v23 = "DWM Secondary Texture)";
    v18[0] = *((_DWORD *)this + 8) - *((_DWORD *)this + 6);
    v18[1] = *((_DWORD *)this + 9) - *((_DWORD *)this + 7);
    v25 = v17;
    v12 = *((_QWORD *)a2 + 1);
    v24 = 22;
    v18[2] = 1;
    v18[3] = 1;
    v18[4] = *(_DWORD *)(*(__int64 (__fastcall **)(char *, struct CDeviceTexture **))(v12 + 24))((char *)a2 + 8, &v16);
    v19 = 1LL;
    v20 = 0;
    v21 = 8LL;
    v22 = 0;
    v16 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v16);
    v14 = CDeviceTexture::Create(v10, (const struct DWM_TEXTURE2D_DESC *)v18, v13, &v16);
    v7 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\texturecollection.cpp",
        (const char *)(unsigned int)v14);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
      return v7;
    }
    v15 = v16;
    v16 = 0LL;
    wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=(
      (__int64 *)this + 16,
      ((unsigned __int64)v15 + 120) & -(__int64)(v15 != 0LL));
    CCachedTexture::MarkFullInvalid(this);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
  }
  return 0LL;
}
