/*
 * XREFs of ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x140344070
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x140257550 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402AA9B4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x140344370 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DmmCanAddPresentPathToClientVidPn(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rbp
  __int64 v6; // r15
  unsigned __int8 v8; // si
  __int64 v9; // rdi
  VIDPN_MGR *v10; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // ebx
  int v12; // eax
  int v13; // edi
  __int64 result; // rax
  __int64 v15; // [rsp+50h] [rbp-38h] BYREF

  v4 = a3;
  v6 = a2;
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 7778;
    return result;
  }
  *a4 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7795;
    return 3223191554LL;
  }
  v8 = 1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7801;
  }
  v9 = *((_QWORD *)a1 + 395);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7806;
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
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v15, (__int64)v10);
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v10);
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      WdLogSingleEntry1(7LL);
      WdLogGlobalForLineNumber = 7840;
      goto LABEL_13;
    }
    v12 = VIDPN_MGR::AddPathToVidPnTopology(
            v10,
            (struct DMMVIDPNTOPOLOGY *const)0x60,
            v6,
            v4,
            (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
            0xFFFFu,
            0,
            D3DKMDT_MCC_ENFORCE);
    v13 = v12;
    if ( v12 == -1071774975 )
    {
      WdLogSingleEntry3(7LL, v6, v4, 96LL);
      WdLogGlobalForLineNumber = 7866;
    }
    else
    {
      if ( v12 != -1071774976 )
      {
        if ( v12 < 0 )
        {
          WdLogSingleEntry4(2LL, v6, v4, 96LL, v12);
          WdLogGlobalForLineNumber = 7884;
          ClientVidPnFromLastClientCommitedVidPn = v13;
          goto LABEL_13;
        }
        goto LABEL_12;
      }
      WdLogSingleEntry3(7LL, v6, v4, 96LL);
      WdLogGlobalForLineNumber = 7875;
    }
    v8 = 0;
LABEL_12:
    *a4 = v8;
    ClientVidPnFromLastClientCommitedVidPn = 0;
LABEL_13:
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v15 + 40));
    return (unsigned int)ClientVidPnFromLastClientCommitedVidPn;
  }
  WdLogSingleEntry1(2LL);
  result = 3223192373LL;
  WdLogGlobalForLineNumber = 7820;
  return result;
}
