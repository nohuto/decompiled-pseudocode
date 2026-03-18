/*
 * XREFs of ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140168DC8
 * Callers:
 *     ?xxxCheckImeShowStatusInThread@@YAHPEAUtagWND@@@Z @ 0x140168D7C (-xxxCheckImeShowStatusInThread@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x140282EAC (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x1400208B0 (_PostMessage.c)
 *     BuildHwndList @ 0x140036200 (BuildHwndList.c)
 *     FreeHwndList @ 0x140036740 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     unsafe_cast_class_to_PIMEWND @ 0x140285D1C (unsafe_cast_class_to_PIMEWND.c)
 */

__int64 __fastcall xxxCheckImeShowStatus(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  unsigned int v3; // ebx
  struct tagBWL *v4; // rax
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  struct tagBWL *v7; // r12
  __int64 *i; // r15
  __int64 v9; // r14
  struct tagWND *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  char v17; // r14
  PRKPROCESS *v18; // rcx
  __int64 v19; // rbx
  ULONG64 v21; // [rsp+28h] [rbp-70h]
  int v22; // [rsp+30h] [rbp-68h]
  ULONG64 *v23; // [rsp+38h] [rbp-60h]
  struct tagTHREADINFO *v24; // [rsp+48h] [rbp-50h]
  ULONG64 v26; // [rsp+B0h] [rbp+18h]

  v3 = 0;
  v24 = PtiCurrent((__int64)a1, (__int64)a2);
  if ( *(char *)(*((_QWORD *)a1 + 5) + 20LL) < 0 )
    return 0LL;
  v4 = BuildHwndList(*(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL), 2LL, 0LL, 1);
  v7 = v4;
  if ( !v4 )
    return v3;
  for ( i = (__int64 *)((char *)v4 + 32); *i != 1; ++i )
  {
    v9 = *i;
    v10 = 0LL;
    W32GetCurrentThreadNonPaged(v6, v5);
    v6 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19872);
    if ( (unsigned __int64)(unsigned __int16)v9 >= *(_QWORD *)(v6 + 8) )
      goto LABEL_10;
    UserSessionState = W32GetUserSessionState(v6, v5);
    v16 = *(_DWORD *)(W32GetUserSessionState(v15, v14) + 19896) * (unsigned int)(unsigned __int16)v9
        + *(_QWORD *)(UserSessionState + 19888);
    v6 = HMPkheFromPhe(v16);
    v26 = v6;
    LOWORD(v9) = WORD1(v9) & 0x7FFF;
    if ( (WORD1(v9) & 0x7FFF) != *(_WORD *)(v16 + 26) && (_WORD)v9 != 0x7FFF )
    {
      if ( (_WORD)v9 || !PsGetCurrentProcessWow64Process(v6, v5) )
        goto LABEL_10;
      v6 = v26;
    }
    if ( (*(_BYTE *)(v16 + 25) & 1) == 0 && *(_BYTE *)(v16 + 24) == 1 )
      v10 = *(struct tagWND **)v6;
LABEL_10:
    if ( v10 )
    {
      if ( a1 != v10 )
      {
        v23 = (ULONG64 *)unsafe_cast_class_to_PIMEWND(v10);
        if ( v23 )
        {
          if ( *(char *)(*((_QWORD *)v10 + 5) + 20LL) >= 0 && (!a2 || a2 == *((struct tagTHREADINFO **)v10 + 2)) )
          {
            v17 = 0;
            v18 = *(PRKPROCESS **)(*((_QWORD *)v10 + 2) + 464LL);
            if ( v18 != *((PRKPROCESS **)v24 + 58) )
            {
              KeAttachProcess(*v18);
              v17 = 1;
            }
            v6 = *v23;
            v21 = *v23;
            if ( !*v23 || v21 == -1LL )
            {
              if ( v17 )
                KeDetachProcess();
            }
            else
            {
              v6 = MmUserProbeAddress;
              if ( v21 < MmUserProbeAddress )
                v6 = *v23;
              if ( (*(_DWORD *)(v6 + 44) & 1) != 0 )
              {
                LOBYTE(v5) = 1;
                v19 = HMValidateHandleNoSecure(*(_QWORD *)(v21 + 16), v5);
                v22 = v19;
                if ( v19 )
                  *(_DWORD *)(v21 + 44) &= ~1u;
              }
              else
              {
                v19 = 0LL;
                v22 = 0;
              }
              if ( v17 )
                KeDetachProcess();
              if ( v19 )
              {
                v6 = *(_QWORD *)(v19 + 16);
                if ( v6 )
                {
                  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 528), 0, 0) & 1) == 0 )
                    PostMessage(v22, 642, 1, 0);
                }
              }
            }
          }
        }
      }
    }
  }
  FreeHwndList(v7, v5);
  return 1;
}
