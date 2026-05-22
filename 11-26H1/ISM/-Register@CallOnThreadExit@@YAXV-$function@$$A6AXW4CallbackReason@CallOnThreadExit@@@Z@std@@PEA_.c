/*
 * XREFs of ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@PEA_K@Z @ 0x180133D94
 * Callers:
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@@Z @ 0x180133D34 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@@Z.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x180041338 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WAIT@@@Z @ 0x18007FE44 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WAIT@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180081358 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A1010 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace@$$V@?$list@UCallbackData@CallOnThreadExit@@V?$allocator@UCallbackData@CallOnThreadExit@@@std@@@std@@QEAAPEAU?$_List_node@UCallbackData@CallOnThreadExit@@PEAX@1@QEAU21@@Z @ 0x180133AE0 (--$_Emplace@$$V@-$list@UCallbackData@CallOnThreadExit@@V-$allocator@UCallbackData@CallOnThreadEx.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CallOnThreadExit::Register(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  HANDLE CurrentProcess; // rbx
  HANDLE CurrentThread; // rax
  const char *v12; // r9
  struct _TP_WAIT *ThreadpoolWait; // rax
  const char *v14; // r9
  struct _TP_WAIT *v15; // rcx
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a2 = 0LL;
  std::_Mutex_base::lock((std::_Mutex_base *)&unk_1802531B0);
  std::list<CallOnThreadExit::CallbackData>::_Emplace<>(v4, qword_180253F50);
  v6 = *(_QWORD *)(qword_180253F50 + 8);
  v7 = v6 + 16;
  if ( v6 + 16 != a1 )
  {
    std::_Func_class<void,>::~_Func_class<void,>(v6 + 16, v5);
    v8 = *(_QWORD *)(a1 + 56);
    if ( v8 )
    {
      if ( v8 == a1 )
      {
        *(_QWORD *)(v6 + 72) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, v6 + 16);
        std::_Func_class<void,>::~_Func_class<void,>(a1, v9);
      }
      else
      {
        *(_QWORD *)(v6 + 72) = v8;
        *(_QWORD *)(a1 + 56) = 0LL;
      }
    }
  }
  *(_QWORD *)(v6 + 80) = ++qword_180254AC0;
  *(_DWORD *)(v6 + 88) = GetCurrentThreadId();
  CurrentProcess = GetCurrentProcess();
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)(v7 + 80),
    0LL);
  CurrentThread = GetCurrentThread();
  if ( !DuplicateHandle(CurrentProcess, CurrentThread, CurrentProcess, (LPHANDLE)(v7 + 80), 0, 0, 2u) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x47,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\callonthreadexit\\callonthreadexit.cpp",
      v12);
  ThreadpoolWait = CreateThreadpoolWait((PTP_WAIT_CALLBACK)CallOnThreadExit::CallOnThreadExitStatic, (PVOID)v7, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_WAIT *,void (*)(_TP_WAIT *),&public: static void wil::details::DestroyThreadPoolWait<0>::Destroy(_TP_WAIT *),wistd::integral_constant<unsigned __int64,0>,_TP_WAIT *,_TP_WAIT *,0,std::nullptr_t>>::reset(
    (struct _TP_WAIT **)(v7 + 88),
    ThreadpoolWait);
  v15 = *(struct _TP_WAIT **)(v7 + 88);
  if ( !v15 )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x4E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\callonthreadexit\\callonthreadexit.cpp",
      v14);
  SetThreadpoolWait(v15, *(HANDLE *)(v7 + 80), 0LL);
  *a2 = *(_QWORD *)(v7 + 64);
  _Mtx_unlock((_Mtx_t)&unk_1802531B0);
  return std::_Func_class<void,>::~_Func_class<void,>(a1, v16);
}
