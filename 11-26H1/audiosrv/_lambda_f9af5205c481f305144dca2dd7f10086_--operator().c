/*
 * XREFs of _lambda_f9af5205c481f305144dca2dd7f10086_::operator() @ 0x1800E0788
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f9af5205c481f305144dca2dd7f10086__void_::_Do_call @ 0x1800E7BD0 (std--_Func_impl_no_alloc__lambda_f9af5205c481f305144dca2dd7f10086__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x18001B6E0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180040624 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_f9af5205c481f305144dca2dd7f10086_::operator()(_QWORD *a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // eax
  _QWORD v7[9]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+80h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(*a1 + 112LL);
  EnterCriticalSection(v2);
  v9 = v2;
  SerialWorkQueue = GetSerialWorkQueue();
  v4 = *a1;
  v7[0] = off_180176038;
  v7[1] = v4;
  v7[7] = v7;
  v6 = CSerialWorkQueue::QueueRecurringItem((__int64)SerialWorkQueue, 0x1388u, v5, v7, v4 + 152);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      684LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v6);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v9);
}
