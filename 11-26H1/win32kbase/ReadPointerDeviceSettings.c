/*
 * XREFs of ReadPointerDeviceSettings @ 0x1401B41E0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 *     _lambda_a418699817c89276d1581a788dfe45e0_::_lambda_invoker_cdecl_ @ 0x1401B4170 (_lambda_a418699817c89276d1581a788dfe45e0_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1400EE59C (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     GetDWORDSettingValuesEx @ 0x1400F04A0 (GetDWORDSettingValuesEx.c)
 *     ApiSetEditionOverrideUserTouchGestureSettings @ 0x1401C0A58 (ApiSetEditionOverrideUserTouchGestureSettings.c)
 */

__int64 __fastcall ReadPointerDeviceSettings(int a1, _DWORD *a2, int a3)
{
  unsigned int v5; // esi
  __int64 UserSessionState; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 v10; // rbp
  int v11; // ebx
  __int64 v12; // r14
  int v13; // eax
  _DWORD *v14; // rdx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int64 v30; // r14
  int v31; // eax

  v5 = 0;
  UserSessionState = W32GetUserSessionState(a1, (_DWORD)a2, a3);
  v10 = UserSessionState;
  v11 = a1 - 146;
  if ( !v11 )
  {
    if ( !*(_DWORD *)(UserSessionState + 17640) || !*(_DWORD *)(UserSessionState + 17672) )
      LoadPointerDeviceTouchSettings(v8, v7, v9);
    ApiSetEditionOverrideUserTouchGestureSettings(*(_QWORD *)(v10 + 17648), *(_QWORD *)(v10 + 17680));
    v14 = *(_DWORD **)(v10 + 17648);
    *a2 = (unsigned int)(v14[3] - 1) > 0xFFFFFFFD;
    v15 = v14[7];
    if ( v15 == -1 )
      v15 = v14[6];
    a2[1] = v15;
    v16 = v14[11];
    if ( v16 == -1 )
      v16 = v14[10];
    a2[2] = v16;
    v17 = v14[15];
    if ( v17 == -1 )
      v17 = v14[14];
    a2[3] = v17;
    v18 = v14[19];
    if ( v18 == -1 )
      v18 = v14[18];
    a2[5] = v18;
    v19 = v14[23];
    if ( v19 == -1 )
      v19 = v14[22];
    a2[6] = v19;
    v20 = v14[27];
    if ( v20 == -1 )
      v20 = v14[26];
    a2[7] = v20;
    v21 = v14[31];
    if ( v21 == -1 )
      v21 = v14[30];
    a2[8] = v21;
    v22 = v14[35];
    if ( v22 == -1 )
      v22 = v14[34];
    a2[9] = v22;
    v23 = v14[39];
    if ( v23 == -1 )
      v23 = v14[38];
    a2[10] = v23;
    v24 = v14[43];
    if ( v24 == -1 )
      v24 = v14[42];
    a2[11] = v24;
    v25 = v14[47];
    if ( v25 == -1 )
      v25 = v14[46];
    a2[12] = v25;
    v26 = v14[51];
    if ( v26 == -1 )
      v26 = v14[50];
    a2[13] = v26;
    v27 = v14[55];
    if ( v27 == -1 )
      v27 = v14[54];
    a2[14] = v27;
    v28 = v14[59];
    if ( v28 == -1 )
      v28 = v14[58];
    a2[15] = v28;
    v29 = v14[63];
    if ( v29 == -1 )
      v29 = v14[62];
    a2[16] = v29;
    v30 = *(_QWORD *)(v10 + 17680);
    if ( !*(_DWORD *)(v10 + 17672) )
      GetDWORDSettingValuesEx(3LL, *(_QWORD *)(v10 + 17680), 1u, 0);
    v31 = *(_DWORD *)(v30 + 12);
    if ( v31 == -1 )
      v31 = *(_DWORD *)(v30 + 8);
    a2[4] = v31;
    return 1;
  }
  if ( v11 == 32 )
  {
    v12 = *(_QWORD *)(UserSessionState + 18560);
    if ( !*(_DWORD *)(UserSessionState + 18552)
      && (unsigned int)GetDWORDSettingValuesEx(9LL, *(_QWORD *)(UserSessionState + 18560), 1u, 0) )
    {
      *(_DWORD *)(v10 + 18552) = 1;
    }
    v13 = *(_DWORD *)(v12 + 12);
    if ( v13 == -1 )
      v13 = *(_DWORD *)(v12 + 8);
    *a2 = v13;
    return 1;
  }
  return v5;
}
