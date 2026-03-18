/*
 * XREFs of CalcSBStuff2 @ 0x14025FD68
 * Callers:
 *     CalcSBStuff @ 0x14025FAB8 (CalcSBStuff.c)
 * Callees:
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     WPP_RECORDER_AND_TRACE_SF_lddddddddddddddd @ 0x1402E5640 (WPP_RECORDER_AND_TRACE_SF_lddddddddddddddd.c)
 */

char __fastcall CalcSBStuff2(int *a1, int *a2, int *a3, int a4)
{
  int *v4; // rax
  int v7; // ecx
  int v8; // ebx
  int v9; // r8d
  int v10; // r9d
  unsigned int DpiForSystem; // eax
  INT DpiDependentMetric; // eax
  INT v13; // r8d
  char v14; // bl
  int v15; // r9d
  int v16; // ecx
  int v17; // eax
  int v18; // edi
  INT v19; // edi
  int v20; // r14d
  int v21; // r9d
  INT v22; // edx
  int v23; // ecx
  int v24; // r9d
  int v25; // edx
  INT v26; // edx
  INT v27; // edi
  int v28; // eax
  char result; // al
  __int64 UserSessionState; // rax
  int v31; // r8d
  int v32; // edx
  char v33; // [rsp+C4h] [rbp-54h]
  char v35; // [rsp+130h] [rbp+18h]

  v4 = a2 + 1;
  if ( a4 )
  {
    v7 = a2[2];
    v8 = 10;
    v9 = *a2;
    v10 = a2[3];
  }
  else
  {
    v9 = *v4;
    v8 = 11;
    v7 = a2[3];
    v4 = a2;
    v10 = a2[2];
  }
  a1[4] = *v4;
  a1[5] = v10;
  a1[6] = v9;
  a1[7] = v7;
  DpiForSystem = GetDpiForSystem();
  DpiDependentMetric = GetDpiDependentMetric(v8, DpiForSystem);
  a1[8] = DpiDependentMetric;
  v13 = DpiDependentMetric;
  v14 = 1;
  v15 = a1[5];
  v16 = a1[4];
  a1[3] = a3[3];
  a1[2] = a3[2];
  v17 = *a3;
  *a1 = *a3;
  v18 = a3[1];
  a1[1] = v18;
  v33 = 1;
  v19 = v18 - v17 + 1;
  v20 = (v15 - v16) / 2;
  if ( v20 >= v13 )
    v20 = v13;
  v21 = v15 - v20;
  a1[10] = v21;
  a1[9] = v20 + v16;
  v22 = a3[2];
  if ( v22 && v19 )
  {
    v13 = EngMulDiv(v21 - (v20 + v16), v22, v19);
    if ( a1[8] / 2 > v13 )
      v13 = a1[8] / 2;
    a1[8] = v13;
  }
  v23 = 1;
  v24 = v20 + a1[4];
  v25 = a1[5] - v24;
  a1[15] = v24;
  v26 = v25 - v20 - v13;
  a1[14] = v26;
  if ( a3[2] )
    v23 = a3[2];
  v27 = v19 - v23;
  if ( v27 )
    v28 = a1[15] + EngMulDiv(a3[3] - *a3, v26, v27);
  else
    v28 = v24 - 1;
  a1[13] = v28;
  a1[12] = a1[8] + v28;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || (result = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    result = 0;
  }
  v35 = result;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v14 = 0;
    v33 = 0;
  }
  if ( result || v14 )
  {
    UserSessionState = W32GetUserSessionState(a1, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v31) = v33;
    LOBYTE(v32) = v35;
    return WPP_RECORDER_AND_TRACE_SF_lddddddddddddddd(
             *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
             v32,
             v31,
             *(_QWORD *)(UserSessionState + 69160));
  }
  return result;
}
