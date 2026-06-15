/*
 * XREFs of ?RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPreStartContext@@@Z @ 0x180046DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180021430 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$MakeAndInitialize@VCAastPreStartContext@@UIAudioStreamPreStartContext@@AEAPEAUIAudioStreamInfo@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioStreamPreStartContext@@AEAPEAUIAudioStreamInfo@@@Z @ 0x1800428B8 (--$MakeAndInitialize@VCAastPreStartContext@@UIAudioStreamPreStartContext@@AEAPEAUIAudioStreamInf.c)
 */

__int64 __fastcall CWindowsPolicyManager::RegisterStreamPreStart(
        CWindowsPolicyManager *this,
        struct IAudioStreamInfo *a2,
        struct IAudioStreamPreStartContext **a3)
{
  int started; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IAudioStreamInfo *v9; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  CWindowsPolicyManager::Lock((__int64)this, &v10);
  v9 = a2;
  started = Microsoft::WRL::Details::MakeAndInitialize<CAastPreStartContext,IAudioStreamPreStartContext,IAudioStreamInfo * &>(
              a3,
              &v9);
  v6 = started;
  if ( started >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CB,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)started);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
  return v6;
}
