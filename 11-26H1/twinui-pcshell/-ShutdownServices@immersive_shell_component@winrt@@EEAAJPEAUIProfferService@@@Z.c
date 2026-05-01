/*
 * XREFs of ?ShutdownServices@immersive_shell_component@winrt@@EEAAJPEAUIProfferService@@@Z @ 0x1800DB830
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXXZ @ 0x1800DBB68 (-_Tidy@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_desc.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::immersive_shell_component::ShutdownServices(RTL_SRWLOCK *this, struct IProfferService *a2)
{
  RTL_SRWLOCK *v4; // rdi
  RTL_SRWLOCK *v5; // rsi
  _DWORD *v6; // rbx
  _DWORD *Ptr; // r14
  char *v8; // rdi
  int v9; // eax
  __int64 *v10; // rbx
  const char *v11; // r9
  __int64 result; // rax
  char v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+28h] [rbp-30h] BYREF
  PVOID v15; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v14 = 0LL;
  v15 = 0LL;
  v4 = this + 8;
  AcquireSRWLockExclusive(this + 8);
  try
  {
    v5 = this + 4;
    v6 = 0LL;
    if ( &v14 == (__int128 *)&this[4] )
    {
      Ptr = (_DWORD *)v14;
    }
    else
    {
      std::vector<winrt::immersive_shell_component::service_description>::_Tidy(&v14);
      Ptr = v5->Ptr;
      *(RTL_SRWLOCK *)&v14 = (RTL_SRWLOCK)v5->Ptr;
      v6 = this[5].Ptr;
      *((_QWORD *)&v14 + 1) = v6;
      v15 = this[6].Ptr;
      v5->Ptr = 0LL;
      this[5].Ptr = 0LL;
      this[6].Ptr = 0LL;
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    while ( v6 != Ptr )
    {
      v8 = (char *)(v6 - 8);
      if ( *(v6 - 2) )
      {
        v9 = ((__int64 (__fastcall *)(struct IProfferService *))a2->lpVtbl->RevokeService)(a2);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x188,
            (int)"shellcommon\\internal\\shell\\inc\\winrt/immersive_shell_component.h",
            (const char *)(unsigned int)v9);
      }
      v10 = (__int64 *)(v6 - 4);
      if ( v10 != (__int64 *)&v13 )
      {
        if ( *v10 )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v10);
        *v10 = 0LL;
      }
      v6 = v8;
    }
    (*((void (__fastcall **)(RTL_SRWLOCK *, struct IProfferService *))this[-2].Ptr + 10))(this - 2, a2);
    std::vector<winrt::immersive_shell_component::service_description>::_Tidy(&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x193,
                           (int)"shellcommon\\internal\\shell\\inc\\winrt/immersive_shell_component.h",
                           v11);
  }
  return result;
}
