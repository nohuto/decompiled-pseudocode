/*
 * XREFs of ?HitTestForPointTypeAndWorkspace@DWMInputRouter@@UEAA?AUHitTestResult@@UtagPOINT@@KK@Z @ 0x1801A3690
 * Callers:
 *     <none>
 * Callees:
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x1800156F0 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002C510 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18005AD04 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 */

_BYTE *__fastcall DWMInputRouter::HitTestForPointTypeAndWorkspace(__int64 a1, _BYTE *a2, __int64 a3, int a4, int a5)
{
  struct IInputSiteHierarchyManager *InputSiteHierarchyManager; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  __int128 v12[6]; // [rsp+40h] [rbp-98h] BYREF
  int v13; // [rsp+ACh] [rbp-2Ch]

  memset_0(v12, 0, 0x88uLL);
  v13 = a5;
  *(_QWORD *)((char *)v12 + 4) = a3;
  LODWORD(v12[0]) = a4;
  InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
  InputSiteManager = ISMStatics::GetInputSiteManager();
  HitTestHelper::HitTestRequestWithRetry(
    a2,
    v12,
    *(__int64 (__fastcall ****)(_QWORD, __int128 *))(a1 + 176),
    (__int64)InputSiteManager,
    (__int64)InputSiteHierarchyManager);
  return a2;
}
