/*
 * XREFs of ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x140064B14
 * Callers:
 *     NtUserSetProcessDpiAwarenessContext @ 0x140107FE0 (NtUserSetProcessDpiAwarenessContext.c)
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x140064D58 (HMValidateSharedHandleNoRip.c)
 *     BuildHwndList @ 0x140064E4C (BuildHwndList.c)
 *     FreeHwndList @ 0x140064E94 (FreeHwndList.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall UpdateWindowTreeDpiAwareness(struct tagPROCESSINFO *a1, struct tagWND *a2)
{
  int (*v4)(void); // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  _QWORD *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rbp
  __int64 v22; // rbx
  int (*v23)(void); // rax
  __int64 v24; // rdi
  void (__fastcall *v25)(__int64, __int64); // rax
  __int64 v26; // [rsp+60h] [rbp+18h]

  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3992LL);
  if ( v4 )
  {
    if ( v4() >= 0 )
    {
      v5 = BuildHwndList(a2);
      v6 = v5;
      if ( v5 )
      {
        v7 = (_QWORD *)(v5 + 32);
        v8 = *(_QWORD *)(v5 + 32);
        if ( v8 != 1 )
        {
          v26 = v5;
          do
          {
            W32GetCurrentThreadNonPaged();
            v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19872);
            if ( (unsigned __int64)(unsigned __int16)v8 < *(_QWORD *)(v12 + 8) )
            {
              UserSessionState = W32GetUserSessionState(v12, v11);
              v16 = *(_DWORD *)(W32GetUserSessionState(v15, v14) + 19896) * (unsigned int)(unsigned __int16)v8;
              v17 = v16 + *(_QWORD *)(UserSessionState + 19888);
              v19 = W32GetUserSessionState(v16, v18);
              LOWORD(v8) = WORD1(v8) & 0x7FFF;
              v20 = *(_QWORD *)(v19 + 19832);
              v21 = 5LL * (unsigned int)((v17 - *(_QWORD *)(v19 + 19888)) >> 5);
              if ( ((WORD1(v8) & 0x7FFF) == *(_WORD *)(v17 + 26)
                 || (_WORD)v8 == 0x7FFF
                 || !(_WORD)v8 && PsGetCurrentProcessWow64Process())
                && (*(_BYTE *)(v17 + 25) & 1) == 0
                && *(_BYTE *)(v17 + 24) == 1 )
              {
                v22 = *(_QWORD *)(v20 + 8 * v21);
                if ( v22 )
                {
                  v23 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 4008LL);
                  if ( v23 )
                  {
                    if ( v23() >= 0 && *(struct tagPROCESSINFO **)(*(_QWORD *)(v22 + 16) + 464LL) == a1 )
                    {
                      *(_DWORD *)(*(_QWORD *)(v22 + 40) + 288LL) = *((_DWORD *)a1 + 67);
                      v24 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(v22 + 40) + 256LL));
                      v25 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48)
                                                                    + 4016LL);
                      if ( v25 )
                        v25(v22, v24);
                    }
                  }
                }
              }
            }
            v8 = *++v7;
          }
          while ( *v7 != 1LL );
          v6 = v26;
        }
        FreeHwndList(v6);
      }
    }
  }
}
