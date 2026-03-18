/*
 * XREFs of ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1400D53F0
 * Callers:
 *     CitSetInfo @ 0x1400D5810 (CitSetInfo.c)
 * Callees:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x14005831C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400D59B8 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z @ 0x1400D7C38 (-CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z.c)
 */

__int64 __fastcall CitpSetAudioInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2, int a3)
{
  __int64 UserSessionState; // rax
  __int16 v5; // r14
  __int64 v6; // r15
  struct _CIT_IMPACT_CONTEXT *v7; // rsi
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v10; // rdi
  struct tagPROCESSINFO **v11; // rax
  struct tagPROCESSINFO **v12; // rbp
  struct _CIT_INTERACTION_SUMMARY *v13; // rsi
  __int64 v14; // rbx
  char *v15; // rcx
  __int64 v16; // rdx
  char v17; // al
  char v18; // al
  char v20; // al
  char v21; // al
  char v22; // al

  UserSessionState = W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3);
  v5 = *((_WORD *)a1 + 1);
  v6 = (unsigned __int16)*(_DWORD *)a1;
  v7 = *(struct _CIT_IMPACT_CONTEXT **)(*(_QWORD *)(UserSessionState + 18952) + 32LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  v10 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v10 = (struct tagPROCESSINFO *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  v11 = (struct tagPROCESSINFO **)CitpProcessEnsureContext(v10);
  v12 = v11;
  if ( !v11 )
    return 3221225473LL;
  v13 = CitpInteractionSummaryEnsure(v7, v11, 16);
  v14 = 0LL;
  if ( v5 )
  {
    if ( (unsigned int)dword_1402AA114 < MEMORY[0xFFFFF7800000037C] )
      EtwTelemetryCoverageReport(&off_1402AA108);
    v16 = 10LL;
    v15 = (char *)(v12 + 13);
    v14 = ((unsigned __int64)v13 + 116) & -(__int64)(v13 != 0LL);
  }
  else
  {
    if ( (unsigned int)dword_1402AA0CC < MEMORY[0xFFFFF7800000037C] )
      EtwTelemetryCoverageReport(&off_1402AA0C0);
    v15 = (char *)v12 + 105;
    v16 = 11LL;
    if ( v13 )
      v14 = (__int64)v13 + 124;
  }
  v17 = *v15;
  if ( v6 == 3 )
  {
    if ( v17 != -1 )
    {
      v20 = v17 + 1;
      *v15 = v20;
      if ( v20 == 1 )
        PsUpdateComponentPower(*(_QWORD *)v10, v16);
    }
    if ( v14 )
    {
      v21 = *(_BYTE *)(v14 + 3);
      if ( v21 != -1 )
      {
        v22 = v21 + 1;
        *(_BYTE *)(v14 + 3) = v22;
        if ( v22 == 1 )
          *(_DWORD *)(v14 + 4) = (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]) / 0x2710uLL;
      }
    }
  }
  else
  {
    if ( v17 )
    {
      v18 = v17 - 1;
      *v15 = v18;
      if ( !v18 )
        PsUpdateComponentPower(*(_QWORD *)v10, v16);
    }
    if ( v14 )
      CitpAudioStatDecrementStreams((struct _CIT_AUDIO_STATS *)v14, 1u);
  }
  return 0LL;
}
