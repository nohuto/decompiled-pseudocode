/*
 * XREFs of ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140257CC8
 * Callers:
 *     ?DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z @ 0x14025970C (-DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z.c)
 *     ?DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z @ 0x14025984C (-DmmCollectTdrDiagInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAX_K@Z.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x140430030 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x14000714C (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x14004AB54 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x14004CF80 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x14005EE30 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x14006DB08 (-Initialize@-$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x140258880 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x14025D2C0 (-SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UCOMMITVIDPNREQUEST@V.c)
 *     ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x14025D5E0 (-SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV-$Queue@UDISPMODECHANGEREQU.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x14025D854 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x14025E388 (-_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT.c)
 *     ?_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV?$AutoBuffer@U_DMM_VIDPNSOURCEMODESET_SERIALIZATION@@@DMM@@@Z @ 0x14025E540 (-_SerializeVidPnSourceModeSet@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IQEAV-$AutoBuffer@U_DMM_VIDPNSOURCEM.c)
 *     ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x140260908 (-Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZA.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x140260A88 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x140266F84 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x140268788 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 *     ?MonitorSerializeMonitorPresentEvents@@YAJPEAXPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION@@@Z @ 0x14026F970 (-MonitorSerializeMonitorPresentEvents@@YAJPEAXPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZATIO.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140344370 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x140384CA4 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::AcquireDiagInfo(
        VIDPN_MGR *a1,
        struct _KTHREAD **a2,
        size_t a3,
        int a4,
        int *a5,
        size_t *a6)
{
  __int64 v6; // r14
  struct _KTHREAD **v8; // r13
  __int64 result; // rax
  size_t *v11; // r15
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  struct DXGADAPTER *v16; // rax
  int v17; // eax
  struct DXGADAPTER *v18; // rax
  __int64 v19; // rbx
  int v20; // eax
  struct DXGADAPTER *v21; // rax
  int v22; // eax
  struct DXGADAPTER *v23; // rax
  int v24; // eax
  struct DXGADAPTER *v25; // rax
  int v26; // eax
  struct DXGADAPTER *v27; // rax
  int v28; // eax
  struct DXGADAPTER *v29; // rax
  __int64 v30; // rcx
  size_t v31; // rbx
  size_t v32; // r8
  _QWORD *v33; // rax
  int v34; // eax
  unsigned __int8 *v35; // rdx
  DXGDIAGNOSTICS *v36; // rcx
  unsigned __int64 v37; // rbx
  int v38; // eax
  struct DXGADAPTER *v39; // rax
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v41; // rbx
  int v42; // eax
  struct DXGADAPTER *v43; // rax
  int *v44; // r13
  __int64 v45; // rdi
  int v46; // eax
  __int64 v47; // r15
  struct DXGADAPTER *v48; // rax
  int v49; // eax
  struct DXGADAPTER *v50; // rax
  int v51; // eax
  struct DXGADAPTER *v52; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  int v54; // eax
  struct DXGADAPTER *v55; // rax
  __int64 v56; // rbx
  struct _DMM_MONITORPRESENCEEVENTSET_SERIALIZATION *v57; // rdi
  struct DXGADAPTER *v58; // rax
  struct DXGADAPTER *v59; // rax
  int v60; // eax
  struct DXGADAPTER *v61; // rax
  DMMVIDPN *v62; // [rsp+58h] [rbp-29h] BYREF
  __int64 v63; // [rsp+60h] [rbp-21h] BYREF
  __int64 v64; // [rsp+68h] [rbp-19h] BYREF
  __int128 v65; // [rsp+70h] [rbp-11h]
  void **v66; // [rsp+80h] [rbp-1h]
  void *Src; // [rsp+88h] [rbp+7h]
  unsigned __int64 v68; // [rsp+90h] [rbp+Fh]
  __int64 v69; // [rsp+98h] [rbp+17h]
  struct _KTHREAD **v70; // [rsp+E0h] [rbp+5Fh] BYREF

  v70 = a2;
  v6 = a4;
  v8 = a2;
  if ( a2 )
  {
    if ( a3 )
    {
      memset(a2, 0, a3);
      goto LABEL_7;
    }
LABEL_5:
    WdLogSingleEntry2(2LL, a2, a3);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 4786;
    return result;
  }
  if ( a3 )
    goto LABEL_5;
LABEL_7:
  v11 = a6;
  if ( a6 )
    *a6 = 0LL;
  Src = 0LL;
  v64 = (__int64)&DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v66 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v68 = 0LL;
  v69 = 256LL;
  v65 = 0LL;
  if ( (int)v6 > 8 )
  {
    if ( (_DWORD)v6 == 9 )
    {
      if ( a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5061;
      }
      v70 = 0LL;
      ContainingAdapter = VIDPN_MGR::GetContainingAdapter(a1);
      v54 = MonitorSerializeMonitorPresentEvents(ContainingAdapter, (unsigned __int64 *)&v70, 0LL);
      v15 = v54;
      if ( (int)(v54 + 0x80000000) >= 0 && v54 != -1073741789 )
      {
        v55 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry2(2LL, v55, v15);
        WdLogGlobalForLineNumber = 5081;
        goto LABEL_119;
      }
      v56 = (__int64)v70;
      if ( !v70 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5086;
      }
      DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(&v64, v56);
      v57 = (struct _DMM_MONITORPRESENCEEVENTSET_SERIALIZATION *)Src;
      if ( !Src )
      {
        v58 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry2(2LL, v56, v58);
        WdLogGlobalForLineNumber = 5097;
        LODWORD(v15) = -1073741801;
        goto LABEL_119;
      }
      v59 = VIDPN_MGR::GetContainingAdapter(a1);
      v60 = MonitorSerializeMonitorPresentEvents(v59, (unsigned __int64 *)&v70, v57);
      v15 = v60;
      if ( v60 < 0 )
      {
        v61 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry2(2LL, v61, v15);
        WdLogGlobalForLineNumber = 5112;
        goto LABEL_119;
      }
      goto LABEL_53;
    }
    if ( (_DWORD)v6 != 10 && (_DWORD)v6 != 11 )
    {
      if ( (_DWORD)v6 == 12 )
        goto LABEL_86;
      if ( (_DWORD)v6 == 13 )
      {
        if ( a5 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 4833;
        }
        v38 = DMM::AutoBuffer<unsigned char>::Initialize(&v64, 2uLL, 0LL, 256LL);
        v15 = v38;
        if ( v38 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4720;
          v39 = VIDPN_MGR::GetContainingAdapter(a1);
          WdLogSingleEntry2(2LL, v39, v15);
          WdLogGlobalForLineNumber = 4842;
          goto LABEL_119;
        }
        *(_WORD *)Src = 28673;
        goto LABEL_53;
      }
      if ( (_DWORD)v6 != 14 )
        goto LABEL_67;
      if ( a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5231;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v63, (__int64)a1);
      LODWORD(v70) = 0x8000;
      v34 = DMM::AutoBuffer<unsigned char>::Initialize(&v64, 0x8000uLL, 0LL, 256LL);
      LODWORD(v15) = v34;
      if ( v34 >= 0 )
      {
        v35 = (unsigned __int8 *)Src;
        if ( !Src )
        {
          WdLogSingleEntry0(1LL);
          v35 = (unsigned __int8 *)Src;
          WdLogGlobalForLineNumber = 5254;
        }
        v36 = (DXGDIAGNOSTICS *)*((_QWORD *)a1 + 70);
        if ( !v36 )
        {
          WdLogSingleEntry2(2LL, v35, a1);
          WdLogGlobalForLineNumber = 5260;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to obtain VIDPN_MGR Diagnosibility buffer; pDiagnosticsBuffer = 0x%I64x, this = 0x%I64x",
            (__int64)Src,
            (__int64)a1,
            0LL,
            0LL,
            0LL);
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v63 + 40));
          LODWORD(v15) = -1073741436;
          goto LABEL_119;
        }
        LODWORD(v15) = DXGDIAGNOSTICS::ReadDiagnostics(v36, v35, (unsigned int *)&v70, 0xFFFFFFFF);
        if ( (int)v15 >= 0 )
        {
          v37 = (unsigned int)v70;
          if ( (unsigned int)v70 > v68 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 118;
          }
          v68 = v37;
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v63 + 40));
          goto LABEL_53;
        }
        WdLogSingleEntry2(2LL, Src, a1);
        WdLogGlobalForLineNumber = 5272;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Unable to read VIDPN_MGR diagnostics data; DiagInfoSerialization.get() = 0x%I64x, this = 0x%I64x",
          (__int64)Src,
          (__int64)a1,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        WdLogSingleEntry3(2LL, 0x8000LL, a1, v34);
        WdLogGlobalForLineNumber = 5247;
      }
      goto LABEL_95;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v63, (__int64)a1);
    v62 = 0LL;
    LODWORD(v15) = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(a1);
    if ( (int)v15 < 0 )
    {
      WdLogSingleEntry1(7LL);
      WdLogGlobalForLineNumber = 5136;
      auto_rc<DMMVIDPN>::reset((__int64 *)&v62, 0LL);
LABEL_95:
      v30 = v63;
      goto LABEL_50;
    }
    v44 = a5;
    v45 = (unsigned int)*a5;
    if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPN *)((char *)v62 + 96), *a5) )
    {
      VIDPN_MGR::GetContainingAdapter(a1);
      WdLogSingleEntry1(7LL);
      WdLogGlobalForLineNumber = 5152;
      auto_rc<DMMVIDPN>::reset((__int64 *)&v62, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v63 + 40));
      LODWORD(v15) = -1071774919;
      goto LABEL_119;
    }
    v46 = VIDPN_MGR::UnpinPathModalityFromSource(a1, (DMMVIDPN *)((char *)v62 + 96), v45);
    v47 = v46;
    if ( v46 < 0 )
    {
      v48 = VIDPN_MGR::GetContainingAdapter(a1);
      WdLogSingleEntry3(2LL, v45, v48, v47);
      WdLogGlobalForLineNumber = 5164;
LABEL_100:
      auto_rc<DMMVIDPN>::reset((__int64 *)&v62, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v63 + 40));
      LODWORD(v15) = v47;
      goto LABEL_119;
    }
    if ( (_DWORD)v6 == 10 )
    {
      v51 = VIDPN_MGR::_SerializeVidPnSourceModeSet(a1, v62, v45);
      v47 = v51;
      if ( v51 < 0 )
      {
        v52 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry3(2LL, v45, v52, v47);
        WdLogGlobalForLineNumber = 5188;
        goto LABEL_100;
      }
    }
    else
    {
      v49 = VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(
              a1,
              v62,
              v45,
              (struct _D3DKMDT_VIDPN_SOURCE_MODE *)(v44 + 1),
              (__int64)&v64);
      v47 = v49;
      if ( v49 < 0 )
      {
        v50 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry3(2LL, v45, v50, v47);
        WdLogGlobalForLineNumber = 5213;
        goto LABEL_100;
      }
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v62, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v63 + 40));
    v8 = v70;
    goto LABEL_52;
  }
  switch ( (_DWORD)v6 )
  {
    case 8:
      if ( a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5030;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)&v70, (__int64)a1);
      v28 = DMMVIDPN::SerializeVidPns((char *)a1 + 256, &v64);
      v15 = v28;
      if ( v28 < 0 )
      {
        v29 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry3(2LL, (char *)a1 + 256, v29, v15);
        v30 = (__int64)v70;
        WdLogGlobalForLineNumber = 5049;
LABEL_50:
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v30 + 40));
        goto LABEL_119;
      }
      DXGFASTMUTEX::Release(v70 + 5);
LABEL_52:
      v11 = a6;
      goto LABEL_53;
    case 1:
      if ( a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4812;
      }
      v26 = VIDPN_MGR::AcquireDiagSummary(a1);
      v15 = v26;
      if ( v26 < 0 )
      {
        v27 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry2(2LL, v27, v15);
        WdLogGlobalForLineNumber = 4821;
        goto LABEL_119;
      }
LABEL_53:
      v31 = v68;
      if ( v8 )
      {
        v32 = v68;
        if ( a3 < v68 )
          v32 = a3;
        memmove(v8, Src, v32);
      }
      if ( v11 )
        *v11 = v31;
      if ( v31 <= a3 )
      {
        LODWORD(v15) = 0;
      }
      else
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
        LODWORD(v15) = -2147483643;
        v33[3] = a3;
        v33[4] = v6;
        v33[5] = v68;
        WdLogGlobalForLineNumber = 5309;
      }
      goto LABEL_119;
    case 2:
      if ( a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4854;
      }
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 14) + 72LL));
      v19 = *((_QWORD *)a1 + 14);
      v24 = DMMVIDEOPRESENTSOURCESET::Serialize(v19, &v64);
      v15 = v24;
      if ( v24 >= 0 )
        goto LABEL_40;
      v25 = VIDPN_MGR::GetContainingAdapter(a1);
      WdLogSingleEntry3(2LL, v19, v25, v15);
      WdLogGlobalForLineNumber = 4870;
      goto LABEL_38;
    case 3:
      if ( a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4882;
      }
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 15) + 72LL));
      v19 = *((_QWORD *)a1 + 15);
      v22 = DMMVIDEOPRESENTTARGETSET::Serialize((DMMVIDEOPRESENTTARGETSET *)v19);
      v15 = v22;
      if ( v22 >= 0 )
        goto LABEL_40;
      v23 = VIDPN_MGR::GetContainingAdapter(a1);
      WdLogSingleEntry3(2LL, v19, v23, v15);
      WdLogGlobalForLineNumber = 4898;
LABEL_38:
      if ( v19 )
        ReferenceCounted::Release((ReferenceCounted *)(v19 + 64));
      goto LABEL_119;
    case 4:
LABEL_86:
      if ( a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4939;
      }
      v70 = 0LL;
      ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(a1);
      auto_rc<DMMVIDPN const>::reset((__int64 *)&v70, (__int64)ClientCommittedVidPnRef);
      v41 = (__int64)v70;
      if ( !v70 )
      {
        VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 4949;
        auto_rc<DMMVIDPN const>::reset((__int64 *)&v70, 0LL);
        LODWORD(v15) = -1071774884;
        goto LABEL_119;
      }
      v42 = DMMVIDPN::Serialize(v70, &v64);
      v15 = v42;
      if ( v42 < 0 )
      {
        v43 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry3(2LL, v41, v43, v15);
        WdLogGlobalForLineNumber = 4966;
        auto_rc<DMMVIDPN const>::reset((__int64 *)&v70, 0LL);
        goto LABEL_119;
      }
      auto_rc<DMMVIDPN const>::reset((__int64 *)&v70, 0LL);
      goto LABEL_53;
    case 5:
      if ( a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4910;
      }
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 15) + 72LL));
      v19 = *((_QWORD *)a1 + 15);
      v20 = DMMVIDEOPRESENTTARGETSET::SerializeConnectedMonitors(v19, &v64);
      v15 = v20;
      if ( v20 < 0 )
      {
        v21 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry3(2LL, v19, v21, v15);
        WdLogGlobalForLineNumber = 4926;
        goto LABEL_38;
      }
LABEL_40:
      if ( v19 )
        ReferenceCounted::Release((ReferenceCounted *)(v19 + 64));
      goto LABEL_53;
    case 6:
      if ( a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4978;
      }
      v17 = VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests((char *)a1 + 192, &v64);
      v15 = v17;
      if ( v17 < 0 )
      {
        v18 = VIDPN_MGR::GetContainingAdapter(a1);
        WdLogSingleEntry3(2LL, (char *)a1 + 192, v18, v15);
        WdLogGlobalForLineNumber = 4992;
        goto LABEL_119;
      }
      goto LABEL_52;
  }
  if ( (_DWORD)v6 != 7 )
  {
LABEL_67:
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5285;
    LODWORD(v15) = -1073741811;
    goto LABEL_119;
  }
  if ( a5 )
  {
    WdLogSingleEntry0((unsigned int)(v6 - 6));
    WdLogGlobalForLineNumber = 5004;
  }
  v12 = VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests((char *)a1 + 328, &v64);
  v15 = v12;
  if ( v12 >= 0 )
    goto LABEL_52;
  v16 = VIDPN_MGR::GetContainingAdapter(a1);
  WdLogSingleEntry3(2LL, (char *)a1 + 328, v16, v15);
  WdLogGlobalForLineNumber = 5018;
LABEL_119:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v64);
  return (unsigned int)v15;
}
