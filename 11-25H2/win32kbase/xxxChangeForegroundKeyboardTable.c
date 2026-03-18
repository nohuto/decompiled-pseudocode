/*
 * XREFs of xxxChangeForegroundKeyboardTable @ 0x1400F3EF0
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x14009F5D0 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1400F44B8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     ?ActivateKeyboardLayout@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@0W4_ChangeKbdTableReason@@@Z @ 0x1400F42A0 (-ActivateKeyboardLayout@Keyboard@InputTraceLogging@@SAXQEAUtagKL@@0W4_ChangeKbdTableReason@@@Z.c)
 *     SetGlobalKeyboardTableInfo @ 0x1400F4394 (SetGlobalKeyboardTableInfo.c)
 *     ApiSetEditionResetIMEConversionStatus @ 0x1400F4448 (ApiSetEditionResetIMEConversionStatus.c)
 *     HMAssignmentLock @ 0x1400F4780 (HMAssignmentLock.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x14014E39C (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     UpdateKeyLights @ 0x14018D000 (UpdateKeyLights.c)
 */

__int64 __fastcall xxxChangeForegroundKeyboardTable(struct tagKL *a1, struct tagKL *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  bool v17; // bl
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 UserSessionState; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int16 v31; // ax
  bool v32; // bl
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  _QWORD v57[3]; // [rsp+20h] [rbp-18h] BYREF

  result = W32GetUserSessionState(a1, a2);
  if ( a2 == *(struct tagKL **)(result + 14232) )
    return result;
  v57[1] = a2;
  v57[0] = W32GetUserSessionState(v8, v7) + 14240;
  HMAssignmentLock(v57, 0LL);
  InputTraceLogging::Keyboard::ActivateKeyboardLayout(a1, a2, a3);
  ApiSetEditionResetIMEConversionStatus(a1, a2);
  if ( !*(_QWORD *)(W32GetUserSessionState(v10, v9) + 14232) )
  {
    *(_QWORD *)(W32GetUserSessionState(v12, v11) + 14232) = a2;
    return SetGlobalKeyboardTableInfo(a2);
  }
  *(_QWORD *)(W32GetUserSessionState(v12, v11) + 14232) = a2;
  if ( a1 != a2 && (!a1 || *((_QWORD *)a1 + 6) != *((_QWORD *)a2 + 6))
    || (result = W32GetUserSessionState(v14, v13), !*(_QWORD *)(result + 14224)) )
  {
    xxxManageKeyboardModifiers(a1, a2);
    v15 = 0LL;
    v16 = 1023LL;
    LOWORD(v16) = *((_WORD *)a2 + 20) & 0x3FF;
    if ( (_WORD)v16 != 17 )
    {
      if ( !a1 )
        return SetGlobalKeyboardTableInfo(a2);
      v31 = *((_WORD *)a1 + 20) & 0x3FF;
      if ( v31 == 17 )
      {
        v32 = (*(_BYTE *)(W32GetUserSessionState(0LL, v16) + 14341) & 8) != 0;
        *(_BYTE *)(W32GetUserSessionState(v34, v33) + 14332) = v32;
      }
      else if ( v31 != 18 || (_WORD)v16 == 18 )
      {
        goto LABEL_32;
      }
      goto LABEL_27;
    }
    if ( a1 )
    {
      if ( (*((_WORD *)a1 + 20) & 0x3FF) == 0x11 )
      {
LABEL_15:
        if ( (_DWORD)v15 == 1 )
        {
          UserSessionState = W32GetUserSessionState(v15, v16);
          *(_BYTE *)(UserSessionState + 14341) |= 8u;
          v23 = W32GetUserSessionState(v22, v21);
          *(_BYTE *)(v23 + 14405) |= 8u;
          if ( *(_QWORD *)(W32GetUserSessionState(v25, v24) + 18904) )
          {
            v29 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 18904);
            if ( *(_QWORD *)(v29 + 472) )
            {
              v30 = W32GetUserSessionState(v29, v28);
              *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v30 + 18904) + 472LL) + 261LL) |= 8u;
            }
          }
          goto LABEL_30;
        }
        if ( (_DWORD)v15 != 2 )
        {
          if ( !(_DWORD)v15 )
          {
LABEL_31:
            if ( !a1 )
              return SetGlobalKeyboardTableInfo(a2);
LABEL_32:
            if ( (*((_WORD *)a1 + 20) & 0x3FF) == 0x12 && (*((_WORD *)a2 + 20) & 0x3FF) != 0x12 )
            {
              v46 = W32GetUserSessionState(v15, v16);
              *(_BYTE *)(v46 + 14405) &= ~4u;
              v49 = W32GetUserSessionState(v48, v47);
              *(_BYTE *)(v49 + 14341) &= ~4u;
              if ( *(_QWORD *)(W32GetUserSessionState(v51, v50) + 18904) )
              {
                v55 = *(_QWORD *)(W32GetUserSessionState(v53, v52) + 18904);
                if ( *(_QWORD *)(v55 + 472) )
                {
                  v56 = W32GetUserSessionState(v55, v54);
                  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v56 + 18904) + 472LL) + 261LL) &= ~4u;
                }
              }
            }
            return SetGlobalKeyboardTableInfo(a2);
          }
LABEL_30:
          UpdateKeyLights(1LL);
          goto LABEL_31;
        }
LABEL_27:
        v35 = W32GetUserSessionState(v15, v16);
        *(_BYTE *)(v35 + 14341) &= ~8u;
        v38 = W32GetUserSessionState(v37, v36);
        *(_BYTE *)(v38 + 14405) &= ~8u;
        if ( *(_QWORD *)(W32GetUserSessionState(v40, v39) + 18904) )
        {
          v43 = *(_QWORD *)(W32GetUserSessionState(v42, v41) + 18904);
          if ( *(_QWORD *)(v43 + 472) )
          {
            v45 = W32GetUserSessionState(v44, v43);
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v45 + 18904) + 472LL) + 261LL) &= ~8u;
          }
        }
        goto LABEL_30;
      }
    }
    else
    {
      v17 = (*(_BYTE *)(W32GetUserSessionState(0LL, v16) + 14341) & 8) != 0;
      *(_BYTE *)(W32GetUserSessionState(v19, v18) + 14332) = v17;
    }
    v15 = 2 - (unsigned int)(*(_BYTE *)(W32GetUserSessionState(v15, v16) + 14332) != 0);
    goto LABEL_15;
  }
  return result;
}
