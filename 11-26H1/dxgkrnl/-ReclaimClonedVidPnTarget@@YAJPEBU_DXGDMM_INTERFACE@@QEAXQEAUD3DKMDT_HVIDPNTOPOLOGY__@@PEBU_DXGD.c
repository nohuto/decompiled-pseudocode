/*
 * XREFs of ?ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@EQEAI4@Z @ 0x1401D3080
 * Callers:
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1401D1E94 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x140056880 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ReclaimClonedVidPnTarget(
        const struct _DXGDMM_INTERFACE *a1,
        __int64 a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a3,
        __int64 (__fastcall **a4)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, __int64, unsigned int *const *),
        char a5,
        unsigned int *const a6,
        unsigned int *const a7)
{
  unsigned int *v11; // r12
  unsigned int *v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64 *, __int64 *); // rax
  int v14; // eax
  __int64 v15; // rsi
  __int64 (__fastcall *v17)(__int64, unsigned int *const *); // rax
  int v18; // eax
  __int64 v19; // rdi
  unsigned int *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 (__fastcall *v25)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, __int64, unsigned int *const *); // rax
  int v26; // eax
  __int64 v27; // r15
  int v28; // eax
  bool v29; // zf
  int v30; // eax
  __int64 v31; // r9
  const wchar_t *v32; // r9
  __int64 v33; // r8
  int v34; // eax
  _BYTE v35[8]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int *v36; // [rsp+58h] [rbp-28h]
  void (__fastcall *v37)(__int64, __int64); // [rsp+60h] [rbp-20h]
  __int64 v38; // [rsp+68h] [rbp-18h]
  int v39; // [rsp+70h] [rbp-10h]
  unsigned int v40; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v41; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v42; // [rsp+D0h] [rbp+50h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3049;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pDxgDmmInterface != NULL", 3049LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3050;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hDxgAdapter != NULL", 3050LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3051;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hVidPnTopology != NULL", 3051LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3052;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_pDmmVidPnTopologyInterface != NULL",
      3052LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = a6;
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3053;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"o_pReclaimedVidPnTargetId != NULL",
      3053LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v12 = a7;
  if ( !a7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3054;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"o_pReclaimedPathSourceId != NULL",
      3054LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v41 = 0LL;
  *v11 = -1;
  *v12 = -1;
  v13 = (__int64 (__fastcall *)(__int64, __int64 *, __int64 *))*((_QWORD *)a1 + 1);
  v42 = 0LL;
  v14 = v13(a2, &v41, &v42);
  v15 = v14;
  if ( v14 >= 0 )
  {
    a6 = 0LL;
    v36 = 0LL;
    v17 = *(__int64 (__fastcall **)(__int64, unsigned int *const *))(v42 + 8);
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0;
    v35[0] = 0;
    v18 = v17(v41, &a6);
    v19 = v18;
    if ( v18 >= 0 )
    {
      v20 = a6;
      if ( !a6 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3097;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidPnSourceInfo != NULL", 3097LL, 0LL, 0LL, 0LL, 0LL);
        v20 = a6;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)v35,
        (__int64)v20,
        *(_QWORD *)(v42 + 24),
        v41);
      v40 = -1;
      LODWORD(v23) = -1;
      while ( 1 )
      {
        v24 = (__int64)v36;
        if ( !v36 )
          goto LABEL_40;
        v23 = *v36;
        v25 = *a4;
        a6 = 0LL;
        v26 = v25(a3, v23, &a6);
        v27 = v26;
        if ( v26 == -1071774919 )
        {
          if ( a6 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 3122;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"sztNumPathsFromSource == 0",
              3122LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        else if ( v26 < 0 )
        {
          WdLogSingleEntry3(2LL, a3, v23, v26);
          v32 = L"Failed to get the number of paths in topology 0x%I64x originating from source 0x%I64x (status = 0x%I64x)";
          WdLogGlobalForLineNumber = 3129;
          goto LABEL_36;
        }
        if ( (unsigned __int64)a6 > 1 )
          break;
        a7 = 0LL;
        v28 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *const *))(v42 + 16))(v41, v24, &a7);
        v27 = v28;
        if ( v28 < 0 )
        {
          WdLogSingleEntry3(2LL, v24, v41, v28);
          WdLogGlobalForLineNumber = 3185;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to acquire source following 0x%I64x in VidPN source set 0x%I64x (status = 0x%I64x)",
            v24,
            v41,
            v27,
            0LL,
            0LL);
          v29 = v35[0] == 0;
LABEL_37:
          if ( !v29 )
            v37(v38, v24);
          return (unsigned int)v27;
        }
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
          (__int64)v35,
          (__int64)a7,
          *(_QWORD *)(v42 + 24),
          v41);
      }
      v30 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, unsigned int *))a4[1])(
              a3,
              (unsigned int)v23,
              1LL,
              &v40);
      v27 = v30;
      if ( v30 < 0 )
      {
        WdLogSingleEntry3(2LL, a3, v23, v30);
        v32 = L"Failed to get target of the second path in topology 0x%I64x originating from source 0x%I64x (status = 0x%I64x)";
        WdLogGlobalForLineNumber = 3147;
LABEL_36:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v32, (__int64)a3, v23, v27, 0LL, 0LL);
        v29 = v35[0] == 0;
        goto LABEL_37;
      }
      v33 = v40;
      if ( v40 == -1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3154;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"ClonedVidPnTargetId != D3DDDI_ID_UNINITIALIZED",
          3154LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v33 = v40;
      }
      LOBYTE(v31) = a5;
      v34 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, __int64))a4[6])(
              a3,
              (unsigned int)v23,
              v33,
              v31);
      v27 = v34;
      if ( v34 < 0 )
      {
        WdLogSingleEntry4(2LL, v23, v40, a3, v34);
        WdLogGlobalForLineNumber = 3165;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to remove path (0x%I64x, 0x%I64x) from topology 0x%I64x which is the second path originating f"
                    "rom that source (status = 0x%I64x)",
          v23,
          v40,
          (__int64)a3,
          v27,
          0LL);
        v29 = v35[0] == 0;
        goto LABEL_37;
      }
LABEL_40:
      if ( v40 == -1 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v22, v21) + 24) = a3;
        WdLogGlobalForLineNumber = 3199;
        if ( v35[0] )
          v37(v38, v24);
        return 3223192371LL;
      }
      else
      {
        *v11 = v40;
        *v12 = v23;
        if ( v35[0] )
          v37(v38, v24);
        return 0LL;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, v41, v18);
      WdLogGlobalForLineNumber = 3092;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire first source in VidPN source set 0x%I64x (status = 0x%I64x)",
        v41,
        v19,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v19;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, a2, v14);
    WdLogGlobalForLineNumber = 3071;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire source set for adapter 0x%I64x (status = 0x%I64x)",
      a2,
      v15,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v15;
  }
}
