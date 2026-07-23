/*
 * XREFs of PopAdaptiveStandbyTraceSessionMetadata @ 0x1407E5984
 * Callers:
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x1407E5664 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     PopAdaptiveStandbyTraceSessionSettings @ 0x1407E5B18 (PopAdaptiveStandbyTraceSessionSettings.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 */

NTSTATUS __fastcall PopAdaptiveStandbyTraceSessionMetadata(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // esi
  __int64 v9; // r9
  __int64 v10; // rax
  _DWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _DWORD *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v25; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+58h] [rbp+10h] BYREF
  char v27; // [rsp+68h] [rbp+20h] BYREF

  v26 = a2;
  v25 = a1;
  v27 = a1;
  *(_QWORD *)(a4 + 8) = 1LL;
  *(_QWORD *)a4 = &v27;
  *(_QWORD *)(a4 + 16) = &v26;
  *(_QWORD *)(a4 + 24) = 4LL;
  v6 = 2;
  v7 = 0;
  if ( a2 )
  {
    v8 = 4;
    do
    {
      v9 = 240LL * v7;
      v10 = *(_QWORD *)(v9 + a3);
      if ( !v10 )
      {
        v10 = v9 + a3 + 12;
        *(_QWORD *)(v9 + a3) = v10;
      }
      v11 = (_DWORD *)(v9 + a3 + 8);
      v12 = -1LL;
      do
        ++v12;
      while ( *(_WORD *)(v10 + 2 * v12) );
      v13 = *(_QWORD *)(v9 + a3 + 160);
      *v11 = v12;
      if ( !v13 )
      {
        v13 = v9 + a3 + 172;
        *(_QWORD *)(v9 + a3 + 160) = v13;
      }
      v14 = -1LL;
      do
        ++v14;
      while ( *(_WORD *)(v13 + 2 * v14) );
      v15 = 2LL * v6;
      v16 = (_DWORD *)(v9 + a3 + 168);
      v6 += 5;
      ++v7;
      *v16 = v14;
      *(_QWORD *)(a4 + 8 * v15) = &GUID_SPR_SESSION_METADATA_CONTAINER;
      *(_QWORD *)(a4 + 8 * v15 + 8) = 16LL;
      v17 = 2LL * (v8 - 1);
      *(_QWORD *)(a4 + 8 * v17) = v11;
      *(_QWORD *)(a4 + 8 * v17 + 8) = 4LL;
      v18 = *(_QWORD *)(v9 + a3);
      v19 = 2LL * v8;
      *(_DWORD *)(a4 + 8 * v19 + 8) = 2 * *v11;
      *(_QWORD *)(a4 + 8 * v19) = v18;
      *(_DWORD *)(a4 + 8 * v19 + 12) = 0;
      v20 = 2LL * (v8 + 1);
      *(_QWORD *)(a4 + 8 * v20) = v16;
      *(_QWORD *)(a4 + 8 * v20 + 8) = 4LL;
      v21 = 2LL * (v8 + 2);
      v22 = 2 * *v16;
      v8 += 5;
      *(_QWORD *)(a4 + 8 * v21) = *(_QWORD *)(v9 + a3 + 160);
      *(_QWORD *)(a4 + 8 * v21 + 8) = v22;
    }
    while ( v7 < v26 );
  }
  v23 = 2LL * v6;
  *(_QWORD *)(a4 + 8 * v23) = &v25;
  *(_QWORD *)(a4 + 8 * v23 + 8) = 8LL;
  return EtwWrite(
           PopDiagSleepStudyHandle,
           &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA,
           0LL,
           v6 + 1,
           (PEVENT_DATA_DESCRIPTOR)a4);
}
