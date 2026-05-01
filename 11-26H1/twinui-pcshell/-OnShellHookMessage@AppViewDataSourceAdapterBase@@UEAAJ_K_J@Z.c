/*
 * XREFs of ?OnShellHookMessage@AppViewDataSourceAdapterBase@@UEAAJ_K_J@Z @ 0x18017A9B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AppViewDataSourceAdapterBase::OnShellHookMessage(RTL_SRWLOCK *this, __int64 a2, __int64 a3)
{
  RTL_SRWLOCK *v6; // rdi
  const char *v7; // r9
  __int64 *Ptr; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 *v11; // rcx
  _BYTE *v12; // rsi
  __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v18; // [rsp+78h] [rbp+10h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h]

  v6 = this + 13;
  AcquireSRWLockExclusive(this + 13);
  try
  {
    if ( a2 == 6 )
    {
      v18 = 0LL;
      Ptr = (__int64 *)this[3].Ptr;
      v9 = *Ptr;
      v18 = 0LL;
      (*(void (__fastcall **)(__int64 *, __int64, unsigned __int64 *))(v9 + 48))(Ptr, a3, &v18);
      v10 = v18;
      if ( v18 )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 8LL))(v18);
        v11 = (__int64 *)*((_QWORD *)this[11].Ptr + 1);
        v12 = this[11].Ptr;
        if ( !*((_BYTE *)v11 + 25) )
        {
          do
          {
            if ( v11[4] >= v10 )
              v12 = v11;
            v13 = v11 + 2;
            if ( v11[4] >= v10 )
              v13 = v11;
            v11 = (__int64 *)*v13;
          }
          while ( !*(_BYTE *)(*v13 + 25) );
        }
        if ( v12[25] || v10 < *((_QWORD *)v12 + 4) )
          v12 = this[11].Ptr;
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v10 + 16LL))(v10);
        if ( v12 == this[11].Ptr )
        {
          v14 = 0LL;
          v19 = 0LL;
          v15 = 0LL;
        }
        else
        {
          v14 = *((_QWORD *)v12 + 5);
          v15 = v14;
          v19 = v14;
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        }
        if ( v15 )
          (*((void (__fastcall **)(RTL_SRWLOCK *, unsigned __int64, __int64))this[-1].Ptr + 12))(this - 1, v18, v14);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        v10 = v18;
      }
      if ( v10 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5A,
                           (int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
                           v7);
  }
  return result;
}
