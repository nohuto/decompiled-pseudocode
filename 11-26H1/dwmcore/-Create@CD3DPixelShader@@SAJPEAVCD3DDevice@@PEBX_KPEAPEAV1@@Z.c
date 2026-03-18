/*
 * XREFs of ?Create@CD3DPixelShader@@SAJPEAVCD3DDevice@@PEBX_KPEAPEAV1@@Z @ 0x1800F8320
 * Callers:
 *     ?CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x1800F82B4 (-CreateResource@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x1800F7A8C (--0CD3DResource@@IEAA@_N@Z.c)
 *     ?CreatePixelShader@CD3DDevice@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800F8508 (-CreatePixelShader@CD3DDevice@@QEAAJPEBX_KPEAUID3D11ClassLinkage@@PEAPEAUID3D11PixelShader@@@Z.c)
 *     ?Initialize@CD3DPixelShader@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11PixelShader@@@Z @ 0x1800F85A8 (-Initialize@CD3DPixelShader@@IEAAJPEAVCD3DResourceManager@@IPEAUID3D11PixelShader@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DPixelShader::Create(
        struct CD3DDevice *a1,
        const void *a2,
        unsigned __int64 a3,
        struct CD3DPixelShader **a4)
{
  CD3DResource *v8; // rax
  CD3DResource *v9; // rbx
  __int64 v10; // rdx
  void (__fastcall *v11)(CD3DResource *); // rax
  struct ID3D11ClassLinkage *v12; // r9
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // r8
  unsigned int v17; // [rsp+20h] [rbp-58h]
  int v18; // [rsp+30h] [rbp-48h] BYREF
  struct ID3D11PixelShader *v19; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+40h] [rbp-38h] BYREF
  int *v21; // [rsp+50h] [rbp-28h]
  __int64 v22; // [rsp+58h] [rbp-20h]

  v19 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v18 = 1;
    v21 = &v18;
    v22 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_D3DSHADER_CREATE_Start,
      a3,
      2u,
      &v20);
  }
  v8 = (CD3DResource *)operator new(0x80uLL);
  v9 = v8;
  if ( v8 )
  {
    CD3DResource::CD3DResource(v8, 0LL);
    *((_QWORD *)v9 + 15) = v10;
    v11 = (void (__fastcall *)(CD3DResource *))*(&CD3DPixelShader::`vftable' + 1);
    *(_QWORD *)v9 = &CD3DPixelShader::`vftable';
    v11(v9);
    v13 = CD3DDevice::CreatePixelShader(a1, a2, a3, v12, &v19);
    v14 = v13;
    if ( v13 < 0 )
    {
      v17 = 45;
    }
    else
    {
      v13 = CD3DPixelShader::Initialize(v9, (struct CD3DDevice *)((char *)a1 + 1136), a3, v19);
      v14 = v13;
      if ( v13 >= 0 )
      {
        *a4 = v9;
        v9 = 0LL;
        goto LABEL_9;
      }
      v17 = 47;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, v17, 0LL);
  }
  else
  {
    v9 = 0LL;
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x25u, 0LL);
  }
LABEL_9:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v18 = 1;
    v21 = &v18;
    v22 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_D3DSHADER_CREATE_Stop,
      v15,
      2u,
      &v20);
  }
  if ( v19 )
    ((void (__fastcall *)(struct ID3D11PixelShader *))v19->lpVtbl->Release)(v19);
  if ( v9 )
    (*(void (__fastcall **)(CD3DResource *))(*(_QWORD *)v9 + 16LL))(v9);
  return v14;
}
