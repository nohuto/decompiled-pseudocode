/*
 * XREFs of ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x1801A4084
 * Callers:
 *     ?RequestViewHitTest@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAUIRemoteViewHitTestRequestClient@@@Z @ 0x1801A4010 (-RequestViewHitTest@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAUIRemoteViewHitTestRequestClient@@.c)
 *     ?RequestViewHitTestSync@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAI@Z @ 0x1801A4180 (-RequestViewHitTestSync@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAI@Z.c)
 * Callees:
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180014B50 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x1800156F0 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002C510 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x18004AFA0 (--1HitTestResult@@QEAA@XZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18005AD04 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x1801A1F30 (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall DWMInputRouter::RequestViewHitTestHelper(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v5; // r14d
  int v6; // r15d
  int v7; // ecx
  int ViewInstanceIdFromInputSiteList; // edi
  unsigned int v9; // ebx
  struct IInputSiteHierarchyManager *InputSiteHierarchyManager; // rbx
  struct InputSiteManager *InputSiteManager; // rax
  __int128 v12[9]; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v13[104]; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+128h] [rbp-50h]

  v5 = a2[2];
  v6 = a2[3];
  v7 = a2[5];
  ViewInstanceIdFromInputSiteList = 0;
  if ( v7 )
    v9 = HitTestHelper::ConvertInputTypeToPointerType(v7);
  else
    v9 = 0;
  memset_0((char *)v12 + 12, 0, 0x7CuLL);
  DWORD2(v12[0]) = v6;
  *(_QWORD *)&v12[0] = __PAIR64__(v5, v9);
  InputSiteHierarchyManager = ISMStatics::GetInputSiteHierarchyManager();
  InputSiteManager = ISMStatics::GetInputSiteManager();
  HitTestHelper::HitTestRequestWithRetry(
    v13,
    v12,
    *(__int64 (__fastcall ****)(_QWORD, __int128 *))(a1 + 184),
    (__int64)InputSiteManager,
    (__int64)InputSiteHierarchyManager);
  if ( v13[0] )
    ViewInstanceIdFromInputSiteList = InputSiteManager::GetViewInstanceIdFromInputSiteList(v14 - 24);
  *a3 = ViewInstanceIdFromInputSiteList;
  HitTestResult::~HitTestResult((HitTestResult *)v13);
}
