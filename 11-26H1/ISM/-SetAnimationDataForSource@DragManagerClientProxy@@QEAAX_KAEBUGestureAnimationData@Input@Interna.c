/*
 * XREFs of ?SetAnimationDataForSource@DragManagerClientProxy@@QEAAX_KAEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180148970
 * Callers:
 *     ?StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180146470 (-StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetCl.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800292CC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?ClearAnimationDataForAllSources@DragManagerClientProxy@@AEAAXXZ @ 0x18002F168 (-ClearAnimationDataForAllSources@DragManagerClientProxy@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18008B328 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     ?OnManagerAnimationDataChange@GestureServices@@QEAAX_K0@Z @ 0x180097D08 (-OnManagerAnimationDataChange@GestureServices@@QEAAX_K0@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KUGestureAnimationData@Input@Internal@UI@Windows@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180147014 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KUGestureAnimationData@Input@Internal@UI@Windo.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@_KUGestureAnimationData@Input@Internal@UI@Windows@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@@7@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@@std@@@std@@@1@V21@@Z @ 0x1801471A4 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KUGestureAnimationDat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall DragManagerClientProxy::SetAnimationDataForSource(
        DragManagerClientProxy *this,
        __int64 a2,
        const struct Windows::UI::Internal::Input::GestureAnimationData *a3)
{
  float *v3; // rbx
  __int64 v6; // rsi
  struct InputSystemServerConnection *BamoServerConnection; // rax
  GestureServices *v8; // rax
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v3 = (float *)((char *)this + 80);
  if ( *((_QWORD *)this + 12) >= 0x64uLL )
  {
    LODWORD(v10) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgs((__int64)this, 0x20000, 51);
    DragManagerClientProxy::ClearAnimationDataForAllSources(this);
  }
  std::_Hash<std::_Umap_traits<unsigned __int64,Windows::UI::Internal::Input::GestureAnimationData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>,0>>::_Try_emplace<unsigned __int64 const &,>(
    v3,
    (__int64)v9,
    (unsigned __int8 *)&v11);
  v6 = v9[0];
  if ( *(_QWORD *)(v9[0] + 24) != *(_QWORD *)a3 )
  {
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v8 = (GestureServices *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL)
                                                               + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
    GestureServices::OnManagerAnimationDataChange(v8, *(_QWORD *)(v6 + 24), *(_QWORD *)a3);
    *(_OWORD *)(v6 + 24) = *(_OWORD *)a3;
  }
  if ( !*(_QWORD *)a3 )
    std::_Hash<std::_Umap_traits<unsigned __int64,Windows::UI::Internal::Input::GestureAnimationData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>>>,0>(
      v3,
      &v10,
      v6);
}
