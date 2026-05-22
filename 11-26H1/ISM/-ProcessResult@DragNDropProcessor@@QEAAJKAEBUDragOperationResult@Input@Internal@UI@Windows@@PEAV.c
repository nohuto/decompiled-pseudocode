/*
 * XREFs of ?ProcessResult@DragNDropProcessor@@QEAAJKAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientProxy@@@Z @ 0x1801508B0
 * Callers:
 *     ?ProcessResult@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientProxy@@@Z @ 0x180145EE0 (-ProcessResult@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IAEBUDragOperationResult@Input.c)
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18014C430 (--$_Erase@K@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash@.c)
 *     ?TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z @ 0x1801A9350 (-TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z.c)
 */

__int64 __fastcall DragNDropProcessor::ProcessResult(
        DragNDropProcessor *this,
        int a2,
        const struct Windows::UI::Internal::Input::DragOperationResult *a3,
        struct BamoDragManagerClientProxy *a4)
{
  _QWORD *v4; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF
  struct BamoDragManagerClientProxy *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = a4;
  v11 = a2;
  v4 = (_QWORD *)((char *)this + 176);
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (_QWORD *)this + 22,
    &v12,
    (const unsigned __int8 *)&v11);
  if ( v12 != *((struct BamoDragManagerClientProxy **)this + 23) )
  {
    if ( *(_BYTE *)a3 )
    {
      v8 = *((_QWORD *)v12 + 5);
      if ( v8 )
      {
        v10[1] = *((unsigned int *)a3 + 1);
        v10[0] = v8;
        ActivationProcessor::TryActivate(v7, v10);
      }
    }
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::_Erase<unsigned long>(
      v4,
      (unsigned __int8 *)&v11);
  }
  return 0LL;
}
