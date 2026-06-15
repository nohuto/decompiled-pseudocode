/*
 * XREFs of s_adGetDeviceGraphWnfStateName @ 0x1800B9630
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x18001EB84 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18001EC10 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180023C5C (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x180025270 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180063624 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180067534 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?WpRpcBindingFree@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18007F9E0 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-WpRpcBindingFree@details@wil@@YAX0@ZU-$i.c)
 *     _lambda_1eb851544ffb42b511f3612ab49dd320_::operator() @ 0x1800B8A6C (_lambda_1eb851544ffb42b511f3612ab49dd320_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_adGetDeviceGraphWnfStateName(__int64 a1, __int64 a2, _QWORD *a3)
{
  LPCRITICAL_SECTION v4; // rbx
  int DebugInfo; // ebx
  int ADGProcessBindingHandle; // eax
  int v7; // edi
  LPCRITICAL_SECTION v8; // rbx
  bool v9; // zf
  int v10; // eax
  LPCRITICAL_SECTION v11; // rbx
  RPC_BINDING_HANDLE v13; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v14[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v16; // [rsp+68h] [rbp+28h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+78h] [rbp+38h] BYREF

  v16 = a2;
  v13 = 0LL;
  v4 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  Binding = v4;
  if ( ++LODWORD(v4[1].DebugInfo) == 1 )
  {
    CAudioDGProcess::CancelADGTerminationTimer(v4);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v4);
  }
  DebugInfo = (int)v4[1].DebugInfo;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&Binding);
  if ( DebugInfo >= 0 )
  {
    if ( v13 )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)v14);
      Binding = v13;
      RpcBindingFree(&Binding);
      wil::last_error_context::~last_error_context((wil::last_error_context *)v14);
    }
    ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(&v13);
    v7 = ADGProcessBindingHandle;
    if ( ADGProcessBindingHandle >= 0 )
    {
      v14[0] = &v13;
      v14[1] = &v16;
      v10 = lambda_1eb851544ffb42b511f3612ab49dd320_::operator()(v14);
      v7 = v10;
      if ( v10 >= 0 )
      {
        *a3 = *(_QWORD *)&g_ADGProcess[2].LockCount;
        DebugInfo = 0;
        goto LABEL_16;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x340,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
        (const char *)(unsigned int)v10);
      v11 = g_ADGProcess;
      EnterCriticalSection(g_ADGProcess);
      v14[0] = &v11->DebugInfo;
      v9 = LODWORD(v11[1].DebugInfo)-- == 1;
      if ( v9 )
        CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v11);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x337,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
        (const char *)(unsigned int)ADGProcessBindingHandle);
      v8 = g_ADGProcess;
      EnterCriticalSection(g_ADGProcess);
      v14[0] = &v8->DebugInfo;
      v9 = LODWORD(v8[1].DebugInfo)-- == 1;
      if ( v9 )
        CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v8);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v14);
    DebugInfo = v7;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x334,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)DebugInfo);
  }
LABEL_16:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v13);
  return (unsigned int)DebugInfo;
}
