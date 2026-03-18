/*
 * XREFs of ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x14004A560
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x14007BDA0 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     CitBackgroundMouseInput @ 0x14007D320 (CitBackgroundMouseInput.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14007D4BC (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x14007DB28 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14007E468 (-CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14007EE6C (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14019BCF0 (-CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     ?CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x14004BE4C (-CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x14007F4D8 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x140134AB8 (-CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x14023FF10 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 */

struct _CIT_INTERACTION_SUMMARY *__fastcall CitpInteractionSummaryEnsure(
        struct _CIT_IMPACT_CONTEXT *a1,
        struct tagPROCESSINFO **a2,
        __int16 a3)
{
  __int64 UserSessionState; // rax
  struct _CIT_INTERACTION_SUMMARY *v7; // r15
  __int64 v8; // rsi
  int v9; // eax
  struct _CIT_PROG_DATA *v10; // rbx
  struct _CIT_INTERACTION_SUMMARY **v11; // rdi
  struct tagPROCESSINFO *v12; // rsi
  int v13; // r14d
  __int16 CurrentWin32kSessionId; // bp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int16 v17; // di
  LONGLONG TimeQuadPart; // rbx
  char v19; // al
  unsigned __int16 v21; // ax
  __int16 v22; // cx
  struct _CIT_PROG_DATA *v23; // rax
  struct _CIT_INTERACTION_SUMMARY *v24; // [rsp+68h] [rbp+20h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v7 = 0LL;
  v24 = 0LL;
  v8 = *(_QWORD *)(UserSessionState + 18912);
  v9 = *(_DWORD *)(v8 + 12);
  if ( (v9 & 1) == 0 )
    return v7;
  v10 = 0LL;
  if ( (v9 & 2) != 0 )
  {
    v23 = CitpProcessEnsureProgData(a2[1]);
    v10 = v23;
    if ( !v23 )
      return v7;
    v11 = (struct _CIT_INTERACTION_SUMMARY **)((char *)v23 + 88);
  }
  else
  {
    v11 = a2 + 4;
  }
  v7 = *v11;
  if ( *v11 )
  {
    if ( ((*((unsigned __int16 *)v7 + 50) >> 2) & 0x1FFF) == *(_DWORD *)(v8 + 28) )
    {
LABEL_6:
      *((_WORD *)v7 + 57) |= a3;
      if ( *(struct _CIT_INTERACTION_SUMMARY **)v7 == v7 )
        CitpInteractionSummaryStartTracking(a1, v7);
      *((_QWORD *)v7 + 2) |= (unsigned __int64)*a2;
      v12 = a2[1];
      v13 = *((_DWORD *)v12 + 14);
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
      v17 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v16, v15) + 18912) + 32LL) + 116LL);
      TimeQuadPart = PsGetProcessCreateTimeQuadPart(*(PEPROCESS *)v12);
      *((_DWORD *)v7 + 24) = PsGetProcessSequenceNumber(*(_QWORD *)v12);
      *((_DWORD *)v7 + 19) = v13;
      *((_WORD *)v7 + 40) = CurrentWin32kSessionId;
      *((_WORD *)v7 + 41) = v17;
      *(_QWORD *)((char *)v7 + 84) = TimeQuadPart;
      v19 = *((_BYTE *)a2 + 108);
      if ( (v19 & 1) == 0 )
      {
        *((_BYTE *)a2 + 108) = v19 | 1;
        v21 = *((_WORD *)v7 + 51);
        v22 = v21 + 1;
        if ( (unsigned __int16)(v21 + 1) < v21 )
          v22 = -1;
        *((_WORD *)v7 + 51) = v22;
      }
      return v7;
    }
    CitpInteractionSummaryDelete(v11);
  }
  CitpInteractionSummaryAllocate(&v24);
  v7 = v24;
  if ( v24 )
  {
    if ( v10 )
    {
      *((_WORD *)v24 + 50) |= 1u;
      *((_QWORD *)v7 + 3) = v10;
    }
    else
    {
      *((_QWORD *)v24 + 3) = a2;
    }
    *v11 = v7;
    if ( v7 )
      goto LABEL_6;
    return v7;
  }
  return 0LL;
}
