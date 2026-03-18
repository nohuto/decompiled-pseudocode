/*
 * XREFs of ?CreateCrossAdapterTexture@CD3DDevice@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAUID3D11Texture2D@@@Z @ 0x180296940
 * Callers:
 *     ?Create@CCrossAdapterTexture@@SAJPEAVCD3DDevice@@AEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z @ 0x1802B7740 (-Create@CCrossAdapterTexture@@SAJPEAVCD3DDevice@@AEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z.c)
 *     ?Create@CSysmemTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z @ 0x1802B920C (-Create@CSysmemTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180069080 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCompatibleTextureFormat@CD3DDevice@@QEBA?AW4DXGI_FORMAT@@W42@@Z @ 0x180131048 (-GetCompatibleTextureFormat@CD3DDevice@@QEBA-AW4DXGI_FORMAT@@W42@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DDevice::CreateCrossAdapterTexture(
        CD3DDevice *this,
        const struct DWM_TEXTURE2D_DESC *a2,
        struct ID3D11Texture2D **a3)
{
  bool v5; // cc
  unsigned int v7; // ebx
  enum DXGI_FORMAT v8; // r9d
  int v9; // r8d
  __int64 v10; // rax
  int v11; // ecx
  int v12; // r12d
  int v13; // ebx
  int v14; // r9d
  int CompatibleTextureFormat; // eax
  int v16; // r9d
  int v17; // eax
  unsigned int v19; // [rsp+20h] [rbp-59h]
  struct ID3D11Texture2D *v20; // [rsp+60h] [rbp-19h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, struct ID3D11Texture2D **); // [rsp+68h] [rbp-11h] BYREF
  __int64 v22; // [rsp+70h] [rbp-9h] BYREF
  _DWORD v23[3]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v24; // [rsp+84h] [rbp+Bh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  *a3 = 0LL;
  v5 = *((_DWORD *)this + 157) < 2000;
  v22 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  if ( !v5 )
  {
    v8 = *((_DWORD *)a2 + 4);
    v9 = *((_DWORD *)a2 + 8);
    v23[0] = *(_DWORD *)a2;
    v23[1] = *((_DWORD *)a2 + 1);
    v10 = *(_QWORD *)((char *)a2 + 20);
    v23[2] = v8;
    v24 = v10;
    v11 = (2 * (v9 & 8 | 0x1000040)) | 0x20;
    if ( (v9 & 0x20) == 0 )
      v11 = 2 * (v9 & 8 | 0x1000040);
    v12 = v11 | 0x400;
    if ( *((char *)a2 + 32) >= 0 )
      v12 = v11;
    if ( *((_DWORD *)this + 281) )
    {
      v13 = -2003304307;
      v19 = 262;
    }
    else
    {
      CompatibleTextureFormat = CD3DDevice::GetCompatibleTextureFormat(this, v8);
      if ( CompatibleTextureFormat == v16 )
      {
        v17 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 68))(
                *((_QWORD *)this + 68),
                &GUID_b898d4fd_b5b3_4ffc_8694_0259864ffcf8,
                &v22);
        v13 = v17;
        if ( v17 < 0 )
        {
          v19 = 269;
        }
        else
        {
          v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD *, int, int, int, unsigned int, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Texture2D **)))(*(_QWORD *)v22 + 48LL))(
                  v22,
                  0LL,
                  0LL,
                  0LL,
                  v23,
                  1,
                  1,
                  v12,
                  v12 | 0x420000u,
                  0LL,
                  &v21);
          v13 = v17;
          if ( v17 < 0 )
          {
            v19 = 281;
          }
          else
          {
            wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v20);
            v17 = (**v21)(v21, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v20);
            v13 = v17;
            if ( v17 >= 0 )
            {
              ((void (__fastcall *)(struct ID3D11Texture2D *, const GUID *, _QWORD, _QWORD))v20->lpVtbl->SetPrivateData)(
                v20,
                &WKPDID_D3DDebugObjectName,
                *((unsigned int *)a2 + 14),
                *((_QWORD *)a2 + 6));
              *a3 = v20;
              v20 = 0LL;
LABEL_21:
              v7 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v13, 5u);
              goto LABEL_22;
            }
            v19 = 283;
          }
        }
        v14 = v17;
LABEL_20:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, v19, 0LL);
        goto LABEL_21;
      }
      v13 = -2003292288;
      v19 = 266;
    }
    v14 = v13;
    goto LABEL_20;
  }
  v7 = -2003292287;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEA,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
    (const char *)0x88982F81LL);
LABEL_22:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
  return v7;
}
