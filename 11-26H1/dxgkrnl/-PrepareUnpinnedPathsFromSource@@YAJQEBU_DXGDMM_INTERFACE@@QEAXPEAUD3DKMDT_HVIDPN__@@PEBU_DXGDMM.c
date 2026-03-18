/*
 * XREFs of ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1403DD814
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x140363C84 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ?CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EPEAU_DXGK_DISPLAYMODE_INFO@@PEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@PEAY0BA@I@Z @ 0x1403DD110 (-CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PR.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1401D1A0C (-AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNT.c)
 *     ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1403DE244 (-UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEA.c)
 */

__int64 __fastcall PrepareUnpinnedPathsFromSource(
        struct _DXGDMM_INTERFACE *a1,
        void *const a2,
        struct D3DKMDT_HVIDPN__ *a3,
        const struct _DXGDMM_VIDPN_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a6,
        unsigned int a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        unsigned __int64 *const a11,
        __m128i *a12,
        unsigned __int8 *a13)
{
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v13; // r15
  void *v16; // r13
  __int64 (__fastcall *v17)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *); // rax
  char v18; // bl
  int v19; // eax
  __int64 v20; // r14
  __int64 result; // rax
  unsigned __int64 i; // r15
  int v23; // eax
  __int64 v24; // r13
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rdi
  unsigned __int64 v29; // rbx
  struct D3DKMDT_HVIDPN__ *v30; // r14
  int v31; // eax
  __int64 v32; // rsi
  __m128i si128; // xmm0
  int v34; // eax
  __int64 v35; // r15
  int v36; // eax
  void *v37; // rcx
  char v38; // [rsp+50h] [rbp-A1h]
  _BYTE v39[7]; // [rsp+51h] [rbp-A0h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-99h] BYREF
  unsigned __int64 v41; // [rsp+60h] [rbp-91h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v42; // [rsp+68h] [rbp-89h]
  struct _DXGDMM_INTERFACE *v43; // [rsp+70h] [rbp-81h]
  struct _DXGDMM_VIDPN_INTERFACE *v44; // [rsp+78h] [rbp-79h]
  struct D3DKMDT_HVIDPN__ *v45; // [rsp+80h] [rbp-71h]
  void *v46; // [rsp+88h] [rbp-69h]
  unsigned __int64 *v47; // [rsp+90h] [rbp-61h]
  void *v48; // [rsp+98h] [rbp-59h]
  unsigned __int8 *v49; // [rsp+A0h] [rbp-51h]
  __m128i Src[8]; // [rsp+B0h] [rbp-41h] BYREF

  v13 = a6;
  v16 = a2;
  v42 = a6;
  v47 = a11;
  v48 = a12;
  v49 = a13;
  v44 = a4;
  v45 = a3;
  v46 = a2;
  v43 = a1;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4461;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pDxgDmmInterface != NULL", 4461LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !v16 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4462;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hDxgAdapter != NULL", 4462LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4463;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hVidPn != NULL", 4463LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4464;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pDmmVidPnInterface != NULL", 4464LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4465;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hVidPnTopology != NULL", 4465LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4466;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_pDmmVidPnTopologyInterface != NULL",
      4466LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a7 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4467;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
      4467LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a11 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4468;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"o_pNumVidPnPresentPathsFromSource != NULL",
      4468LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a11 = 0LL;
  if ( a12 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    *a12 = si128;
    a12[1] = si128;
    a12[2] = si128;
    a12[3] = si128;
  }
  v17 = *(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *))a6;
  v18 = 0;
  v40 = 0LL;
  v38 = 0;
  v19 = v17(a5, a7, &v40);
  v20 = v19;
  if ( v19 != -1071774919 )
  {
    if ( v19 < 0 )
    {
      WdLogSingleEntry3(2LL, a7, a5, v19);
      WdLogGlobalForLineNumber = 4513;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to determine number of paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)",
        a7,
        (__int64)a5,
        v20,
        0LL,
        0LL);
      return (unsigned int)v20;
    }
    for ( i = 0LL; i < v40; ++i )
    {
      LODWORD(v41) = -1;
      v23 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64, unsigned __int64 *))v42
             + 1))(
              a5,
              a7,
              i,
              &v41);
      v24 = v23;
      if ( v23 < 0 )
      {
        WdLogSingleEntry3(2LL, i, a7, v23);
        WdLogGlobalForLineNumber = 4536;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to enumerate target of %I64d'th path originating from source 0x%I64x (status = 0x%I64x)",
          i,
          a7,
          v24,
          0LL,
          0LL);
        return (unsigned int)v24;
      }
      v25 = (unsigned int)v41;
      if ( (_DWORD)v41 == -1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4542;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"ConnectedVidPnTargetId != D3DDDI_ID_UNINITIALIZED",
          4542LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v25 = (unsigned int)v41;
      }
      v16 = v46;
      v39[0] = 0;
      v26 = (*((__int64 (__fastcall **)(void *, __int64, _BYTE *))v43 + 9))(v46, v25, v39);
      v27 = v26;
      if ( v26 < 0 )
      {
        WdLogSingleEntry2(2LL, v16, v26);
        WdLogGlobalForLineNumber = 4555;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to acquire target set of adapter 0x%I64x (status = 0x%I64x)",
          (__int64)v16,
          v27,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v27;
      }
      if ( !v39[0] )
      {
        v18 = 1;
        v38 = 1;
        v28 = a7;
        WdLogSingleEntry3(7LL, a5, a7, (unsigned int)v41);
        WdLogGlobalForLineNumber = 4568;
        goto LABEL_32;
      }
    }
    v28 = a7;
