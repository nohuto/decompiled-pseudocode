/*
 * XREFs of ?VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x180014CA0
 * Callers:
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1800133E8 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?VideoProcessorBlt@CDecodeBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x180014C00 (-VideoProcessorBlt@CDecodeBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagREC.c)
 * Callees:
 *     ?VideoProcessorBlt@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@0II2@Z @ 0x180014F24 (-VideoProcessorBlt@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUtagRECT@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetBitmap::VideoProcessorBlt(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 (__fastcall **v12)(_QWORD *, GUID *, __int64 *); // rax
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v17; // rax
  unsigned int v19; // [rsp+20h] [rbp-B1h]
  __int64 v20; // [rsp+70h] [rbp-61h] BYREF
  __int64 v21; // [rsp+78h] [rbp-59h] BYREF
  __int64 v22; // [rsp+80h] [rbp-51h] BYREF
  _DWORD v23[2]; // [rsp+88h] [rbp-49h] BYREF
  _OWORD v24[2]; // [rsp+90h] [rbp-41h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-21h]
  int v26; // [rsp+B8h] [rbp-19h]

  v22 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v25 = 0LL;
  v26 = 0;
  v12 = (__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*a2;
  memset(v24, 0, sizeof(v24));
  ((void (__fastcall *)(_QWORD *, _OWORD *))v12[10])(a2, v24);
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(a1 + 8) + 32LL))(a1 + 8, v23);
  v13 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*a2)(
          a2,
          &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
          &v22);
  v14 = v13;
  if ( v13 < 0 )
  {
    v19 = 375;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v19, 0LL);
    goto LABEL_5;
  }
  v15 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 40))(
          *(_QWORD *)(a1 + 40),
          &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f,
          &v21);
  v14 = v15;
  if ( v15 >= 0 )
  {
    v16 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 120LL))(
                                                                 v21,
                                                                 0LL);
    v13 = (**v16)(v16, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, &v20);
    v14 = v13;
    if ( v13 < 0 )
    {
      v19 = 379;
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 40LL))(*(_QWORD *)(a1 + 40));
      v13 = CD3DDevice::VideoProcessorBlt(v17, v22, a3, a4, v24[0], DWORD1(v24[0]), a5, a6, a7, v20, v23[0], v23[1], a8);
      v14 = v13;
      if ( v13 >= 0 )
        goto LABEL_5;
      v19 = 405;
    }
    goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x179u, 0LL);
LABEL_5:
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return v14;
}
