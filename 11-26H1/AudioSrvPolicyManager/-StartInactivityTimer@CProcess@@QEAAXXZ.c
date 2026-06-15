/*
 * XREFs of ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x18003A300
 * Callers:
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x1800133E0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180008500 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcess::StartInactivityTimer(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rax
  volatile int *v4; // rdx
  signed int LastError; // eax
  bool v6; // sf
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  v2 = this + 8;
  EnterCriticalSection(this + 8);
  v8 = v2;
  if ( !this[9].DebugInfo )
  {
    v3 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, struct _RTL_CRITICAL_SECTION *))(*(_QWORD *)ThreadPool + 8LL))(
           ThreadPool,
           CProcess::InactivityTimerCallback,
           this);
    this[9].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)v3;
    if ( v3 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference(
        (Microsoft::WRL::Details *)((char *)&this->OwningThread + 4),
        v4);
      v7 = -200000000LL;
      (*(void (__fastcall **)(struct CAudioThreadPool *, PRTL_CRITICAL_SECTION_DEBUG, __int64 *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        this[9].DebugInfo,
        &v7,
        0LL,
        100);
    }
    else
    {
      LastError = GetLastError();
      v6 = LastError < 0;
      if ( LastError > 0 )
      {
        LastError = (unsigned __int16)LastError | 0x80070000;
        v6 = LastError < 0;
      }
      if ( v6 )
        AudPolicyLogError("CProcess::StartInactivityTimer", 3284, LastError);
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
}
