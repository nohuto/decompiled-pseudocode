/*
 * XREFs of ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x18015D598
 * Callers:
 *     ?StartOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@I_N_K2PEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x1801468F0 (-StartOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@I_N_K2PEAVBamoDragManagerClie.c)
 * Callees:
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18002D8AC (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?PointerTypeToInputType@@YA?AW4InputType@@K_N@Z @ 0x180047A50 (-PointerTypeToInputType@@YA-AW4InputType@@K_N@Z.c)
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x18006B4CC (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ?SendCurrentGestureEvent@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@@Z @ 0x18006B6CC (-SendCurrentGestureEvent@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z @ 0x1800759E0 (-IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ?AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z @ 0x180149700 (-AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z.c)
 *     ?InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z @ 0x180149BB8 (-InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z.c)
 *     ??0HandlerContext@ShellGesturesProcessor@@QEAA@IUtagPOINT@@_N@Z @ 0x18015C550 (--0HandlerContext@ShellGesturesProcessor@@QEAA@IUtagPOINT@@_N@Z.c)
 *     ?CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z @ 0x18015C8DC (-CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z.c)
 *     ?reset@?$_Optional_destruct_base@UHandlerContext@ShellGesturesProcessor@@$0A@@std@@QEAAXXZ @ 0x18015DD8C (-reset@-$_Optional_destruct_base@UHandlerContext@ShellGesturesProcessor@@$0A@@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ShellGesturesProcessor::StartOperation(
        KernelContextProvider **this,
        unsigned int a2,
        bool a3,
        __int64 a4,
        unsigned __int64 a5,
        struct DragManagerClientProxy *a6)
{
  struct DragManagerClientProxy *v10; // rbp
  _QWORD *v11; // r9
  __int64 v12; // r8
  struct tagPOINT v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rcx
  int ProcessId; // ebx
  unsigned int v17; // r8d
  KernelContextProvider *v18; // rcx
  KernelContextProvider *v19; // rax
  unsigned int v20; // r9d
  unsigned int v21; // r10d
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  struct InputSite *v25; // r9
  __int64 v26; // rbx
  ShellGesturesProcessor *v27; // rcx
  struct tagPOINT v29; // [rsp+30h] [rbp-58h] BYREF
  std::_Ref_count_base *v30; // [rsp+38h] [rbp-50h]
  __int128 v31; // [rsp+40h] [rbp-48h]
  unsigned int v32; // [rsp+98h] [rbp+10h] BYREF

  v32 = a2;
  v10 = a6;
  if ( !KernelContextProvider::IsDesktopAllowed(this[3], *((_QWORD *)a6 + 19)) )
    return 0;
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    this + 16,
    &v29,
    (const unsigned __int8 *)&v32);
  if ( *(KernelContextProvider **)&v29 == this[17] )
    return 0;
  PointerTypeToInputType(*(_DWORD *)(*(_QWORD *)&v29 + 32LL), 0);
  v13 = *(struct tagPOINT *)(v12 + 64);
  v14 = *(_QWORD *)(v12 + 24);
  if ( a3 )
  {
    v15 = *(_QWORD *)(v14 + 248);
    if ( !v15 )
      return 0;
    ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(v15 + 32)
                                                                                              + 16LL));
    if ( ProcessId != (unsigned int)Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)v10 + 4) + 16LL)) )
      return 0;
    v29 = 0LL;
    v17 = 0;
    v18 = this[17];
    v19 = *(KernelContextProvider **)v18;
    v20 = 0;
    v21 = 0;
    while ( v19 != v18 )
    {
      if ( *((_QWORD *)v19 + 3) == v14 )
      {
        v21 += *((_DWORD *)v19 + 16);
        v20 += *((_DWORD *)v19 + 17);
        ++v17;
      }
      v19 = *(KernelContextProvider **)v19;
    }
    v29.x = v21 / v17;
    v29.y = v20 / v17;
    v13 = v29;
  }
  else
  {
    v22 = (_QWORD *)*v11;
    v23 = 0LL;
    while ( v22 != v11 )
    {
      if ( v22[3] == v14 )
        ++v23;
      v22 = (_QWORD *)*v22;
    }
    if ( v23 != 1 )
      return 0;
  }
  if ( *(_BYTE *)(v14 + 456) )
    return 0;
  v24 = v14 + 424;
  std::_Optional_destruct_base<ShellGesturesProcessor::HandlerContext,0>::reset(v24);
  ShellGesturesProcessor::HandlerContext::HandlerContext((ShellGesturesProcessor::HandlerContext *)v24, a2, v13, a3);
  *(_BYTE *)(v24 + 32) = 1;
  ShellGesturesProcessor::CreateHandlerForHandlerContext((struct ShellGesturesProcessor::HandlerContext *)v24, v13, a5);
  std::weak_ptr<SystemCursorService2>::lock(v24 + 16, &v29);
  v26 = (__int64)v29;
  if ( v29 )
  {
    GestureHandler::AddGestureClient(*(GestureHandler **)&v29, a4, v10, v25);
    v31 = 0LL;
    GestureHandler::InitializeForGesture(v26, a2);
  }
  v27 = v30;
  if ( v30 )
    std::_Ref_count_base::_Decref(v30);
  ShellGesturesProcessor::SendCurrentGestureEvent(v27, (std::_Ref_count_base **)v24);
  *(_DWORD *)(v24 + 4) = 2;
  return 1;
}
