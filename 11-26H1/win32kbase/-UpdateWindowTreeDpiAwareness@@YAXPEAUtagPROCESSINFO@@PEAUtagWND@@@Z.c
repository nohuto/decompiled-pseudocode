/*
 * XREFs of ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400FDD7C
 * Callers:
 *     NtUserSetProcessDpiAwarenessContext @ 0x140149330 (NtUserSetProcessDpiAwarenessContext.c)
 * Callees:
 *     BuildHwndList @ 0x1400FE068 (BuildHwndList.c)
 *     FreeHwndList @ 0x1400FE0B0 (FreeHwndList.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall UpdateWindowTreeDpiAwareness(struct tagPROCESSINFO *a1, struct tagWND *a2)
{
  int (*v4)(void); // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  _QWORD *v9; // r14
  __int64 v10; // rdi
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r8d
  __int64 UserSessionState; // rbx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  unsigned int v19; // ecx
  __int64 v20; // rbx
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rbp
  __int64 v26; // rdi
  int (*v27)(void); // rax
  int v28; // r8d
  __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rbp
  int v32; // edx
  __int64 v33; // rcx
  int v34; // r8d
  __int64 v35; // rbx
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  unsigned int v39; // ecx
  __int64 v40; // rbx
  int v41; // edx
  int v42; // r8d
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r12
  void (__fastcall *v46)(__int64, __int64); // rax
  __int64 v47; // [rsp+70h] [rbp+18h]
  __int64 v48; // [rsp+78h] [rbp+20h]

  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 3544LL);
  if ( !v4 )
    return;
  if ( v4() < 0 )
    return;
  v5 = BuildHwndList(a2);
  v8 = v5;
  if ( !v5 )
    return;
  v9 = (_QWORD *)(v5 + 32);
  v10 = *(_QWORD *)(v5 + 32);
  if ( v10 == 1 )
    goto LABEL_23;
  v48 = v5;
  do
  {
    PsGetCurrentThreadWin32Thread(v7, v6);
    v7 = *(_QWORD *)(W32GetUserSessionState(v12, v11, v13) + 19904);
    if ( (unsigned __int64)(unsigned __int16)v10 < *(_QWORD *)(v7 + 8) )
    {
      UserSessionState = W32GetUserSessionState(v7, v6, v14);
      v19 = *(_DWORD *)(W32GetUserSessionState(v17, v16, v18) + 19928) * (unsigned __int16)v10;
      v20 = v19 + *(_QWORD *)(UserSessionState + 19920);
      v23 = W32GetUserSessionState(v19, v21, v22);
      LOWORD(v10) = WORD1(v10) & 0x7FFF;
      v24 = *(_QWORD *)(v23 + 19864);
      v7 = (unsigned int)((v20 - *(_QWORD *)(v23 + 19920)) >> 5);
      v25 = 5 * v7;
      if ( ((WORD1(v10) & 0x7FFF) == *(_WORD *)(v20 + 26)
         || (_WORD)v10 == 0x7FFF
         || !(_WORD)v10 && PsGetCurrentProcessWow64Process(v7, v6))
        && (*(_BYTE *)(v20 + 25) & 1) == 0
        && *(_BYTE *)(v20 + 24) == 1 )
      {
        v26 = *(_QWORD *)(v24 + 8 * v25);
        if ( v26 )
        {
          v7 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 48);
          v27 = *(int (**)(void))(v7 + 3560);
          if ( v27 )
          {
            if ( v27() >= 0 && *(struct tagPROCESSINFO **)(*(_QWORD *)(v26 + 16) + 456LL) == a1 )
            {
              v29 = 0LL;
              v30 = *(_QWORD *)(v26 + 40);
              *(_DWORD *)(v30 + 288) = *((_DWORD *)a1 + 67);
              v31 = *(_QWORD *)(*(_QWORD *)(v26 + 40) + 256LL);
              v33 = *(_QWORD *)(W32GetUserSessionState(v30, v6, v28) + 19904);
              if ( (unsigned __int64)(unsigned __int16)v31 < *(_QWORD *)(v33 + 8) )
              {
                v35 = W32GetUserSessionState(v33, v32, v34);
                v39 = *(_DWORD *)(W32GetUserSessionState(v37, v36, v38) + 19928) * (unsigned __int16)v31;
                v40 = v39 + *(_QWORD *)(v35 + 19920);
                v43 = W32GetUserSessionState(v39, v41, v42);
                v45 = 5LL * (unsigned int)((v40 - *(_QWORD *)(v43 + 19920)) >> 5);
                v33 = *(_QWORD *)(v43 + 19864);
                v47 = v33;
                LOWORD(v31) = WORD1(v31) & 0x7FFF;
                if ( (WORD1(v31) & 0x7FFF) == *(_WORD *)(v40 + 26) || (_WORD)v31 == 0x7FFF )
                {
LABEL_16:
                  if ( (*(_BYTE *)(v40 + 25) & 1) == 0 && *(_BYTE *)(v40 + 24) == 12 )
                    v29 = *(_QWORD *)(v33 + 8 * v45);
                  goto LABEL_19;
                }
                if ( !(_WORD)v31 && PsGetCurrentProcessWow64Process(v33, v44) )
                {
                  v33 = v47;
                  goto LABEL_16;
                }
              }
LABEL_19:
              v46 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v33) + 48) + 3568LL);
              if ( v46 )
                v46(v26, v29);
            }
          }
        }
      }
    }
    v10 = *++v9;
  }
  while ( *v9 != 1LL );
  v8 = v48;
LABEL_23:
  FreeHwndList(v8);
}
