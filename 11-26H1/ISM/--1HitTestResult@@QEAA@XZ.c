/*
 * XREFs of ??1HitTestResult@@QEAA@XZ @ 0x18004AFA0
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180014BD0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?HitTest@InjectionRawInputProvider@@AEAAJUtagPOINT@@KPEAVInputInjectionClientProxy@@@Z @ 0x1800E2420 (-HitTest@InjectionRawInputProvider@@AEAAJUtagPOINT@@KPEAVInputInjectionClientProxy@@@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18014EBD8 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAPEAVBamoDragSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x18014EDFC (-GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClie.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18014F14C (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 *     ?HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z @ 0x180157C28 (-HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801A33B0 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x1801A3D9C (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x1801A4084 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 *     ?RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z @ 0x1801A6DE0 (-RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z.c)
 *     _DWMInputRouter::HitTest_::_1_::dtor$0 @ 0x1801D4590 (_DWMInputRouter--HitTest_--_1_--dtor$0.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$3 @ 0x1801D45D0 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$3.c)
 *     _DragNDropProcessor::GetDragManagerInputSite_::_1_::dtor$1 @ 0x1801DB6BC (_DragNDropProcessor--GetDragManagerInputSite_--_1_--dtor$1.c)
 *     _EdgyProcessor::HitTestForTarget_::_1_::dtor$0 @ 0x1801DB6CE (_EdgyProcessor--HitTestForTarget_--_1_--dtor$0.c)
 *     _DWMInputRouter::RequestViewHitTestHelper_::_1_::dtor$0 @ 0x1801DB6F2 (_DWMInputRouter--RequestViewHitTestHelper_--_1_--dtor$0.c)
 *     _DWMInputRouter::HitTest_::_1_::dtor$0_0 @ 0x1801DCBA2 (_DWMInputRouter--HitTest_--_1_--dtor$0_0.c)
 *     _DWMInputRouter::RequestUIAHitTest_::_1_::dtor$0 @ 0x1801DCBB4 (_DWMInputRouter--RequestUIAHitTest_--_1_--dtor$0.c)
 *     _TestCommands::RequestHitTest_::_1_::dtor$1 @ 0x1801DCC83 (_TestCommands--RequestHitTest_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HitTestResult::~HitTestResult(HitTestResult *this)
{
  __int64 **v2; // rbx
  __int64 **v3; // rbp
  __int64 *v4; // rsi
  __int64 *v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = (__int64 **)*((_QWORD *)this + 12);
  if ( v2 )
  {
    v3 = (__int64 **)*((_QWORD *)this + 13);
    while ( v2 != v3 )
    {
      v4 = *v2;
      if ( *v2 )
      {
        v5 = v2[1];
        while ( v4 != v5 )
        {
          v6 = *v4;
          if ( *v4 )
          {
            *v4 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
          }
          ++v4;
        }
        std::_Deallocate<16>(*v2, ((char *)v2[2] - (char *)*v2) & 0xFFFFFFFFFFFFFFF8uLL);
        *v2 = 0LL;
        v2[1] = 0LL;
        v2[2] = 0LL;
      }
      v2 += 3;
    }
    std::_Deallocate<16>(*((_QWORD *)this + 12), 8 * ((__int64)(*((_QWORD *)this + 14) - *((_QWORD *)this + 12)) >> 3));
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  v7 = *((_QWORD *)this + 1);
  if ( v7 && v7 != -1 )
    NtCloseCompositionInputSink(v7);
}
