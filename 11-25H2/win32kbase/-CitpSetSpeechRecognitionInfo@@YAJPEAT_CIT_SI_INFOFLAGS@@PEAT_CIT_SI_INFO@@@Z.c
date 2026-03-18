/*
 * XREFs of ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14019BCF0
 * Callers:
 *     CitSetInfo @ 0x14007D270 (CitSetInfo.c)
 * Callees:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x14004A560 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x14007D418 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x14007D830 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 */

__int64 __fastcall CitpSetSpeechRecognitionInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v7; // r11
  unsigned __int16 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r9
  unsigned __int16 v12; // dx
  unsigned int v13; // r8d
  int v14; // eax
  __int16 v15; // di
  unsigned int v16; // r10d
  __int64 v17; // rsi
  __int64 v18; // r8
  __int16 v19; // ax
  __int64 v20; // rsi
  __int64 v21; // rax
  struct tagPROCESSINFO **v22; // rax
  struct _CIT_INTERACTION_SUMMARY *v23; // rax

  v5 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18912) + 32LL);
  if ( (unsigned int)dword_14029F0C4 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_14029F0B8);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  v7 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v7 = (struct tagPROCESSINFO *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
    v7 = *(struct tagPROCESSINFO **)(v5 + 120);
  if ( !v7 )
    return 3221226021LL;
  v9 = *((_WORD *)a1 + 1);
  if ( v9 >= 0x40u )
    v9 = 64;
  v10 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( v10 >= 0x3E800000000LL )
    LODWORD(v11) = -1;
  else
    v11 = v10 / 0x3E8;
  v12 = v11;
  if ( v9 <= (unsigned int)v11 )
    v12 = v9;
  if ( (unsigned int)v11 >= 0x40 )
  {
    v13 = *(_DWORD *)(v5 + 304);
    v14 = v11 - 63;
    if ( (int)v11 - 63 > v13 )
    {
      *(_DWORD *)(v5 + 304) = v14;
      if ( v14 - v13 < 0x40 )
        *(_QWORD *)(v5 + 296) >>= (unsigned __int8)v14 - (unsigned __int8)v13;
      else
        *(_QWORD *)(v5 + 296) = 0LL;
    }
  }
  v15 = 0;
  if ( (unsigned int)v11 > 0x40 )
    LODWORD(v11) = 64;
  v16 = 64 - v12;
  if ( v16 < (unsigned int)v11 )
  {
    v17 = *(_QWORD *)(v5 + 296);
    do
    {
      v18 = v17;
      v19 = v15;
      v20 = (1LL << v16) & v17;
      ++v15;
      if ( v20 )
        v15 = v19;
      v21 = v20;
      v17 = (1LL << v16) | v18;
      if ( v21 )
        v17 = v18;
      ++v16;
    }
    while ( v16 < (unsigned int)v11 );
    *(_QWORD *)(v5 + 296) = v17;
    if ( v15 )
    {
      v22 = (struct tagPROCESSINFO **)CitpProcessEnsureContext(v7);
      if ( v22 )
      {
        v23 = CitpInteractionSummaryEnsure((struct _CIT_IMPACT_CONTEXT *)v5, v22, 1);
        if ( v23 )
          CitpStatIncrement((unsigned __int16 *)v23 + 52, v15);
      }
    }
  }
  return 0LL;
}
