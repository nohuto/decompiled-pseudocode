/*
 * XREFs of ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1801533F4
 * Callers:
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x180154E04 (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureCache@CCompositingShaderCache@@SAJPEAPEAV1@@Z @ 0x180153914 (-EnsureCache@CCompositingShaderCache@@SAJPEAPEAV1@@Z.c)
 *     ??0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@@PEAUID3DDeviceContextState@@PEAVCD3DDevice@@PEAVCCompositingShaderCache@@@Z @ 0x1801539A8 (--0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceShaderComposer::Create(struct CD3DDevice *a1, struct CSurfaceShaderComposer **a2)
{
  __int64 v2; // rdi
  __int64 v3; // r15
  __int64 (__fastcall *v6)(__int64, void *, __int64, _QWORD, struct ID3D11VertexShader **); // rbx
  int v7; // eax
  __int64 v8; // r8
  unsigned int v9; // ebx
  __int64 (__fastcall *v10)(__int64, const char **, __int64, void *, __int64, struct ID3D11InputLayout **); // rbx
  __int64 v11; // rcx
  struct ID3DDeviceContextState *v12; // rcx
  struct ID3D11Buffer *v13; // rcx
  struct ID3D11InputLayout *v14; // rcx
  struct ID3D11VertexShader *v15; // rcx
  __int64 (__fastcall *v17)(__int64, __int128 *, __int128 *, struct ID3D11Buffer **); // rbx
  __int64 (__fastcall *v18)(__int64, __int64, _DWORD *); // rbx
  void (__fastcall *v19)(__int64, struct ID3DDeviceContextState *, __int64 *); // rbx
  CSurfaceShaderComposer *v20; // rax
  struct CSurfaceShaderComposer *v21; // rax
  unsigned int v22; // [rsp+20h] [rbp-E0h]
  struct ID3DDeviceContextState *v23; // [rsp+50h] [rbp-B0h] BYREF
  struct ID3D11Buffer *v24; // [rsp+58h] [rbp-A8h] BYREF
  struct ID3D11InputLayout *v25; // [rsp+60h] [rbp-A0h] BYREF
  struct ID3D11VertexShader *v26; // [rsp+68h] [rbp-98h] BYREF
  __int64 v27; // [rsp+70h] [rbp-90h] BYREF
  struct CCompositingShaderCache *v28; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v29[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v30; // [rsp+88h] [rbp-78h] BYREF
  __int128 v31; // [rsp+98h] [rbp-68h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-58h]
  const char *v33; // [rsp+B0h] [rbp-50h] BYREF
  int v34; // [rsp+B8h] [rbp-48h]
  __int64 v35; // [rsp+BCh] [rbp-44h]
  int v36; // [rsp+C4h] [rbp-3Ch]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  const char *v38; // [rsp+D0h] [rbp-30h]
  int v39; // [rsp+D8h] [rbp-28h]
  __int64 v40; // [rsp+DCh] [rbp-24h]
  int v41; // [rsp+E4h] [rbp-1Ch]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  const char *v43; // [rsp+F0h] [rbp-10h]
  int v44; // [rsp+F8h] [rbp-8h]
  __int64 v45; // [rsp+FCh] [rbp-4h]
  int v46; // [rsp+104h] [rbp+4h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+110h] [rbp+10h] BYREF
  struct CCompositingShaderCache **v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]

  v2 = *((_QWORD *)a1 + 68);
  v3 = *((_QWORD *)a1 + 69);
  v33 = "POSITION";
  v26 = 0LL;
  v38 = "TEXCOORD";
  v43 = "TEXCOORD";
  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v27 = 0LL;
  v29[0] = 37632;
  v29[1] = 40960;
  v34 = 0;
  v35 = 16LL;
  v36 = -1;
  v37 = 0LL;
  v39 = 0;
  v40 = 16LL;
  v41 = -1;
  v42 = 0LL;
  v44 = 1;
  v45 = 16LL;
  v46 = -1;
  v47 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0t_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Start, 0LL);
  v6 = *(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, struct ID3D11VertexShader **))(*(_QWORD *)v2 + 96LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
  v7 = v6(v2, &unk_180348500, 832LL, 0LL, &v26);
  v9 = v7;
  if ( v7 < 0 )
  {
    v22 = 134;
    goto LABEL_8;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    LODWORD(v28) = 0;
    v49 = &v28;
    v50 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_D3DSHADER_CREATE_Stop,
      v8,
      2u,
      &v48);
  }
  v10 = *(__int64 (__fastcall **)(__int64, const char **, __int64, void *, __int64, struct ID3D11InputLayout **))(*(_QWORD *)v2 + 88LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
  v7 = v10(v2, &v33, 3LL, &unk_180348500, 832LL, &v25);
  v9 = v7;
  if ( v7 < 0 )
  {
    v22 = 143;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v22, 0LL);
    goto LABEL_9;
  }
  *(_QWORD *)&v31 = 0x200000090LL;
  *(_QWORD *)&v30 = xmmword_1802F4440;
  *((_QWORD *)&v31 + 1) = 0x1000000000001LL;
  v17 = *(__int64 (__fastcall **)(__int64, __int128 *, __int128 *, struct ID3D11Buffer **))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
  v7 = v17(v2, &v31, &v30, &v24);
  v9 = v7;
  if ( v7 < 0 )
  {
    v22 = 156;
    goto LABEL_8;
  }
  v18 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v2 + 376LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
  v7 = v18(v2, 1LL, v29);
  v9 = v7;
  if ( v7 < 0 )
  {
    v22 = 166;
    goto LABEL_8;
  }
  v19 = *(void (__fastcall **)(__int64, struct ID3DDeviceContextState *, __int64 *))(*(_QWORD *)v3 + 1048LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
  v19(v3, v23, &v27);
  (*(void (__fastcall **)(__int64, struct ID3D11InputLayout *))(*(_QWORD *)v3 + 136LL))(v3, v25);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, struct ID3D11Buffer **, void *, void *))(*(_QWORD *)v3 + 144LL))(
    v3,
    0LL,
    1LL,
    &v24,
    &unk_180348870,
    &unk_18034885C);
  (*(void (__fastcall **)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD))(*(_QWORD *)v3 + 88LL))(
    v3,
    v26,
    0LL,
    0LL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 344LL))(v3, *((_QWORD *)a1 + 268));
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 288LL))(v3, *((_QWORD *)a1 + 269), 0LL);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 192LL))(v3, 4LL);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v3 + 1048LL))(v3, v27, 0LL);
  v28 = 0LL;
  v7 = CCompositingShaderCache::EnsureCache(&v28);
  v9 = v7;
  if ( v7 < 0 )
  {
    v22 = 201;
    goto LABEL_8;
  }
  v20 = (CSurfaceShaderComposer *)MIDL_user_allocate(0x70uLL);
  if ( v20 )
  {
    v21 = CSurfaceShaderComposer::CSurfaceShaderComposer(v20, v26, v25, v24, v23, a1, v28);
    *a2 = v21;
    if ( v21 )
      goto LABEL_9;
  }
  else
  {
    *a2 = 0LL;
  }
  v9 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xD3u, 0LL);
LABEL_9:
  v11 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    ((void (__fastcall *)(struct ID3DDeviceContextState *))v12->lpVtbl->Release)(v12);
  }
  v13 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    ((void (__fastcall *)(struct ID3D11Buffer *))v13->lpVtbl->Release)(v13);
  }
  v14 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    ((void (__fastcall *)(struct ID3D11InputLayout *))v14->lpVtbl->Release)(v14);
  }
  v15 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    ((void (__fastcall *)(struct ID3D11VertexShader *))v15->lpVtbl->Release)(v15);
  }
  return v9;
}
