/*
 * XREFs of ?AsyncProcessTerminatedNotifications@CProcess@@IEAAXXZ @ 0x180022FA0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_::_Do_call @ 0x18003AB80 (std--_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_--_Do_call.c)
 * Callees:
 *     ??$ForEachSession@UIAudioSessionInfo@@@CProcess@@IEAAJ$$QEAV?$function@$$A6AXPEAUIAudioSessionInfo@@PEA_N@Z@std@@@Z @ 0x180023080 (--$ForEachSession@UIAudioSessionInfo@@@CProcess@@IEAAJ$$QEAV-$function@$$A6AXPEAUIAudioSessionIn.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CProcess::AsyncProcessTerminatedNotifications(CProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // eax
  _QWORD *v4; // rdx
  _QWORD v5[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v6; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v5[0] = off_180052FA0;
  v5[1] = this;
  v6 = v5;
  v3 = CProcess::ForEachSession<IAudioSessionInfo>(this, v5);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE54,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v3,
      (int)v2);
  if ( v6 )
  {
    v4 = v5;
    LOBYTE(v4) = v6 != v5;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v6 + 32LL))(v6, v4);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
