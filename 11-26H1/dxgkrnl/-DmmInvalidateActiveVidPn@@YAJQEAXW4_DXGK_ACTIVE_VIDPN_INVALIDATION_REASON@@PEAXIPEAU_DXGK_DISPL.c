/*
 * XREFs of ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x14025AE74
 * Callers:
 *     DxgkInvalidateActiveVidPn @ 0x1401D3EB0 (DxgkInvalidateActiveVidPn.c)
 *     DpiAcpiProcessEventRequests @ 0x14025374C (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140259390 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1403EF568 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 */

__int64 __fastcall DmmInvalidateActiveVidPn(
        DXGADAPTER *this,
        __int64 a2,
        void *a3,
        unsigned int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5,
        int a6)
{
  enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v8; // esi
  __int64 v10; // rax
  VIDPN_MGR *v11; // r12
  __int64 result; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DMMVIDPN *v16; // rbx
  __int64 v17; // rax
  char v18; // r14
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v20; // r13
  char *v21; // rsi
  struct DMMVIDPN *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  char *v25; // rax
  int v26; // eax
  int v27; // edi
  struct DMMVIDPN *v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+58h] [rbp-18h] BYREF
  __int64 v30; // [rsp+60h] [rbp-10h] BYREF
  char *v31; // [rsp+68h] [rbp-8h]
  struct DMMVIDPN *v32; // [rsp+A0h] [rbp+30h] BYREF

  v8 = (int)a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  WdLogGlobalForLineNumber = 10464;
  if ( this )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 10484;
    }
    v10 = *((_QWORD *)this + 395);
    if ( v10 )
    {
      v11 = *(VIDPN_MGR **)(v10 + 104);
      if ( !v11 )
      {
        WdLogSingleEntry1(2LL);
        result = 3223192373LL;
        WdLogGlobalForLineNumber = 10503;
        return result;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v30, *(_QWORD *)(v10 + 104));
      v28 = 0LL;
      v32 = 0LL;
      v13 = VIDPN_MGR::RecommendFunctionalVidPn(v11, v8, a3, a4, &v32);
      v16 = (struct DMMVIDPN *)v13;
      if ( v13 >= 0 )
      {
        auto_rc<DMMVIDPN>::reset((__int64 *)&v28, (__int64)v32);
        v16 = v28;
        v18 = 0;
        if ( v8 == DXGK_RFVR_HOTKEY )
        {
          v18 = 1;
          if ( v28 == (struct DMMVIDPN *)-96LL )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 10548;
          }
          v29 = 0LL;
          ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v11);
          auto_rc<DMMVIDPN const>::reset(&v29, (__int64)ClientCommittedVidPnRef);
          if ( v29 )
          {
            v20 = (DMMVIDPNTOPOLOGY *)(v29 + 96);
            if ( v29 == -96 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 10567;
            }
            if ( *((_QWORD *)v20 + 5) == *((_QWORD *)v16 + 17) )
            {
              v21 = 0LL;
              v22 = (struct DMMVIDPN *)*((_QWORD *)v16 + 15);
              v31 = (char *)v16 + 120;
              if ( v22 != (struct DMMVIDPN *)((char *)v16 + 120) )
                v21 = (char *)v22 - 8;
              if ( !v21 )
                goto LABEL_29;
              do
              {
                v23 = *((_QWORD *)v21 + 12);
                LODWORD(v32) = *(_DWORD *)(*((_QWORD *)v21 + 11) + 24LL);
                v24 = *(_DWORD *)(v23 + 24);
                a6 = v24;
                if ( (_DWORD)v32 == -1 )
                {
                  WdLogSingleEntry0(1LL);
                  v24 = a6;
                  WdLogGlobalForLineNumber = 10585;
                }
                if ( v24 == -1 )
                {
                  WdLogSingleEntry0(1LL);
                  v24 = a6;
                  WdLogGlobalForLineNumber = 10586;
                }
                if ( !DMMVIDPNTOPOLOGY::FindPath(v20, (int)v32, v24) )
                  break;
                v25 = (char *)*((_QWORD *)v21 + 1);
                v21 = v25 - 8;
                if ( v25 == v31 )
                  v21 = 0LL;
              }
              while ( v21 );
              if ( !v21 )
LABEL_29:
                v18 = 0;
            }
          }
          auto_rc<DMMVIDPN const>::reset(&v29, 0LL);
          if ( v18 )
          {
            WdLogSingleEntry1(7LL);
            WdLogGlobalForLineNumber = 10615;
          }
        }
        v26 = VIDPN_MGR::CommitVidPnViaSDC((ADAPTER_DISPLAY **)v11, v16, v18, a5);
        v27 = v26;
        if ( v26 >= 0 )
        {
          auto_rc<DMMVIDPN>::reset((__int64 *)&v28, 0LL);
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v30 + 40));
          return 0LL;
        }
        WdLogSingleEntry2(2LL, v16, v26);
        WdLogGlobalForLineNumber = 10629;
        LODWORD(v16) = v27;
      }
      else
      {
        v17 = WdLogNewEntry5_WdTrace(v15, v14);
        *(_QWORD *)(v17 + 24) = 0LL;
        *(_QWORD *)(v17 + 32) = v16;
        WdLogGlobalForLineNumber = 10530;
      }
      auto_rc<DMMVIDPN>::reset((__int64 *)&v28, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v30 + 40));
      return (unsigned int)v16;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 10489;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10467;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 10478;
  }
  return 3223191554LL;
}
