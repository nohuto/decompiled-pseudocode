/*
 * XREFs of ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402DC2EC
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1403AA144 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z @ 0x14005DD18 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402DB87C (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402DCD14 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1402DCE54 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 */

__int64 __fastcall DmmUpdateGammaRampOnVidPnSource(DXGADAPTER *a1, unsigned int a2, const struct DXGK_GAMMA_RAMP *a3)
{
  __int64 v3; // r15
  __int64 v6; // r14
  VIDPN_MGR *v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r13
  ReferenceCounted *v11; // rcx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v13; // r14
  unsigned __int64 i; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  DMMVIDPNPRESENTPATH *Path; // rsi
  int updated; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 result; // rax
  _QWORD *v24; // rax
  __int64 v25; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+90h] [rbp+30h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+48h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 8816;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8824;
  }
  v6 = *((_QWORD *)a1 + 395);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 8829;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v7 = *(VIDPN_MGR **)(v6 + 104);
  if ( v7 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v25, (__int64)v7);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v7 + 14) + 72LL));
    v8 = *((_QWORD *)v7 + 14);
    v9 = IndexedSet<DMMVIDEOPRESENTSOURCE>::FindById(v8, v3);
    v10 = v9;
    if ( v9 )
    {
      if ( a3 )
        _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
      v11 = *(ReferenceCounted **)(v9 + 128);
      if ( v11 )
        ReferenceCounted::Release(v11);
      *(_QWORD *)(v10 + 128) = a3;
      if ( v8 )
        ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
      v27 = 0LL;
      ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v7);
      auto_rc<DMMVIDPN const>::reset(&v27, (__int64)ClientCommittedVidPnRef);
      if ( v27 )
      {
        v13 = (DMMVIDPNTOPOLOGY *)(v27 + 96);
        for ( i = 0LL; ; ++i )
        {
          v26 = -1;
          v15 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v13, v3, i, &v26);
          v18 = v15;
          if ( v15 < 0 )
          {
            v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16);
            v24[3] = i;
            v24[4] = v3;
            v24[5] = v13;
            v24[6] = v18;
            WdLogGlobalForLineNumber = 8910;
            goto LABEL_30;
          }
          if ( v26 == -1 )
          {
            auto_rc<DMMVIDPN const>::reset(&v27, 0LL);
            DXGFASTMUTEX::Release((struct _KTHREAD **)(v25 + 40));
            return 0LL;
          }
          Path = DMMVIDPNTOPOLOGY::FindPath(v13, v3, v26);
          if ( !Path )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 8930;
          }
          updated = DMMVIDPNPRESENTPATH::UpdateGammaRamp(Path);
          LODWORD(v18) = updated;
          if ( updated < 0 )
            break;
          LODWORD(v18) = DMMVIDPNPRESENTPATH::SetDriverGammaRamp(Path, 0LL);
          if ( (int)v18 < 0 )
            goto LABEL_30;
        }
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v22, v21) + 24) = updated;
        WdLogGlobalForLineNumber = 8940;
LABEL_30:
        auto_rc<DMMVIDPN const>::reset(&v27, 0LL);
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 8883;
        auto_rc<DMMVIDPN const>::reset(&v27, 0LL);
        LODWORD(v18) = -1071774884;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 8864;
      if ( v8 )
        ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
      LODWORD(v18) = -1071774972;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v25 + 40));
    return (unsigned int)v18;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 8843;
  }
  return result;
}
