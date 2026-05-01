/*
 * XREFs of ?ShutdownServices@immersive_shell_component@winrt@@EEAAJPEAUIProfferService@@@Z @ 0x180152410
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@YAXPEAUservice_description@immersive_shell_component@winrt@@QEAU123@AEAV?$allocator@Uservice_description@immersive_shell_component@winrt@@@0@@Z @ 0x1802C7CBC (--$_Destroy_range@V-$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::immersive_shell_component::ShutdownServices(RTL_SRWLOCK *this, struct IProfferService *a2)
{
  _BYTE *v4; // rdi
  RTL_SRWLOCK *v5; // rbx
  void **p_Ptr; // rax
  __int64 *v7; // rsi
  __int64 *Ptr; // r15
  __int64 *v9; // rbx
  __int64 *v10; // rax
  __int64 *v11; // rcx
  int v12; // eax
  __int64 *v13; // r14
  const char *v14; // r9
  __int64 result; // rax
  char v16; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+28h] [rbp-40h] BYREF
  _BYTE *v18; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v17 = 0LL;
  v4 = 0LL;
  v18 = 0LL;
  v5 = this + 8;
  AcquireSRWLockExclusive(this + 8);
  try
  {
    p_Ptr = &this[4].Ptr;
    if ( &v17 == (__int128 *)&this[4] )
    {
      Ptr = (__int64 *)*((_QWORD *)&v17 + 1);
      v7 = (__int64 *)v17;
    }
    else
    {
      v7 = (__int64 *)*p_Ptr;
      *(_QWORD *)&v17 = *p_Ptr;
      Ptr = (__int64 *)this[5].Ptr;
      *((_QWORD *)&v17 + 1) = Ptr;
      v4 = this[6].Ptr;
      v18 = v4;
      *p_Ptr = 0LL;
      this[5].Ptr = 0LL;
      this[6].Ptr = 0LL;
    }
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v9 = Ptr;
    v10 = Ptr;
    v11 = Ptr;
    while ( v10 != v7 )
    {
      if ( *((_DWORD *)v11 - 2) )
      {
        v12 = ((__int64 (__fastcall *)(struct IProfferService *))a2->lpVtbl->RevokeService)(a2);
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x188,
            (int)"shellcommon\\internal\\shell\\inc\\winrt/immersive_shell_component.h",
            (const char *)(unsigned int)v12);
      }
      v13 = v9 - 2;
      if ( v9 - 2 != (__int64 *)&v16 )
      {
        if ( *v13 )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v9 - 2);
        *v13 = 0LL;
      }
      v9 -= 4;
      v10 = v9;
      v11 = v9;
    }
    (*((void (__fastcall **)(RTL_SRWLOCK *, struct IProfferService *))this[-2].Ptr + 10))(this - 2, a2);
    if ( v7 )
    {
      std::_Destroy_range<std::allocator<winrt::immersive_shell_component::service_description>>(v7, Ptr);
      std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)((v4 - (_BYTE *)v7) & 0xFFFFFFFFFFFFFFE0uLL));
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x193,
                           (unsigned int)"shellcommon\\internal\\shell\\inc\\winrt/immersive_shell_component.h",
                           v14);
  }
  return result;
}
