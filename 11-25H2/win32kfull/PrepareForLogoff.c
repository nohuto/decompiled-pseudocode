/*
 * XREFs of PrepareForLogoff @ 0x14021612C
 * Callers:
 *     NtUserPrepareForLogoff @ 0x1402160F0 (NtUserPrepareForLogoff.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x140148EB4 (PopAndFreeAlwaysW32ThreadLock.c)
 *     RegisterPerUserKeyboardIndicators @ 0x1402203A4 (RegisterPerUserKeyboardIndicators.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x140275B0C (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1402832A8 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall PrepareForLogoff(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  HANDLE v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+48h] [rbp-10h]

  v2 = PtiCurrent(a1, a2);
  if ( !(unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v2 + 132, 0, 0) & 0x20000000) == 0 )
      goto LABEL_3;
    v4 = *(_QWORD *)(*((_QWORD *)v2 + 58) + 752LL);
    if ( (*(_DWORD *)(v4 + 24) & 0x80u) == 0 )
      goto LABEL_3;
    return 0LL;
  }
  if ( tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v2 + 58), 0x80u) )
    return 0LL;
LABEL_3:
  v5 = *(HANDLE *)(W32GetUserSessionState(v4, v3) + 63544);
  if ( PsGetThreadProcessId(*(PETHREAD *)v2) == v5 && !*(_WORD *)(W32GetUserSessionState(v7, v6) + 68752) )
  {
    v8 = *(_QWORD *)(*((_QWORD *)v2 + 58) + 648LL);
    if ( v8 )
    {
      if ( *(_DWORD *)(v8 + 184) || *(_DWORD *)(v8 + 188) )
      {
        v14 = 0LL;
        v12 = 0LL;
        v13 = -1LL;
        v9 = CreateProfileUserName(&v12);
        RegisterPerUserKeyboardIndicators(v9);
        if ( v13 != -1 )
          PopAndFreeAlwaysW32ThreadLock((__int64)&v12, v10);
      }
    }
  }
  return 1LL;
}
