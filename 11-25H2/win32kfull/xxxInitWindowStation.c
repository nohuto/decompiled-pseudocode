/*
 * XREFs of xxxInitWindowStation @ 0x1401484D8
 * Callers:
 *     xxxCreateWindowStation @ 0x14028CAA0 (xxxCreateWindowStation.c)
 * Callees:
 *     GreTextInitialized @ 0x1400C006C (GreTextInitialized.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1401485F4 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     SetIconMetrics @ 0x140148734 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x140148B08 (SetMinMetrics.c)
 *     SetKeyboardRate @ 0x140148D58 (SetKeyboardRate.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSetWindowNCMetrics @ 0x140149304 (xxxSetWindowNCMetrics.c)
 *     FinalUserInit @ 0x14021974C (FinalUserInit.c)
 */

__int64 xxxInitWindowStation()
{
  struct _UNICODE_STRING *v0; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-10h]

  v11 = 0LL;
  v13 = 0LL;
  v12 = -1LL;
  v0 = (struct _UNICODE_STRING *)CreateProfileUserName(&v11);
  FastGetProfileIntFromID(v0, 2LL, 606LL);
  UserSessionState = W32GetUserSessionState(v2, v1);
  SetKeyboardRate(*(unsigned int *)(UserSessionState + 12868));
  NlsKbdInitializePerSystem();
  xxxLoadSomeStrings();
  if ( !(unsigned int)GreTextInitialized(v5, v4, v6) || (v7 = xxxSetWindowNCMetrics(v0, 0LL)) != 0 )
  {
    SetMinMetrics(v0);
    v7 = SetIconMetrics(v0);
    if ( v7 )
    {
      v7 = FinalUserInit();
      if ( v7 )
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v9) + 19872) + 6984LL) = 1;
    }
  }
  if ( v12 != -1 )
    PopAndFreeAlwaysW32ThreadLock(&v11);
  return v7;
}
