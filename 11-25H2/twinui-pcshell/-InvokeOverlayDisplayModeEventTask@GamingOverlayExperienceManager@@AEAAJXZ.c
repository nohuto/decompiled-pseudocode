/*
 * XREFs of ?InvokeOverlayDisplayModeEventTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180244B74
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8ea3499efa7f77fbd18d1bf14453fbd___::Run @ 0x18034E980 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d8ea3499efa7f77fbd18d1bf14453fbd___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18017F43C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18018A2D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?DetermineCurrentDisplayMode@GamingOverlayExperienceManager@@AEAA?AW4GamingOverlayDisplayMode@GamingOverlay@Internal@Windows@@XZ @ 0x18022A770 (-DetermineCurrentDisplayMode@GamingOverlayExperienceManager@@AEAA-AW4GamingOverlayDisplayMode@Ga.c)
 *     ??$DoInvoke@V_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@@?$EventSource@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@@Z @ 0x180243748 (--$DoInvoke@V_lambda_813c1a060ca2f05baf3690d2c7f23b38_@@@-$EventSource@U-$IEventHandler@_N@Found.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::InvokeOverlayDisplayModeEventTask(
        GamingOverlayExperienceManager *this)
{
  int v2; // ebx
  int v3; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  int v7[2]; // [rsp+30h] [rbp-28h] BYREF
  bool v8; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)v7 = 0LL;
  wil::EnterCriticalSection((struct _RTL_CRITICAL_SECTION **)v7, (struct _RTL_CRITICAL_SECTION *)((char *)this + 528));
  v2 = GamingOverlayExperienceManager::DetermineCurrentDisplayMode((__int64)this);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v7);
  *(_QWORD *)&v6 = v7;
  *(_QWORD *)v7 = ((unsigned __int64)this + 136) & -(__int64)(this != 0LL);
  *((_QWORD *)&v6 + 1) = &v8;
  v8 = v2 == 2;
  v3 = Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_813c1a060ca2f05baf3690d2c7f23b38_>(
         (__int64)this + 1488,
         &v6);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1095,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
