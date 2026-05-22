/*
 * XREFs of ?CheckForVirtualTouchpadFromInputSiteList@DWMInputRouter@@AEAA_NAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@PEAUVPTP_ID@@@Z @ 0x180079258
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180014BD0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 * Callees:
 *     ?GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ @ 0x18002A150 (-GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ.c)
 *     ??$GetAttachedObject@UIVirtualTouchpadControllerProxy@@VVirtualTouchpadControllerProxy@@@InputSite@@QEAA?AV?$ComPtr@VVirtualTouchpadControllerProxy@@@WRL@Microsoft@@XZ @ 0x18007DDD8 (--$GetAttachedObject@UIVirtualTouchpadControllerProxy@@VVirtualTouchpadControllerProxy@@@InputSi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall DWMInputRouter::CheckForVirtualTouchpadFromInputSiteList(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  bool v4; // di
  _QWORD *v5; // rsi
  _QWORD *v6; // rbp
  __int64 v7; // rbx
  int v8; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = a1;
  v4 = 0;
  v5 = (_QWORD *)*a2;
  v6 = (_QWORD *)a2[1];
  while ( v5 != v6 )
  {
    InputSite::GetAttachedObject<IVirtualTouchpadControllerProxy,VirtualTouchpadControllerProxy>(*v5, &v10);
    v7 = v10;
    if ( v10 )
    {
      if ( BamoShellGesturesClientProxy::GetTouchEnabled((BamoShellGesturesClientProxy *)(v10 + 8)) )
        v8 = *(_DWORD *)(v7 + 248);
      else
        v8 = 0;
      *a3 = v8;
      v4 = v8 != 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 16) + 8LL))(v7 + 16);
      return v4;
    }
    ++v5;
  }
  return v4;
}
