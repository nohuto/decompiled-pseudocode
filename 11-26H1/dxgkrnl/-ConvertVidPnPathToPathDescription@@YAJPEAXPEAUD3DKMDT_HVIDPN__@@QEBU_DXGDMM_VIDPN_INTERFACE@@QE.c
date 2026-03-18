/*
 * XREFs of ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x14034741C
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x140340D3C (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPNTARGETMODESET__@@Q6AJPEAUD3DKMDT_HVIDPN__@@0@Z1@Z @ 0x140055948 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@D.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x140056880 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1402ACB84 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x140347990 (DxgkQueryMonitorTypeLockHeld.c)
 */

__int64 __fastcall ConvertVidPnPathToPathDescription(
        _QWORD *a1,
        struct D3DKMDT_HVIDPN__ *a2,
        const struct _DXGDMM_VIDPN_INTERFACE *const a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        unsigned int a6,
        unsigned int a7,
        bool a8,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a9)
{
  __int64 (__fastcall *v9)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64 *); // rax
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v11; // rsi
  int v13; // eax
  __int64 v14; // rdi
  char v15; // al
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // rbx
  __int64 v17; // rdx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  bool v26; // al
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v27; // rcx
  __int64 v28; // rax
  __int128 v29; // xmm1
  __int64 (__fastcall *v30)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *); // rax
  int v31; // eax
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // xmm1_8
  __int64 v38; // rax
  __int64 v40; // rdi
  const wchar_t *v41; // r9
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // r15
  char v45; // [rsp+58h] [rbp-51h] BYREF
  _WORD v46[3]; // [rsp+59h] [rbp-50h] BYREF
  __int64 v47; // [rsp+60h] [rbp-49h] BYREF
  __int64 v48; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v49[8]; // [rsp+70h] [rbp-39h] BYREF
  __int64 v50; // [rsp+78h] [rbp-31h]
  void (__fastcall *v51)(__int64, __int64); // [rsp+80h] [rbp-29h]
  __int64 v52; // [rsp+88h] [rbp-21h]
  int v53; // [rsp+90h] [rbp-19h]
  __int64 v54; // [rsp+98h] [rbp-11h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-9h] BYREF
  _QWORD v56[6]; // [rsp+A8h] [rbp-1h] BYREF
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v59; // [rsp+100h] [rbp+57h] BYREF

  v59 = a4;
  v9 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64 *))*((_QWORD *)a4 + 3);
  v11 = a5;
  v54 = 0LL;
  v13 = v9(a5, a6, a7, &v54);
  v14 = v13;
  if ( v13 < 0 )
  {
    WdLogSingleEntry2(2LL, v11, v13);
    WdLogGlobalForLineNumber = 3803;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire Vidpn present path from VidPn topology 0x%I64x (status = 0x%I64x)",
      (__int64)v11,
      v14,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v14;
  }
  v46[0] = 0;
  v45 = 0;
  if ( (int)DxgkQueryMonitorTypeLockHeld(a1, 0LL, 0LL, 0LL, (__int64)v46 + 1, (__int64)v46, (__int64)&v45) < 0 )
    v15 = 0;
  else
    v15 = (v45 != 0 ? 4 : 0) | (LOBYTE(v46[0]) != 0 ? 2 : 0) | (HIBYTE(v46[0]) != 0);
  v16 = a9;
  *((_BYTE *)a9 + 129) = v15;
  v17 = v54;
  v18 = *(_DWORD *)(v54 + 12);
  if ( v18 != 254 )
  {
    *((_DWORD *)v16 + 35) = v18;
    *((_DWORD *)v16 + 34) = *(_DWORD *)(v17 + 12);
    *(_QWORD *)v16 |= 0x40000010000uLL;
  }
  v19 = *(_DWORD *)(v17 + 20);
  if ( v19 != 254 )
  {
    *(_QWORD *)v16 |= 0x200uLL;
    *((_DWORD *)v16 + 33) = v19;
  }
  (*((void (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *))v59 + 4))(v11);
  v59 = 0LL;
  v47 = 0LL;
  v20 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **, __int64 *))a3
         + 1))(
          a2,
          a6,
          &v59,
          &v47);
  v21 = v20;
  if ( v20 < 0 )
  {
    v40 = a6;
    WdLogSingleEntry3(2LL, a6, a2, v20);
    v41 = L"Failed to acquire source mode set on source 0x%I64x of VidPN 0x%I64x (status = 0x%I64x)";
    WdLogGlobalForLineNumber = 3861;
LABEL_24:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v41, v40, (__int64)a2, v21, 0LL, 0LL);
    return (unsigned int)v21;
  }
  v22 = *((_QWORD *)a3 + 2);
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0;
  v49[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v49,
    (__int64)v59,
    v22,
    (__int64)a2);
  v48 = 0LL;
  v23 = (*(__int64 (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *, __int64 *))(v47 + 24))(v59, &v48);
  v21 = v23;
  if ( v23 < 0 )
  {
    v43 = a6;
    v44 = v50;
    WdLogSingleEntry3(2LL, a6, v50, v23);
    WdLogGlobalForLineNumber = 3882;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire pinned mode info on source 0x%I64x in mode set 0x%I64x (status = 0x%I64x)",
      v43,
      v44,
      v21,
      0LL,
      0LL);
    if ( v49[0] )
      v51(v52, v44);
    return (unsigned int)v21;
  }
  if ( v23 != 1075708679 )
  {
    v24 = v48;
    v25 = *(_DWORD *)(v48 + 4);
    v26 = v25 == 3 || v25 == 4;
    v27 = v59;
    *((_BYTE *)v16 + 128) = v26;
    v28 = v47;
    *((_OWORD *)v16 + 6) = *(_OWORD *)(v24 + 8);
    v29 = *(_OWORD *)(v24 + 24);
    *(_QWORD *)v16 |= 0x100uLL;
    *((_OWORD *)v16 + 7) = v29;
    (*(void (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *))(v28 + 32))(v27);
  }
  if ( v49[0] )
    v51(v52, v50);
  v30 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))*((_QWORD *)a3 + 3);
  v47 = 0LL;
  v48 = 0LL;
  v31 = v30(a2, a7, &v47, &v48);
  v21 = v31;
  if ( v31 < 0 )
  {
    v40 = a7;
    WdLogSingleEntry3(2LL, a7, a2, v31);
    v41 = L"Failed to acquire target mode set of target 0x%I64x in VidPN 0x%I64x (status = 0x%I64x)";
    WdLogGlobalForLineNumber = 3917;
    goto LABEL_24;
  }
  v32 = *((_QWORD *)a3 + 4);
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0;
  v49[0] = 0;
  DXGDMM::AutoRelease<D3DKMDT_HVIDPNTARGETMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNTARGETMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
    (__int64)v49,
    v47,
    v32,
    (__int64)a2);
  v55 = 0LL;
  v56[0] = 0LL;
  LODWORD(v59) = 0;
  v33 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *, const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))(v48 + 24))(
          v47,
          &v55,
          v56,
          &v59);
  v14 = v33;
  if ( v33 < 0 || v33 == 1075708679 )
  {
    v42 = v50;
    WdLogSingleEntry2(2LL, v50, v33);
    WdLogGlobalForLineNumber = 3943;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire info of mode pinned in VidPN target mode set 0x%I64x (status = 0x%I64x)",
      v42,
      v14,
      0LL,
      0LL,
      0LL);
    if ( v49[0] )
      v51(v52, v42);
    return (unsigned int)v14;
  }
  v34 = v55;
  v35 = v56[0];
  v36 = v47;
  *((_OWORD *)v16 + 2) = *(_OWORD *)(v55 + 8);
  *((_OWORD *)v16 + 3) = *(_OWORD *)(v34 + 24);
  *((_OWORD *)v16 + 4) = *(_OWORD *)(v34 + 40);
  v37 = *(_QWORD *)(v34 + 56);
  *(_QWORD *)v16 |= 0x1000087uLL;
  *((_QWORD *)v16 + 28) = v35;
  *((_DWORD *)v16 + 60) = (_DWORD)v59;
  v38 = v48;
  *((_QWORD *)v16 + 10) = v37;
  (*(void (__fastcall **)(__int64))(v38 + 32))(v36);
  if ( a8 )
  {
    if ( (int)DmmGetCurrentWireFormatAndColorSpace(
                a1,
                a6,
                a7,
                (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)v16 + 51,
                (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)v16 + 52) >= 0 )
    {
      *(_QWORD *)v16 |= 8uLL;
    }
    else
    {
      WdLogSingleEntry2(3LL, a6, a7);
      WdLogGlobalForLineNumber = 3965;
    }
  }
  if ( v49[0] )
    v51(v52, v50);
  return 0LL;
}
