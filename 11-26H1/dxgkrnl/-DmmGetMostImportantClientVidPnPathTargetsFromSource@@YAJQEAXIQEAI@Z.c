/*
 * XREFs of ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1403B958C
 * Callers:
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x14005FB00 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1401CB12C (-Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1402AD2E0 (DxgkGetAdapterDeviceDesc.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x140405140 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1403B9750 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 */

__int64 __fastcall DmmGetMostImportantClientVidPnPathTargetsFromSource(
        _QWORD *a1,
        unsigned int a2,
        unsigned int *const a3)
{
  __int64 v6; // rax
  VIDPN_MGR *v7; // rdi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  unsigned int MostImportantVidPnPathTargetsFromSource; // ebx
  __int64 result; // rax
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  if ( !a3 )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 9570;
    return result;
  }
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 9584;
    return 3223191554LL;
  }
  v6 = a1[395];
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 9597;
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
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v12, *(_QWORD *)(v6 + 104));
    v11 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v7);
    auto_rc<DMMVIDPN const>::reset(&v11, (__int64)ClientCommittedVidPnRef);
    if ( v11 )
    {
      MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                  (const struct DMMVIDPNTOPOLOGY *)(v11 + 96),
                                                  a2,
                                                  a3);
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 9628;
      MostImportantVidPnPathTargetsFromSource = -1071774973;
    }
    auto_rc<DMMVIDPN const>::reset(&v11, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
    return MostImportantVidPnPathTargetsFromSource;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 9611;
  }
  return result;
}
