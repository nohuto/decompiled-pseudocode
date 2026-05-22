/*
 * XREFs of ?OnInputNotification@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180158908
 * Callers:
 *     ?OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180157E80 (-OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@.c)
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x18014C4DC (--$_Erase@K@-$_Hash@V-$_Umap_traits@KPEAVControllerProcessor@@V-$_Uhash_compare@KU-$hash@K@std@@.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUtagPOINTF@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTF@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUtagPOINTF@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18014CB24 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUtagPOINTF@@V-$_Uhash_compare@KU-$hash@K@std@@U.c)
 *     ??$_Erase@K@?$_Hash@V?$_Umap_traits@KUEdgyNotificationMessageInfo@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBK@Z @ 0x180155D0C (--$_Erase@K@-$_Hash@V-$_Umap_traits@KUEdgyNotificationMessageInfo@EdgyProcessor@@V-$_Uhash_compa.c)
 *     ?AddDecisionException@EdgyProcessor@@AEAAXKW4ContextualProcessorDecision@@PEAUContextualProcessorResponse@@@Z @ 0x180156B50 (-AddDecisionException@EdgyProcessor@@AEAAXKW4ContextualProcessorDecision@@PEAUContextualProcesso.c)
 *     ?EdgyRecognized@Edgy@InputETW@@SAXUtagPOINT@@@Z @ 0x1801573D4 (-EdgyRecognized@Edgy@InputETW@@SAXUtagPOINT@@@Z.c)
 *     ?OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z @ 0x180159260 (-OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall EdgyProcessor::OnInputNotification(
        EdgyProcessor *this,
        struct InputInfo *a2,
        struct tagPOINTER_INFO *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v8; // rbx
  EdgyRecognizer *v9; // rcx
  struct tagPOINT v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // r8d
  _BYTE v13[16]; // [rsp+20h] [rbp-10h] BYREF
  int v14; // [rsp+60h] [rbp+30h] BYREF
  __int64 v15; // [rsp+70h] [rbp+40h] BYREF

  v14 = *((_DWORD *)a3 + 1);
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (_QWORD *)this + 52,
    &v15,
    (const unsigned __int8 *)&v14);
  v8 = v15;
  if ( v15 != *((_QWORD *)this + 53) )
  {
    if ( *(_QWORD *)(v15 + 24) )
    {
      v9 = *(EdgyRecognizer **)(v15 + 40);
      if ( *((_DWORD *)v9 + 2) == 2 || *((_DWORD *)v9 + 2) == 3 )
      {
        EdgyRecognizer::OnPointerInfoFrame(v9, a2, a3);
        if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 32LL))(*(_QWORD *)(v8 + 24) + 8LL) )
        {
          if ( (*((_BYTE *)a3 + 12) & 4) != 0 )
            EdgyProcessor::AddDecisionException((__int64)v9, v14, 1u, (__int64)a4);
          else
            *(_DWORD *)(*(_QWORD *)(v8 + 40) + 8LL) = 1;
        }
      }
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 40) + 8LL) == 1 )
        EdgyProcessor::AddDecisionException((__int64)v9, v14, 0, (__int64)a4);
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 40) + 8LL) == 4 )
      {
        v10 = *(struct tagPOINT *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,tagPOINTF,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINTF>>,0>>::_Try_emplace<unsigned long const &,>(
                                                (float *)this + 120,
                                                (__int64)v13,
                                                (unsigned __int8 *)&v14)
                                 + 20LL);
        *(float *)&v15 = (float)v10.x;
        *((float *)&v15 + 1) = (float)v10.y;
        InputETW::Edgy::EdgyRecognized(v10);
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 24LL))(
          *(_QWORD *)(v8 + 24) + 8LL,
          &v15);
        *(_DWORD *)(*(_QWORD *)(v8 + 40) + 8LL) = 5;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 40) + 8LL) == 5 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 8LL) + 32LL))(*(_QWORD *)(v8 + 24) + 8LL) )
          v12 = 0;
        else
          v12 = 3;
        EdgyProcessor::AddDecisionException(v11, v14, v12, (__int64)a4);
      }
    }
    if ( (*((_BYTE *)a3 + 12) & 4) == 0 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::EdgyNotificationMessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::EdgyNotificationMessageInfo>>,0>>::_Erase<unsigned long>(
        (_QWORD *)this + 52,
        (unsigned __int8 *)&v14);
      std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::_Erase<unsigned long>(
        (_QWORD *)this + 60,
        (unsigned __int8 *)&v14);
    }
  }
}
