/*
 * XREFs of ?QueryService@immersive_shell_component@winrt@@EEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800DB990
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA?AU?$com_ptr@UIServiceProvider@@@1@XZ @ 0x1802A8468 (--$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA-AU-$com_ptr@UIServiceProvi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::immersive_shell_component::QueryService(
        RTL_SRWLOCK *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  char *v8; // r12
  char v9; // al
  const char *v10; // r9
  __int64 (__fastcall ***v11)(_QWORD, const struct _GUID *, void **); // rbx
  RTL_SRWLOCK *v12; // rdi
  _QWORD *i; // rax
  char v14; // si
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // edi
  __int64 result; // rax
  int v19; // edi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, const struct _GUID *, void **); // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = (char *)&this[-1];
  v9 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *))this[-1].Ptr + 8))(this - 1);
  try
  {
    if ( v9 )
      return 0LL;
    LOBYTE(v21) = 0;
    v11 = 0LL;
    v22 = 0LL;
    v12 = this + 9;
    AcquireSRWLockShared(this + 9);
    for ( i = this[5].Ptr; ; i += 4 )
    {
      if ( i == this[6].Ptr )
      {
        v14 = v21;
        goto LABEL_12;
      }
      v15 = *(_QWORD *)&a2->Data1 - *i;
      if ( *(_QWORD *)&a2->Data1 == *i )
        v15 = *(_QWORD *)a2->Data4 - i[1];
      if ( !v15 )
        break;
    }
    v14 = 1;
    v16 = i[2];
    if ( v16 )
    {
      v11 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))i[2];
      v22 = v11;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    }
LABEL_12:
    if ( v12 )
      ReleaseSRWLockShared(v12);
    if ( v14 )
    {
      if ( v11 )
      {
        v17 = (**v11)(v11, a3, a4);
        if ( v17 < 0 )
        {
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v22);
          return (unsigned int)v17;
        }
      }
      else
      {
        result = (**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v8)(v8, a3, a4);
        if ( (int)result < 0 )
          return result;
      }
      goto LABEL_27;
    }
    winrt::immersive_shell_component::get_site<IServiceProvider>(v8, &v21);
    if ( v21 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v21 + 24LL))(
              v21,
              a2,
              a3,
              a4);
      if ( v19 >= 0 )
      {
        if ( v21 )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v21);
LABEL_27:
        if ( v11 )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v22);
        return 0LL;
      }
      if ( v21 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v21);
      if ( v11 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v22);
      result = (unsigned int)v19;
    }
    else
    {
      if ( v11 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v22);
      result = 2147500033LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x10E,
                           (int)"shellcommon\\internal\\shell\\inc\\winrt/immersive_shell_component.h",
                           v10);
  }
  return result;
}
