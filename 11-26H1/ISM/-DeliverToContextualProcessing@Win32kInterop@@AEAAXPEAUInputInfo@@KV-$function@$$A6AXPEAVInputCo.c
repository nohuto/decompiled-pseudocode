/*
 * XREFs of ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x18000F4CC
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180010D88 (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x1800F28F8 (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 * Callees:
 *     ?ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x18000F758 (-ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18000F7E0 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUTargetingInfo@Win32kInterop@@V-$_Uhash_compare.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800D8D08 (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Win32kInterop::DeliverToContextualProcessing(
        __int64 a1,
        const struct InputInfo *a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 *v8; // rdx
  __int64 v9; // rbx
  __int64 i; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 result; // rax
  __int64 v17; // rdx
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  const char *v22; // r9
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v30; // [rsp+68h] [rbp+38h] BYREF
  int v31; // [rsp+70h] [rbp+40h] BYREF
  __int64 v32; // [rsp+78h] [rbp+48h]

  v32 = a4;
  v31 = a3;
  if ( (*(_DWORD *)a2 & 0x100003B) == 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x667,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)a4);
  InputTraceLogging::ContextualProcessing::ReceiveInput(a2);
  v8 = &v30;
  if ( *(_DWORD *)a2 == 2 )
    goto LABEL_19;
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
    a1 + 288,
    &v30,
    (char *)a2 + 4);
  v9 = v30;
  if ( v30 != *(_QWORD *)(a1 + 296)
    && *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
                    v30 + 24,
                    &v30,
                    &v31) != *(_QWORD *)(v9 + 32) )
  {
    for ( i = v9 + 24; ; i = a1 + 216 )
    {
      v11 = std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::_Try_emplace<unsigned long const &,>(
              i,
              v28,
              &v31);
      v12 = *(_QWORD *)v11;
      v30 = *(_QWORD *)(*(_QWORD *)v11 + 24LL);
      v13 = *(_QWORD *)(a4 + 56);
      if ( v13 )
        break;
      std::_Xbad_function_call();
      __debugbreak();
LABEL_19:
      if ( *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
                        a1 + 216,
                        v8,
                        &v31) == *(_QWORD *)(a1 + 224) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x683,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
          v22);
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 16LL))(v13, &v30);
    v14 = *(_QWORD *)(v12 + 32);
    v15 = a5;
    if ( v14 && *(_BYTE *)(*(_QWORD *)(v12 + 24) + 184LL) )
    {
      result = (*(__int64 (__fastcall **)(__int64, const struct InputInfo *))(*(_QWORD *)v14 + 24LL))(v14, a2);
      if ( (_DWORD)result == -2147417853 )
        goto LABEL_11;
      v18 = retaddr;
      if ( (int)result >= 0 )
        goto LABEL_11;
LABEL_28:
      wil::details::in1diag3::FailFast_Hr(
        v18,
        (void *)0x6A3,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)result,
        v28[0]);
    }
    v30 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 16LL);
    v21 = *(_QWORD *)(a5 + 56);
    if ( v21 )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 16LL))(v21, &v30);
LABEL_11:
      v19 = *(_QWORD *)(a4 + 56);
      if ( v19 )
      {
        LOBYTE(v17) = v19 != a4;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL))(v19, v17);
        *(_QWORD *)(a4 + 56) = 0LL;
      }
      v20 = *(_QWORD *)(v15 + 56);
      if ( v20 )
      {
        LOBYTE(v17) = v20 != v15;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 32LL))(v20, v17);
        *(_QWORD *)(v15 + 56) = 0LL;
      }
      return result;
    }
    std::_Xbad_function_call();
    __debugbreak();
LABEL_27:
    std::_Xbad_function_call();
    __debugbreak();
    goto LABEL_28;
  }
  v30 = 0LL;
  v23 = a5;
  v24 = *(_QWORD *)(a5 + 56);
  if ( !v24 )
    goto LABEL_27;
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 16LL))(v24, &v30);
  v26 = *(_QWORD *)(a4 + 56);
  if ( v26 )
  {
    LOBYTE(v25) = v26 != a4;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 32LL))(v26, v25);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  v27 = *(_QWORD *)(v23 + 56);
  if ( v27 )
  {
    LOBYTE(v25) = v27 != v23;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 32LL))(v27, v25);
    *(_QWORD *)(v23 + 56) = 0LL;
  }
  return result;
}
