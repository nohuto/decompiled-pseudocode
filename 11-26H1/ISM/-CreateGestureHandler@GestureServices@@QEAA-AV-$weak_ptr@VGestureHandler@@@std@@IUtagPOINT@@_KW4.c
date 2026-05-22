/*
 * XREFs of ?CreateGestureHandler@GestureServices@@QEAA?AV?$weak_ptr@VGestureHandler@@@std@@IUtagPOINT@@_KW4GestureProcessorType@@@Z @ 0x1801450C0
 * Callers:
 *     ?CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z @ 0x18015C8DC (-CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetProcessorTypeString@GestureServices@@QEBAPEBGW4GestureProcessorType@@@Z @ 0x18007CED0 (-GetProcessorTypeString@GestureServices@@QEBAPEBGW4GestureProcessorType@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::make_shared_GestureHandler_enum_GestureProcessorType_&_unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd__&_ @ 0x180092DD4 (std--make_shared_GestureHandler_enum_GestureProcessorType_-_unsigned_short_const___ISystemInputR.c)
 *     ??$?0VSystemCursorService2@@$0A@@?$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV?$shared_ptr@VSystemCursorService2@@@1@@Z @ 0x1800F7928 (--$-0VSystemCursorService2@@$0A@@-$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??$emplace@AEAIV?$shared_ptr@VGestureHandler@@@std@@@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAV?$shared_ptr@VGestureHandler@@@1@@Z @ 0x180144738 (--$emplace@AEAIV-$shared_ptr@VGestureHandler@@@std@@@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VGes.c)
 *     _lambda_80df7c2b76f58973f9ddec3659020abd_::_lambda_80df7c2b76f58973f9ddec3659020abd_ @ 0x1801448B8 (_lambda_80df7c2b76f58973f9ddec3659020abd_--_lambda_80df7c2b76f58973f9ddec3659020abd_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *GestureServices::CreateGestureHandler(_QWORD *a1, _QWORD *a2, int a3, ...)
{
  __int64 v5; // rdx
  int v6; // r10d
  _QWORD *shared_GestureHandler_enum_GestureProcessorType___unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd; // rax
  int v9; // [rsp+20h] [rbp-60h]
  int v10; // [rsp+30h] [rbp-50h] BYREF
  const wchar_t *ProcessorTypeString; // [rsp+40h] [rbp-40h] BYREF
  char v12; // [rsp+48h] [rbp-38h]
  __int64 v13; // [rsp+50h] [rbp-30h] BYREF
  std::_Ref_count_base *v14; // [rsp+58h] [rbp-28h]
  _QWORD v15[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v17; // [rsp+A0h] [rbp+20h] BYREF
  int v18; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+38h] BYREF
  va_list va; // [rsp+B8h] [rbp+38h]
  va_list va1; // [rsp+C0h] [rbp+40h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, _QWORD);
  v18 = a3;
  v10 = 2;
  lambda_80df7c2b76f58973f9ddec3659020abd_::_lambda_80df7c2b76f58973f9ddec3659020abd_(
    v15,
    (__int64)a1,
    (__int64 *)va,
    (__int64 *)va1);
  v17 = *(_QWORD *)(v5 + 88);
  ProcessorTypeString = GestureServices::GetProcessorTypeString(a1, v6);
  shared_GestureHandler_enum_GestureProcessorType___unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd = std::make_shared_GestureHandler_enum_GestureProcessorType___unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd____(&v13, (int)&v10, (int)&ProcessorTypeString, (int)&v17, (__int64)v15);
  std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<GestureHandler>>>,0>>::emplace<unsigned int &,std::shared_ptr<GestureHandler>>(
    a1 + 25,
    (__int64)&ProcessorTypeString,
    (unsigned __int8 *)&v18,
    shared_GestureHandler_enum_GestureProcessorType___unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  if ( !v12 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x74,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gestureservices.cpp",
      (const char *)0x80070057LL,
      v9);
  std::weak_ptr<SystemCursorService2>::weak_ptr<SystemCursorService2>(a2, (_QWORD *)ProcessorTypeString + 3);
  return a2;
}
