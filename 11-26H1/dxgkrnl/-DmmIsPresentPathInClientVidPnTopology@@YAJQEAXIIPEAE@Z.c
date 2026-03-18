/*
 * XREFs of ?DmmIsPresentPathInClientVidPnTopology@@YAJQEAXIIPEAE@Z @ 0x1403BCFD4
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x140257550 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 */

__int64 __fastcall DmmIsPresentPathInClientVidPnTopology(DXGADAPTER *a1, int a2, int a3, bool *a4)
{
  bool v4; // bl
  __int64 v9; // rax
  VIDPN_MGR *v10; // rsi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  char *v12; // r8
  char *v13; // rdx
  const struct DMMVIDPN *v14; // rcx
  __int64 result; // rax
  char *v16; // rax
  __int64 v17; // [rsp+50h] [rbp-28h] BYREF
  const struct DMMVIDPN *v18; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 6754;
    return result;
  }
  *a4 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6771;
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6777;
  }
  v9 = *((_QWORD *)a1 + 395);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6782;
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
  v10 = *(VIDPN_MGR **)(v9 + 104);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v17, *(_QWORD *)(v9 + 104));
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v10);
    v18 = ClientCommittedVidPnRef;
    if ( ClientCommittedVidPnRef )
    {
      v12 = (char *)ClientCommittedVidPnRef + 120;
      v13 = 0LL;
      v14 = (const struct DMMVIDPN *)*((_QWORD *)ClientCommittedVidPnRef + 15);
      if ( v14 != (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 120) )
        v13 = (char *)v14 - 8;
      while ( v13
           && (*(_DWORD *)(*((_QWORD *)v13 + 11) + 24LL) != a2 || *(_DWORD *)(*((_QWORD *)v13 + 12) + 24LL) != a3) )
      {
        v16 = (char *)*((_QWORD *)v13 + 1);
        v13 = v16 - 8;
        if ( v16 == v12 )
          v13 = 0LL;
      }
      v4 = v13 != 0LL;
    }
    *a4 = v4;
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v18, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v17 + 40));
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 6796;
  }
  return result;
}
