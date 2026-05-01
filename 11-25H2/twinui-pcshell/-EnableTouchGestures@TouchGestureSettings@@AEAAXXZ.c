/*
 * XREFs of ?EnableTouchGestures@TouchGestureSettings@@AEAAXXZ @ 0x1802162B4
 * Callers:
 *     wistd::__function::__func__lambda_9780493e976c2d083521351cc76993ec__void___cdecl(unsigned_long_const_&)_::operator() @ 0x180203250 (wistd--__function--__func__lambda_9780493e976c2d083521351cc76993ec__void___cdecl(unsigned_long_c.c)
 *     ?ResetEnabledTouchGestures@TouchGestureSettings@@UEAAXI@Z @ 0x180568990 (-ResetEnabledTouchGestures@TouchGestureSettings@@UEAAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TouchGestureSettings::EnableTouchGestures(TouchGestureSettings *this)
{
  int v1; // eax
  int v2; // eax
  __int64 v3; // rcx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 28);
  if ( v1 )
  {
    v2 = v1 - 1;
    *((_DWORD *)this + 28) = v2;
    v3 = *((_QWORD *)this + 12);
    if ( v3 )
    {
      if ( !v2 )
      {
        try
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0x98,
            (unsigned int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturesettings.cpp",
            v4);
        }
      }
    }
  }
}
