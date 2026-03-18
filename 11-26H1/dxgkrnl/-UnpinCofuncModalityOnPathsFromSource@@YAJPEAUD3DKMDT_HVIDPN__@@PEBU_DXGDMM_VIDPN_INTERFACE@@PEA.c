/*
 * XREFs of ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1403DE244
 * Callers:
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1403DD814 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPNTARGETMODESET__@@Q6AJPEAUD3DKMDT_HVIDPN__@@0@Z1@Z @ 0x140055948 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@D.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UnpinCofuncModalityOnPathsFromSource(
        struct D3DKMDT_HVIDPN__ *a1,
        const struct _DXGDMM_VIDPN_INTERFACE *a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *); // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v16; // rsi
  __int64 v17; // rax
  void (__fastcall *v18)(struct D3DKMDT_HVIDPN__ *, __int64); // r15
  int v19; // eax
  __int64 v20; // r13
  unsigned __int64 i; // r13
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // rbx
  unsigned __int64 v32; // [rsp+50h] [rbp-29h]
  _BYTE v33[8]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v34; // [rsp+60h] [rbp-19h]
  void (__fastcall *v35)(__int64, __int64); // [rsp+68h] [rbp-11h]
  __int64 v36; // [rsp+70h] [rbp-9h]
  int v37; // [rsp+78h] [rbp-1h]
  __int64 v38; // [rsp+D0h] [rbp+57h] BYREF
  __int64 v39; // [rsp+D8h] [rbp+5Fh] BYREF
  __int64 v40; // [rsp+E0h] [rbp+67h] BYREF
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v41; // [rsp+E8h] [rbp+6Fh]

  v41 = a4;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3583;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ARGUMENT_PRESENT(i_hVidPn)", 3583LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3584;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(i_pDmmVidPnInterface)",
      3584LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3585;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(i_hVidPnTopology)",
      3585LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3586;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(i_pDmmVidPnTopologyInterface)",
      3586LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = a5;
  if ( a5 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3587;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
      3587LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))*((_QWORD *)a2 + 1);
  v39 = 0LL;
  v38 = 0LL;
  v12 = v11(a1, (unsigned int)v10, &v38, &v39);
  v14 = v12;
  if ( v12 >= 0 )
  {
    v16 = v38;
    if ( !v38 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3612;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"ARGUMENT_PRESENT(hVidPnSourceModeSet)",
        3612LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v16 = v38;
    }
    v17 = v39;
    if ( !v39 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3613;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"ARGUMENT_PRESENT(pDmmVidPnSourceModeSetInterface)",
        3613LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v17 = v39;
      v16 = v38;
    }
    LOBYTE(v13) = 1;
    v18 = (void (__fastcall *)(struct D3DKMDT_HVIDPN__ *, __int64))*((_QWORD *)a2 + 2);
    v19 = (*(__int64 (__fastcall **)(__int64, __int64))(v17 + 48))(v16, v13);
    v20 = v19;
    if ( v19 >= 0 )
    {
      for ( i = 0LL; ; i = v32 + 1 )
      {
        v32 = i;
        if ( i >= a6 )
          break;
        a5 = -1;
        v22 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64, unsigned int *))v41
               + 1))(
                a3,
                (unsigned int)v10,
                i,
                &a5);
        LODWORD(v38) = v22;
        if ( v22 < 0 )
        {
          v31 = v22;
          WdLogSingleEntry4(2LL, i, v10, a3, v22);
          WdLogGlobalForLineNumber = 3658;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to enumerate target of %I64d'th path originating from source 0x%I64x in VidPN topology 0x%I6"
                      "4x (status = 0x%I64x)",
            i,
            v10,
            (__int64)a3,
            v31,
            0LL);
          if ( v16 )
            v18(a1, v16);
          return (unsigned int)v38;
        }
        if ( a5 == -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3667;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"ConnectedVidPnTargetId != D3DDDI_ID_UNINITIALIZED",
            3667LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v23 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))v41 + 13))(a3, (unsigned int)v10);
        v20 = v23;
        if ( v23 < 0 )
        {
          WdLogSingleEntry4(2LL, v10, a5, a3, v23);
          WdLogGlobalForLineNumber = 3683;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to remove copy protection on present path (0x%I64x, 0x%I64x) in topology 0x%I64x (status = 0x%I64x)",
            v10,
            a5,
            (__int64)a3,
            v20,
            0LL);
          goto LABEL_19;
        }
        v40 = 0LL;
        v34 = 0LL;
        v35 = 0LL;
        v36 = 0LL;
        v37 = 0;
        v33[0] = 0;
        v38 = 0LL;
        v24 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))a2 + 3))(
                a1,
                a5,
                &v38,
                &v40);
        v20 = v24;
        if ( v24 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 3707;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"cdd!AcquirePresentPathUnpinnedCofuncModality failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquireTarge"
                      "tModeSet. (status = 0x%I64x)",
            v20,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_19;
        }
        if ( !v38 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3712;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"ARGUMENT_PRESENT(hVidPnTargetModeSet)",
            3712LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( !v40 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3713;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"ARGUMENT_PRESENT(pDmmVidPnTargetModeSetInterface)",
            3713LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DXGDMM::AutoRelease<D3DKMDT_HVIDPNTARGETMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNTARGETMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
          (__int64)v33,
          v38,
          *((_QWORD *)a2 + 4),
          (__int64)a1);
        LOBYTE(v25) = 1;
        v26 = (*(__int64 (__fastcall **)(__int64, __int64))(v40 + 56))(v34, v25);
        v20 = v26;
        if ( v26 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 3728;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"cdd!AcquirePresentPathUnpinnedCofuncModality failed call to DXGDMM_VIDPNTARGETMODESET_INTERFACE::pf"
                      "nUnpinMode. (status = 0x%I64x)",
            v20,
            0LL,
            0LL,
            0LL,
            0LL);
          if ( v33[0] )
            v35(v36, v34);
          goto LABEL_19;
        }
        if ( v33[0] )
          v35(v36, v34);
        LOBYTE(v27) = 1;
        v28 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64))v41 + 9))(
                a3,
                (unsigned int)v10,
                a5,
                v27);
        v20 = v28;
        if ( v28 < 0 )
        {
          WdLogSingleEntry4(2LL, v10, a5, a3, v28);
          WdLogGlobalForLineNumber = 3748;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to unpin scaling on present path (0x%I64x, 0x%I64x) in topology 0x%I64x (status = 0x%I64x)",
            v10,
            a5,
            (__int64)a3,
            v20,
            0LL);
          goto LABEL_19;
        }
        LOBYTE(v29) = 1;
        v30 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64))v41 + 11))(
                a3,
                (unsigned int)v10,
                a5,
                v29);
        v20 = v30;
        if ( v30 < 0 )
        {
          WdLogSingleEntry4(2LL, v10, a5, a3, v30);
          WdLogGlobalForLineNumber = 3767;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to unpin rotation on present path (0x%I64x, 0x%I64x) in topology 0x%I64x (status = 0x%I64x)",
            v10,
            a5,
            (__int64)a3,
            v20,
            0LL);
          goto LABEL_19;
        }
      }
      if ( v16 )
        v18(a1, v16);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry2(2LL, v16, v19);
      WdLogGlobalForLineNumber = 3632;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to unpin mode in VidPN source mode set 0x%I64x (status = 0x%I64x)",
        v16,
        v20,
        0LL,
        0LL,
        0LL);
LABEL_19:
      if ( v16 )
        v18(a1, v16);
      return (unsigned int)v20;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, v10, a1, v12);
    WdLogGlobalForLineNumber = 3607;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire VidPN source mode set on source 0x%I64x of VidPN 0x%I64x (status = 0x%I64x)",
      v10,
      (__int64)a1,
      v14,
      0LL,
      0LL);
    return (unsigned int)v14;
  }
}
