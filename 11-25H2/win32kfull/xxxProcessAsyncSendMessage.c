/*
 * XREFs of xxxProcessAsyncSendMessage @ 0x14002FF54
 * Callers:
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1402DF6F0 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxProcessAsyncSendMessage(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r14
  unsigned int v6; // r12d
  int v7; // esi
  ULONG_PTR v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagWND **v20; // r15
  struct tagWND *v21; // rsi
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  ULONG_PTR *v26; // rax
  __int64 v27; // rbx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v30[264]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = *a4;
  v6 = a2;
  v7 = a1;
  W32GetCurrentThreadNonPaged(a1, a2);
  v8 = 0LL;
  result = W32GetUserSessionState(v10, v9);
  v13 = *(_QWORD *)(result + 19872);
  if ( (unsigned __int64)(unsigned __int16)v7 < *(_QWORD *)(v13 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v13, v12);
    v17 = *(_DWORD *)(W32GetUserSessionState(v16, v15) + 19896) * (unsigned int)(unsigned __int16)v7
        + *(_QWORD *)(UserSessionState + 19888);
    v20 = (struct tagWND **)HMPkheFromPhe(v17);
    result = 0x7FFFLL;
    LOWORD(v7) = HIWORD(v7) & 0x7FFF;
    if ( ((HIWORD(v7) & 0x7FFF) == *(_WORD *)(v17 + 26)
       || (_WORD)v7 == 0x7FFF
       || !(_WORD)v7 && (result = PsGetCurrentProcessWow64Process(v19, v18)) != 0)
      && (*(_BYTE *)(v17 + 25) & 1) == 0
      && *(_BYTE *)(v17 + 24) == 1 )
    {
      v21 = *v20;
      if ( *v20 )
      {
        CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v19, v18);
        if ( CurrentThreadNonPaged )
          v23 = *CurrentThreadNonPaged;
        else
          v23 = 0LL;
        BugCheckParameter3[0] = *(_QWORD *)(v23 + 456);
        *(_QWORD *)(v23 + 456) = BugCheckParameter3;
        BugCheckParameter3[1] = (ULONG_PTR)v21;
        HMLockObject(v21);
        if ( v6 == 26 || v6 == 27 )
        {
          if ( v4 )
          {
            v27 = -1LL;
            if ( v4 == -1 )
            {
              v30[0] = 0;
              do
                ++v27;
              while ( v30[v27] );
            }
            else
            {
              if ( (unsigned int)UserGetAtomName((unsigned __int16)v4, v30, 260LL) )
              {
                do
                  ++v27;
                while ( v30[v27] );
              }
              UserDeleteAtom((unsigned __int16)v4);
            }
          }
          *a4 = 0LL;
        }
        else if ( v6 == 834 )
        {
          xxxEndGetWidnowTrackInfoAsync(v21);
          goto LABEL_12;
        }
        xxxSendMessage(v21, v6, a3);
LABEL_12:
        v26 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v25, v24);
        if ( v26 )
          v8 = *v26;
        return Win32HM_UnlockFromThread<0>(v8, BugCheckParameter3);
      }
    }
  }
  return result;
}
