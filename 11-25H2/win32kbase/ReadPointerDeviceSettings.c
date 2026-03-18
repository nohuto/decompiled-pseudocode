/*
 * XREFs of ReadPointerDeviceSettings @ 0x1400A7F80
 * Callers:
 *     xxxSystemParametersInfo @ 0x1400A70D0 (xxxSystemParametersInfo.c)
 *     _lambda_a418699817c89276d1581a788dfe45e0_::_lambda_invoker_cdecl_ @ 0x14019B000 (_lambda_a418699817c89276d1581a788dfe45e0_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1400B14CC (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     GetDWORDSettingValuesEx @ 0x1400B2B50 (GetDWORDSettingValuesEx.c)
 *     ApiSetEditionOverrideUserTouchGestureSettings @ 0x1401961CC (ApiSetEditionOverrideUserTouchGestureSettings.c)
 */

__int64 __fastcall ReadPointerDeviceSettings(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  unsigned int v4; // esi
  __int64 UserSessionState; // rax
  __int64 v6; // rbp
  int v7; // ebx
  __int64 v8; // r14
  int v9; // eax
  _DWORD *v10; // rdx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
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
  __int64 v26; // r14
  int v27; // eax

  v3 = a1;
  v4 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = UserSessionState;
  v7 = v3 - 146;
  if ( !v7 )
  {
    if ( !*(_DWORD *)(UserSessionState + 17648) || !*(_DWORD *)(UserSessionState + 17680) )
      LoadPointerDeviceTouchSettings();
    ApiSetEditionOverrideUserTouchGestureSettings(*(_QWORD *)(v6 + 17656), *(_QWORD *)(v6 + 17688));
    v10 = *(_DWORD **)(v6 + 17656);
    *a2 = (unsigned int)(v10[3] - 1) > 0xFFFFFFFD;
    v11 = v10[7];
    if ( v11 == -1 )
      v11 = v10[6];
    a2[1] = v11;
    v12 = v10[11];
    if ( v12 == -1 )
      v12 = v10[10];
    a2[2] = v12;
    v13 = v10[15];
    if ( v13 == -1 )
      v13 = v10[14];
    a2[3] = v13;
    v14 = v10[19];
    if ( v14 == -1 )
      v14 = v10[18];
    a2[5] = v14;
    v15 = v10[23];
    if ( v15 == -1 )
      v15 = v10[22];
    a2[6] = v15;
    v16 = v10[27];
    if ( v16 == -1 )
      v16 = v10[26];
    a2[7] = v16;
    v17 = v10[31];
    if ( v17 == -1 )
      v17 = v10[30];
    a2[8] = v17;
    v18 = v10[35];
    if ( v18 == -1 )
      v18 = v10[34];
    a2[9] = v18;
    v19 = v10[39];
    if ( v19 == -1 )
      v19 = v10[38];
    a2[10] = v19;
    v20 = v10[43];
    if ( v20 == -1 )
      v20 = v10[42];
    a2[11] = v20;
    v21 = v10[47];
    if ( v21 == -1 )
      v21 = v10[46];
    a2[12] = v21;
    v22 = v10[51];
    if ( v22 == -1 )
      v22 = v10[50];
    a2[13] = v22;
    v23 = v10[55];
    if ( v23 == -1 )
      v23 = v10[54];
    a2[14] = v23;
    v24 = v10[59];
    if ( v24 == -1 )
      v24 = v10[58];
    a2[15] = v24;
    v25 = v10[63];
    if ( v25 == -1 )
      v25 = v10[62];
    a2[16] = v25;
    v26 = *(_QWORD *)(v6 + 17688);
    if ( !*(_DWORD *)(v6 + 17680) )
      GetDWORDSettingValuesEx(3LL, *(_QWORD *)(v6 + 17688), 1LL);
    v27 = *(_DWORD *)(v26 + 12);
    if ( v27 == -1 )
      v27 = *(_DWORD *)(v26 + 8);
    a2[4] = v27;
    return 1;
  }
  if ( v7 == 32 )
  {
    v8 = *(_QWORD *)(UserSessionState + 18568);
    if ( !*(_DWORD *)(UserSessionState + 18560)
      && (unsigned int)GetDWORDSettingValuesEx(9LL, *(_QWORD *)(UserSessionState + 18568), 1LL) )
    {
      *(_DWORD *)(v6 + 18560) = 1;
    }
    v9 = *(_DWORD *)(v8 + 12);
    if ( v9 == -1 )
      v9 = *(_DWORD *)(v8 + 8);
    *a2 = v9;
    return 1;
  }
  return v4;
}
