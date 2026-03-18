/*
 * XREFs of ?CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EPEAU_DXGK_DISPLAYMODE_INFO@@PEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@PEAY0BA@I@Z @ 0x1403DD110
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2DA8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402D925C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x140340D3C (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1403DD814 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 */

__int64 __fastcall CreateFunctionalVidPnWithEnabledVidPnSource(
        const struct _DXGDMM_INTERFACE *a1,
        void *const a2,
        unsigned int a3,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a4,
        unsigned __int8 a5,
        struct _D3DDDI_RATIONAL *a6,
        struct D3DKMDT_HVIDPN__ **a7,
        const struct _DXGDMM_VIDPN_INTERFACE **a8)
{
  __int64 v10; // rdi
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING Numerator; // edx
  struct _D3DDDI_RATIONAL *v12; // r13
  int v13; // eax
  UINT Denominator; // ecx
  __int64 (__fastcall *v15)(void *const, struct D3DKMDT_HVIDPN__ **, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  int v16; // eax
  __int64 v17; // rsi
  struct D3DKMDT_HVIDPN__ *v18; // rsi
  void (__fastcall *v19)(void *const, struct D3DKMDT_HVIDPN__ *); // r15
  int v20; // eax
  __int64 v21; // r12
  int v22; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // r8
  unsigned int v27; // eax
  __int64 v28; // [rsp+20h] [rbp-D9h]
  __int64 v29; // [rsp+28h] [rbp-D1h]
  __int64 v30; // [rsp+28h] [rbp-D1h]
  __int64 v31; // [rsp+30h] [rbp-C9h]
  __int64 v32; // [rsp+30h] [rbp-C9h]
  __int64 v33; // [rsp+38h] [rbp-C1h]
  __int64 v34; // [rsp+40h] [rbp-B9h]
  unsigned int v35; // [rsp+50h] [rbp-A9h]
  unsigned int v36; // [rsp+58h] [rbp-A1h]
  unsigned __int8 v37[8]; // [rsp+70h] [rbp-89h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v38; // [rsp+78h] [rbp-81h] BYREF
  struct D3DKMDT_HVIDPN__ *v39; // [rsp+80h] [rbp-79h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v40; // [rsp+88h] [rbp-71h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v41; // [rsp+90h] [rbp-69h] BYREF
  struct _DXGDMM_INTERFACE *v42; // [rsp+98h] [rbp-61h]
  struct D3DKMDT_HVIDPN__ *v43; // [rsp+A0h] [rbp-59h] BYREF
  struct D3DKMDT_HVIDPN__ **v44; // [rsp+A8h] [rbp-51h]
  const struct _DXGDMM_VIDPN_INTERFACE **v45; // [rsp+B0h] [rbp-49h]
  unsigned int v46[16]; // [rsp+C0h] [rbp-39h] BYREF

  v10 = a3;
  v42 = a1;
  v44 = a7;
  v45 = a8;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4728;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pDxgDmmInterface != NULL", 4728LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4729;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hDxgAdapter != NULL", 4729LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (_DWORD)v10 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4730;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
      4730LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4731;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"io_pDisplayModeInfo != NULL", 4731LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4732;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"o_phVidPn != NULL", 4732LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a8 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4733;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"o_ppDmmVidPnInterface != NULL", 4733LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a7 = 0LL;
  *a8 = 0LL;
  Numerator = a6[3].Numerator;
  v37[0] = 0;
  v12 = a6 + 2;
  v13 = DmmMapVSyncFromRationalToInteger(a6 + 2, Numerator, v37);
  Denominator = a6[1].Denominator;
  if ( Denominator != v13 && (!v37[0] || Denominator != v13 + 1) )
  {
    WdLogSingleEntry3(2LL, a6[1].Denominator, v12->Numerator, a6[2].Denominator);
    v31 = a6[2].Denominator;
    v29 = v12->Numerator;
    v28 = a6[1].Denominator;
    WdLogGlobalForLineNumber = 4766;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Integer refresh rate in display mode (%i64d)Hz does not match rational refresh rate (%i64d/%I64d)hz.",
      v28,
      v29,
      v31,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v15 = (__int64 (__fastcall *)(void *const, struct D3DKMDT_HVIDPN__ **, struct _DXGDMM_VIDPN_INTERFACE **))*((_QWORD *)a1 + 6);
  v38 = 0LL;
  v39 = 0LL;
  v16 = v15(a2, &v39, &v38);
  v17 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry2(2LL, a2, v16);
    WdLogGlobalForLineNumber = 4789;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to create copy of the last VidPN committed by the client for adapter 0x%I64x (status = 0x%I64x)",
      (__int64)a2,
      v17,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v17;
  }
  v18 = v39;
  v19 = (void (__fastcall *)(void *const, struct D3DKMDT_HVIDPN__ *))*((_QWORD *)a1 + 8);
  v41 = 0LL;
  v40 = 0LL;
  v20 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v38)(
          v39,
          &v41,
          &v40);
  v21 = v20;
  if ( v20 < 0 )
  {
    WdLogSingleEntry2(2LL, v18, v20);
    WdLogGlobalForLineNumber = 4812;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire topology of the VidPN 0x%I64x (status = 0x%I64x)",
      (__int64)v18,
      v21,
      0LL,
      0LL,
      0LL);
LABEL_27:
    if ( v18 )
      v19(a2, v18);
    return (unsigned int)v21;
  }
  v37[0] = 0;
  v39 = 0LL;
  *(__m128i *)v46 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  *(_OWORD *)&v46[4] = *(_OWORD *)v46;
  *(_OWORD *)&v46[8] = *(_OWORD *)v46;
  *(_OWORD *)&v46[12] = *(_OWORD *)v46;
  v22 = PrepareUnpinnedPathsFromSource(
          v42,
          a2,
          v18,
          v38,
          v41,
          v40,
          v10,
          0,
          0,
          0,
          (unsigned __int64 *const)&v39,
          (unsigned int (*)[16])v46,
          v37);
  v21 = v22;
  if ( v22 == -1071774925 )
  {
    WdLogSingleEntry2(7LL, v10, a2);
    WdLogGlobalForLineNumber = 4846;
    if ( v18 )
      v19(a2, v18);
    return 3223192371LL;
  }
  if ( v22 != -1071774886 )
  {
    if ( v22 < 0 )
    {
      WdLogSingleEntry3(2LL, v10, a2, v22);
      WdLogGlobalForLineNumber = 4860;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to ensure unpinned paths from source 0x%I64x of adapter 0x%I64x (status = 0x%I64x)",
        v10,
        (__int64)a2,
        v21,
        0LL,
        0LL);
    }
    else
    {
      LOBYTE(v36) = 1;
      LOBYTE(v35) = 0;
      v43 = 0LL;
      LODWORD(v21) = PinPresentPathModalityFromMode(
                       (void (__fastcall **)(char *, struct D3DKMDT_HVIDPN__ *))v42,
                       (char *)a2,
                       v18,
                       v38,
                       v41,
                       v40,
                       v10,
                       (unsigned __int64)v39,
                       (struct _DXGK_DISPLAYMODE_INFO *)a6,
                       D3DKMDT_VPPS_UNINITIALIZED,
                       v35,
                       v36,
                       &v43);
      if ( (int)v21 >= 0 )
      {
        *v44 = v43;
        *v45 = v38;
        if ( v18 )
          v19(a2, v18);
        return 0LL;
      }
      if ( (_DWORD)v21 == -1071774970 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24);
        v26[3] = a6->Numerator;
        v26[4] = a6->Denominator;
        v26[5] = (int)a6[1].Numerator;
        v27 = v12->Numerator / a6[2].Denominator;
        v26[7] = v10;
        v26[6] = v27;
        WdLogGlobalForLineNumber = 4891;
      }
      else
      {
        WdLogSingleEntry5(
          2LL,
          v10,
          a6->Numerator,
          a6->Denominator,
          (int)a6[1].Numerator,
          v12->Numerator / a6[2].Denominator);
        v34 = v12->Numerator / a6[2].Denominator;
        v33 = (int)a6[1].Numerator;
        v32 = a6->Denominator;
        v30 = a6->Numerator;
        WdLogGlobalForLineNumber = 4897;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to pin source/target modes on VidPN present (multi)path from source 0x%I64x matching specified"
                    " display mode (%I64d x %I64d x 0x%I64x @ %I64d[Hz])",
          v10,
          v30,
          v32,
          v33,
          v34);
      }
    }
    goto LABEL_27;
  }
  WdLogSingleEntry2(7LL, v10, a2);
  WdLogGlobalForLineNumber = 4853;
  if ( v18 )
    v19(a2, v18);
  return 3223192410LL;
}
