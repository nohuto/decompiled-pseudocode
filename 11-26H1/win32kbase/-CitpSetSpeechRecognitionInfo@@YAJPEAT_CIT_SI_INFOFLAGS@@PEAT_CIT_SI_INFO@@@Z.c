/*
 * XREFs of ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1401B6028
 * Callers:
 *     CitSetInfo @ 0x1400D5810 (CitSetInfo.c)
 * Callees:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x14005831C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400D59B8 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1400D6678 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 */

__int64 __fastcall CitpSetSpeechRecognitionInfo(union _CIT_SI_INFOFLAGS *a1, union _CIT_SI_INFO *a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v8; // r11
  unsigned __int16 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r9
  unsigned __int16 v13; // dx
  unsigned int v14; // r8d
  int v15; // eax
  __int16 v16; // di
  unsigned int v17; // r10d
  __int64 v18; // rsi
  __int64 v19; // r8
  __int16 v20; // ax
  __int64 v21; // rcx
  struct tagPROCESSINFO **v22; // rax
  struct _CIT_INTERACTION_SUMMARY *v23; // rax

  v6 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3) + 18952) + 32LL);
  if ( (unsigned int)dword_1402AA0B4 < MEMORY[0xFFFFF7800000037C] )
    EtwTelemetryCoverageReport(&off_1402AA0A8);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  v8 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v8 = (struct tagPROCESSINFO *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  if ( (*(_DWORD *)a2 & 0x10000) != 0 )
    v8 = *(struct tagPROCESSINFO **)(v6 + 120);
  if ( !v8 )
    return 3221226021LL;
  v10 = *((_WORD *)a1 + 1);
  if ( v10 >= 0x40u )
    v10 = 64;
  v11 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( v11 >= 0x3E800000000LL )
    LODWORD(v12) = -1;
  else
    v12 = v11 / 0x3E8;
  v13 = v12;
  if ( v10 <= (unsigned int)v12 )
    v13 = v10;
  if ( (unsigned int)v12 >= 0x40 )
  {
    v14 = *(_DWORD *)(v6 + 304);
    v15 = v12 - 63;
    if ( (int)v12 - 63 > v14 )
    {
      *(_DWORD *)(v6 + 304) = v15;
      if ( v15 - v14 < 0x40 )
        *(_QWORD *)(v6 + 296) >>= (unsigned __int8)v15 - (unsigned __int8)v14;
      else
        *(_QWORD *)(v6 + 296) = 0LL;
    }
  }
  v16 = 0;
  if ( (unsigned int)v12 > 0x40 )
    LODWORD(v12) = 64;
  v17 = 64 - v13;
  if ( v17 < (unsigned int)v12 )
  {
    v18 = *(_QWORD *)(v6 + 296);
    do
    {
      v19 = v18;
      v20 = v16;
      v21 = v18 & (1LL << v17);
      ++v16;
      if ( v21 )
        v16 = v20;
      v18 |= 1LL << v17;
      if ( v21 )
        v18 = v19;
      ++v17;
    }
    while ( v17 < (unsigned int)v12 );
    *(_QWORD *)(v6 + 296) = v18;
    if ( v16 )
    {
      v22 = (struct tagPROCESSINFO **)CitpProcessEnsureContext(v8);
      if ( v22 )
      {
        v23 = CitpInteractionSummaryEnsure((struct _CIT_IMPACT_CONTEXT *)v6, v22, 1);
        if ( v23 )
          CitpStatIncrement((unsigned __int16 *)v23 + 52, v16);
      }
    }
  }
  return 0LL;
}
