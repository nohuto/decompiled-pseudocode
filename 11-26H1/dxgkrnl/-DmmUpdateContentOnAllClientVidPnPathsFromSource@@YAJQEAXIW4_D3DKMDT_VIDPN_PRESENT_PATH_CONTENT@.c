/*
 * XREFs of ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x14025C238
 * Callers:
 *     DxgkHandleVideoParameters @ 0x140235530 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x140096850 (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1402676AC (-SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402DCD14 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x140385038 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 */

__int64 __fastcall DmmUpdateContentOnAllClientVidPnPathsFromSource(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT a3)
{
  __int64 v3; // r14
  __int64 v6; // rax
  VIDPN_MGR *v7; // rdi
  __int64 result; // rax
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v10; // rsi
  unsigned __int64 i; // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  struct DMMVIDPNPRESENTPATH *Path; // rbx
  int updated; // eax
  _QWORD *v18; // rax
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+90h] [rbp+30h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+48h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 10685;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10693;
  }
  v6 = *((_QWORD *)a1 + 395);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 10698;
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
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v19, *(_QWORD *)(v6 + 104));
    v21 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v7);
    auto_rc<DMMVIDPN const>::reset(&v21, (__int64)ClientCommittedVidPnRef);
    if ( v21 )
    {
      v10 = (DMMVIDPNTOPOLOGY *)(v21 + 96);
      for ( i = 0LL; ; ++i )
      {
        v20 = -1;
        v12 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v10, v3, i, &v20);
        v15 = v12;
        if ( v12 < 0 )
          break;
        if ( v20 == -1 )
        {
          auto_rc<DMMVIDPN const>::reset(&v21, 0LL);
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v19 + 40));
          return 0LL;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath(v10, v3, v20);
        if ( !Path )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10778;
        }
        DMMVIDPNPRESENTPATH::SetContentType(Path, a3);
        if ( *((_BYTE *)Path + 110) )
          updated = DMMVIDPNPRESENTPATH::SetTargetContentType(Path);
        else
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path, 0LL);
        LODWORD(v15) = updated;
        if ( updated < 0 )
          goto LABEL_22;
      }
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
      v18[3] = i;
      v18[4] = v3;
      v18[5] = v10;
      v18[6] = v15;
      WdLogGlobalForLineNumber = 10758;
LABEL_22:
      auto_rc<DMMVIDPN const>::reset(&v21, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v19 + 40));
      return (unsigned int)v15;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 10731;
      auto_rc<DMMVIDPN const>::reset(&v21, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v19 + 40));
      return 3223192412LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 10712;
  }
  return result;
}
