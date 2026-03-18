/*
 * XREFs of NtUserConsoleControl @ 0x1401B6150
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x14009D6E8 (UserSetLastStatus.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     xxxConsoleControl @ 0x1401B62A0 (xxxConsoleControl.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtUserConsoleControl(unsigned int a1, volatile void *a2, unsigned int a3)
{
  SIZE_T v3; // rbx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-58h]
  __int128 Src; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp-18h]

  v3 = a3;
  Src = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( a1 > 6 )
  {
    v6 = -1073741823;
    UserSetLastStatus(-1073741811, 1);
  }
  else if ( (unsigned int)v3 > 0x18 )
  {
    v6 = -1073741811;
  }
  else if ( a2 && (_DWORD)v3 )
  {
    ProbeForRead(a2, (unsigned int)v3, 2u);
    memmove(&Src, (const void *)a2, (unsigned int)v3);
    v8 = xxxConsoleControl(a1, &Src, (unsigned int)v3);
    ProbeForWrite(a2, v3, 2u);
    memmove((void *)a2, &Src, v3);
    v6 = v8;
  }
  else
  {
    v6 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
