/*
 * XREFs of ?s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x180025038
 * Callers:
 *     _lambda_262b589463239528202aaef0d25d8228_::operator() @ 0x180110E50 (_lambda_262b589463239528202aaef0d25d8228_--operator().c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x18001EB84 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18001EC10 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180023C5C (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x180025270 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     _lambda_2810286c7b554c127490620b0e2ca0e2_::operator() @ 0x180025330 (_lambda_2810286c7b554c127490620b0e2ca0e2_--operator().c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180063624 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180067534 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?WpRpcBindingFree@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18007F9E0 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-WpRpcBindingFree@details@wil@@YAX0@ZU-$i.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall s_adPublishApoTelemetry(const unsigned __int16 *a1, struct _GUID *a2)
{
  LPCRITICAL_SECTION v3; // rbx
  unsigned int DebugInfo; // edi
  RPC_BINDING_HANDLE v6; // rbx
  int ADGProcessBindingHandle; // eax
  LPCRITICAL_SECTION v8; // rbx
  bool v9; // zf
  int v10; // eax
  LPCRITICAL_SECTION v11; // rbx
  LPCRITICAL_SECTION v12; // rbx
  RPC_BINDING_HANDLE v13; // [rsp+20h] [rbp-30h] BYREF
  LPCRITICAL_SECTION v14; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v15[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  const unsigned __int16 *v17; // [rsp+70h] [rbp+20h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+80h] [rbp+30h] BYREF
  RPC_BINDING_HANDLE v19; // [rsp+88h] [rbp+38h] BYREF

  v17 = a1;
  v19 = 0LL;
  v3 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  Binding = v3;
  if ( ++LODWORD(v3[1].DebugInfo) == 1 )
  {
    CAudioDGProcess::CancelADGTerminationTimer(v3);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v3);
  }
  DebugInfo = (unsigned int)v3[1].DebugInfo;
  LeaveCriticalSection(v3);
  if ( (DebugInfo & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x359,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)DebugInfo);
    if ( !v19 )
      return DebugInfo;
    Binding = v19;
LABEL_6:
    RpcBindingFree(&Binding);
    return DebugInfo;
  }
  BYTE1(Binding) = 1;
  v6 = v19;
  if ( v19 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v14);
    v13 = v6;
    RpcBindingFree(&v13);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v14);
  }
  v19 = 0LL;
  ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(&v19);
  DebugInfo = ADGProcessBindingHandle;
  if ( ADGProcessBindingHandle < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)ADGProcessBindingHandle);
    v8 = g_ADGProcess;
    EnterCriticalSection(g_ADGProcess);
    v14 = v8;
    v9 = LODWORD(v8[1].DebugInfo)-- == 1;
    if ( v9 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v8);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v19);
    return DebugInfo;
  }
  v15[0] = &v19;
  v15[1] = &v17;
  v15[2] = a2;
  v10 = lambda_2810286c7b554c127490620b0e2ca0e2_::operator()(v15);
  DebugInfo = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x365,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)v10);
    v11 = g_ADGProcess;
    EnterCriticalSection(g_ADGProcess);
    v9 = LODWORD(v11[1].DebugInfo)-- == 1;
    if ( v9 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v11);
    LeaveCriticalSection(v11);
    if ( !v19 )
      return DebugInfo;
    Binding = v19;
    goto LABEL_6;
  }
  v12 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  v9 = LODWORD(v12[1].DebugInfo)-- == 1;
  if ( v9 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v12);
  LeaveCriticalSection(v12);
  if ( v19 )
  {
    Binding = v19;
    RpcBindingFree(&Binding);
  }
  return 0LL;
}
