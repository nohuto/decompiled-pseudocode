/*
 * XREFs of ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18003E960
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18003A430 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003EC50 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003EC70 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x1801D32BC (-IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMaskBrush::GetBrushParameters(CMaskBrush *this, struct CBrushDrawListGenerator *a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rax
  void (__fastcall ***v11)(_QWORD, __int64); // rcx
  int v12; // esi
  int v13; // eax
  __int64 v14; // rcx
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  int v18; // xmm1_4
  int v19; // eax
  void (__fastcall ***v20)(_QWORD, __int64); // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v24[4]; // [rsp+38h] [rbp-21h] BYREF
  int v25; // [rsp+58h] [rbp-1h]
  int v26; // [rsp+5Ch] [rbp+3h]
  int v27; // [rsp+60h] [rbp+7h]
  int v28; // [rsp+64h] [rbp+Bh]
  __m128i si128; // [rsp+68h] [rbp+Fh]

  v2 = v24;
  v3 = 4LL;
  v23 = *(_QWORD *)a2;
  v4 = 4LL;
  do
  {
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v2++);
    --v4;
  }
  while ( v4 );
  v7 = *((_QWORD *)this + 15);
  v26 = *((_DWORD *)a2 + 11);
  v27 = *((_DWORD *)a2 + 12);
  v25 = 0;
  v28 = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 344LL))(v7, &v23);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1DBu, 0LL);
LABEL_26:
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v23);
LABEL_24:
    CBrushDrawListGenerator::Reset(a2);
    return v9;
  }
  v10 = v24[0];
  v24[0] = 0LL;
  *(__m128i *)((char *)a2 + 56) = si128;
  v11 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 1) = v10;
  if ( v11 )
    (**v11)(v11, 1LL);
  v12 = v28;
  v13 = 1;
  if ( *((_DWORD *)a2 + 10) > 1u )
    v13 = *((_DWORD *)a2 + 10);
  *((_DWORD *)a2 + 10) = v13;
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v23);
  v14 = *((_QWORD *)this + 14);
  if ( !v14 )
    goto LABEL_9;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 64LL))(v14, 88LL)
    && !CMaskBrush::IsValidMaskResource(*(const struct CResource **)(*((_QWORD *)this + 14) + 144LL)) )
  {
    v9 = -2147024846;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MASKBRUSH_DRAW_ERROR_INVALID_INPUT,
        2147942450LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024846, 0x1F2u, 0LL);
    goto LABEL_24;
  }
  v16 = v24;
  v23 = *(_QWORD *)a2;
  do
  {
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v16++);
    --v3;
  }
  while ( v3 );
  v17 = *((_QWORD *)this + 14);
  v18 = *((_DWORD *)a2 + 12);
  v26 = *((_DWORD *)a2 + 11);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v25 = 0;
  v27 = v18;
  v28 = 0;
  v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 344LL))(v17, &v23);
  v9 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x1FAu, 0LL);
    goto LABEL_26;
  }
  v20 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)a2 + 2);
  v21 = v24[0];
  v24[0] = 0LL;
  *((_QWORD *)a2 + 2) = v21;
  if ( v20 )
    (**v20)(v20, 1LL);
  v22 = 2;
  if ( *((_DWORD *)a2 + 10) > 2u )
    v22 = *((_DWORD *)a2 + 10);
  v12 |= v28;
  *((_DWORD *)a2 + 10) = v22;
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v23);
LABEL_9:
  *((_DWORD *)a2 + 13) = v12;
  return 0;
}
