/*
 * XREFs of ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18017A194
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18017E658 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18002D184 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180064CA4 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 *     ??$_Insert_or_assign@AEBW4GameInputGamepadButtons@@AEAG@?$unordered_map@W4GameInputGamepadButtons@@GU?$hash@W4GameInputGamepadButtons@@@std@@U?$equal_to@W4GameInputGamepadButtons@@@3@V?$allocator@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@3@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GameInputGamepadButtons@@G@std@@@std@@@std@@@std@@_N@1@AEBW4GameInputGamepadButtons@@AEAG@Z @ 0x18006694C (--$_Insert_or_assign@AEBW4GameInputGamepadButtons@@AEAG@-$unordered_map@W4GameInputGamepadButton.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??$emplace@AEAKAEAPEAVControllerProcessor@@@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAKAEAPEAVControllerProcessor@@@Z @ 0x180178DDC (--$emplace@AEAKAEAPEAVControllerProcessor@@@-$_Hash@V-$_Umap_traits@KPEAVControllerProcessor@@V-.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z @ 0x18017EDD8 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z.c)
 *     ?NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z @ 0x18017EF88 (-NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ControllerNavigationManager::RegisterControllerProcessor(
        ControllerNavigationManager *this,
        int a2,
        struct ControllerProcessor *a3)
{
  char *v4; // rcx
  bool v5; // r12
  __int64 v6; // rcx
  __int16 v7; // ax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  struct tagRECT v10; // xmm6
  struct tagPOINT *v11; // rax
  __int64 (__fastcall ***v12)(_QWORD); // rsi
  __int64 (__fastcall ***v13)(_QWORD); // r14
  unsigned int v14; // edi
  struct tagRECT v15; // xmm6
  struct tagPOINT v16; // rbx
  unsigned __int64 v17; // rax
  struct tagRECT v19; // [rsp+40h] [rbp-28h] BYREF
  __int64 (__fastcall ***v20)(_QWORD); // [rsp+A0h] [rbp+38h] BYREF
  int v21; // [rsp+A8h] [rbp+40h] BYREF
  ControllerProcessor *v22; // [rsp+B0h] [rbp+48h] BYREF
  int v23; // [rsp+B8h] [rbp+50h] BYREF

  v22 = a3;
  v21 = a2;
  v4 = (char *)this + 64;
  v5 = *((_QWORD *)v4 + 2) == 0LL;
  std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::emplace<unsigned long &,ControllerProcessor * &>(
    (float *)v4,
    (__int64)&v19,
    (unsigned __int8 *)&v21,
    &v22);
  v23 = 8;
  v7 = 196;
  if ( !*((_BYTE *)this + 228) )
    v7 = 27;
  LOWORD(v20) = v7;
  std::unordered_map<enum GameInputGamepadButtons,unsigned short>::_Insert_or_assign<enum GameInputGamepadButtons const &,unsigned short &>(
    v6,
    (__int64)&v19,
    (unsigned __int8 *)&v23,
    &v20);
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 32LL))(v8 + 8) )
    {
      ControllerProcessor::UpdateNavigationState((__int64)v22, 1, 0LL, 0LL);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 40LL))(*((_QWORD *)this + 24) + 8LL);
      v10 = *(struct tagRECT *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 48LL))(*((_QWORD *)this + 24) + 8LL);
      v11 = (struct tagPOINT *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 56LL))(*((_QWORD *)this + 24) + 8LL);
      v19 = v10;
      ControllerProcessor::NavigationResume(v22, v9, &v19, *v11);
    }
  }
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    (_QWORD *)this + 16,
    &v20,
    (const unsigned __int8 *)this + 224);
  if ( v20 != *((__int64 (__fastcall ****)(_QWORD))this + 17) )
  {
    v20 = (__int64 (__fastcall ***)(_QWORD))v20[3];
    v12 = v20;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v20);
    v13 = v12 + 1;
    if ( (unsigned __int8)v12[1][4](v12 + 1) )
    {
      v14 = (*v13)[5](v12 + 1);
      v15 = *(struct tagRECT *)(*v13)[6](v12 + 1);
      v16 = *(struct tagPOINT *)(*v13)[7](v12 + 1);
      v17 = (*v13)[8](v12 + 1);
      v19 = v15;
      ControllerProcessor::NavigationEnable(v22, v14, &v19, v16, v17, 1, v5);
    }
    else
    {
      ControllerProcessor::UpdateNavigationState((__int64)v22, 2, 0LL, 0LL);
    }
    if ( v12 )
      (*v12)[1](v12);
  }
  return 0LL;
}