LABEL_32:
    WdLogSingleEntry2(7LL, v28, a5);
    v13 = v42;
    WdLogGlobalForLineNumber = 4576;
    goto LABEL_33;
  }
  if ( v40 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4499;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"sztNumPathsFromSource == 0", 4499LL, 0LL, 0LL, 0LL, 0LL);
  }
  v18 = 1;
  v38 = 1;
  v28 = a7;
  WdLogSingleEntry2(7LL, a5, a7);
  WdLogGlobalForLineNumber = 4505;
LABEL_33:
  Src[0] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  Src[1] = Src[0];
  Src[2] = Src[0];
  Src[3] = Src[0];
  if ( v18 )
  {
    if ( !a8 )
    {
      WdLogSingleEntry2(7LL, v28, v16);
      result = 3223192403LL;
      WdLogGlobalForLineNumber = 4597;
      return result;
    }
    if ( v40
      && (v34 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))v13 + 7))(a5, a7),
          v35 = v34,
          v34 < 0) )
    {
      WdLogSingleEntry3(2LL, v28, a5, v34);
      WdLogGlobalForLineNumber = 4611;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to remove all paths from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)",
        v28,
        (__int64)a5,
        v35,
        0LL,
        0LL);
    }
    else
    {
      v41 = 0LL;
      v36 = AugmentVidPnTopology(v45, v44, a5, v42, v16, v43, a7, a10, &v41, Src);
      v35 = v36;
      if ( v36 == -1071774925 )
      {
        WdLogSingleEntry2(7LL, a5, v28);
        result = (unsigned int)v35;
        WdLogGlobalForLineNumber = 4634;
        return result;
      }
      if ( v36 == -1071774886 )
      {
        WdLogSingleEntry2(7LL, a5, v28);
        result = 3223192410LL;
        WdLogGlobalForLineNumber = 4641;
        return result;
      }
      if ( v36 >= 0 )
      {
        v29 = v41;
        if ( !v41 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 4655;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"sztNumAugmentedPathsFromSource > 0",
            4655LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        WdLogSingleEntry4(7LL, v16, v29, v28, v40);
        WdLogGlobalForLineNumber = 4658;
        v40 = v29;
        goto LABEL_35;
      }
      WdLogSingleEntry2(2LL, v28, v36);
      WdLogGlobalForLineNumber = 4648;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to augment VidPN topology  on source 0x%I64x (status = 0x%I64x).",
        v28,
        v35,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v35;
  }
  v29 = v40;
LABEL_35:
  if ( !v29 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4665;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"sztNumPathsFromSource > 0", 4665LL, 0LL, 0LL, 0LL, 0LL);
    v29 = v40;
  }
  if ( a9 )
  {
    v30 = v45;
    v31 = UnpinCofuncModalityOnPathsFromSource(v45, v44, a5, v42, a7, v29);
    v32 = v31;
    if ( v31 < 0 )
    {
      WdLogSingleEntry5(2LL, v40, v28, v30, v16, v31);
      WdLogGlobalForLineNumber = 4681;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to unpin modality of %I64d present path(s) originating from source 0x%I64x in VidPN 0x%I64x of a"
                  "dapter 0x%I64x (status = 0x%I64x)",
        v40,
        v28,
        (__int64)v30,
        (__int64)v16,
        v32);
      return (unsigned int)v32;
    }
    v29 = v40;
  }
  v37 = v48;
  *v47 = v29;
  if ( v37 )
    memmove(v37, Src, 0x40uLL);
  if ( v49 )
    *v49 = v38;
  return 0LL;
}
