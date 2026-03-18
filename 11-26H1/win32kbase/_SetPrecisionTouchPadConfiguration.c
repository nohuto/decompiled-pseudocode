/*
 * XREFs of _SetPrecisionTouchPadConfiguration @ 0x1401BA808
 * Callers:
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 *     UnpackTouchpadSettings @ 0x14021C8D4 (UnpackTouchpadSettings.c)
 * Callees:
 *     ResetAccelerationCurves @ 0x14008E3D0 (ResetAccelerationCurves.c)
 *     UpdateTPCurrentActiveState @ 0x140163F00 (UpdateTPCurrentActiveState.c)
 *     IsValidMouseSensitivity @ 0x14017AED0 (IsValidMouseSensitivity.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x1401C5BB0 (BroadcastSettingsUpdateToAllContainers.c)
 *     CBaseInput::ForEachDevice__lambda_5adfe49bbdf306a9ff7721a0af415f46___ @ 0x1401D76E0 (CBaseInput--ForEachDevice__lambda_5adfe49bbdf306a9ff7721a0af415f46___.c)
 *     WriteSettingValues @ 0x1401DFD70 (WriteSettingValues.c)
 */

__int64 __fastcall SetPrecisionTouchPadConfiguration(__m128i *a1, int a2, int a3)
{
  _DWORD *v4; // rdi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  _DWORD *UserSessionState; // rbx
  int v10; // r8d
  int v11; // ebp
  unsigned int v12; // r14d
  unsigned int v13; // r15d
  unsigned int v14; // r13d
  unsigned int v15; // r12d
  unsigned int v16; // esi
  __m128i v17; // xmm3
  __m128i v18; // xmm2
  int v19; // ecx
  unsigned int v20; // edi
  unsigned int v21; // edx
  int v22; // r8d
  unsigned int v23; // eax
  __int64 v24; // rbx
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // rax
  unsigned __int64 v30; // [rsp+30h] [rbp-68h]
  int v31; // [rsp+A0h] [rbp+8h]
  int v33; // [rsp+B8h] [rbp+20h]

  v4 = (_DWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 17688);
  UserSessionState = (_DWORD *)W32GetUserSessionState(v6, v5, v7);
  if ( a1 && a1->m128i_i32[0] <= 2u )
  {
    if ( a1->m128i_i32[0] )
    {
      v17 = a1[1];
      v15 = a1[2].m128i_u32[2];
      v18 = a1[2];
      v11 = a1[1].m128i_i32[2];
      v16 = _mm_cvtsi128_si32(v17);
      v12 = _mm_cvtsi128_si32(_mm_srli_si128(v17, 12));
      v31 = _mm_cvtsi128_si32(_mm_srli_si128(v17, 4));
      HIDWORD(v30) = v17.m128i_i32[1];
      v14 = _mm_cvtsi128_si32(_mm_srli_si128(v18, 4));
      v13 = _mm_cvtsi128_si32(v18);
    }
    else
    {
      v11 = a1[1].m128i_i32[0];
      v12 = a1[1].m128i_i8[5];
      v13 = a1[1].m128i_i8[6];
      v14 = UserSessionState[4199];
      v15 = UserSessionState[4200];
      v31 = a1->m128i_i32[2];
      v10 = a1->m128i_i32[3] & 0x180;
      v8 = a1[1].m128i_i32[1] & 0x41;
      v16 = v10 | v8 | (2 * (a1[1].m128i_i32[1] & 4 | (8 * (a1[1].m128i_i32[1] & 2 | (4 * (a1->m128i_i32[3] & 8)))))) | ((a1->m128i_i32[3] & 0x400 | ((a1->m128i_i32[3] & 0x200 | (a1[1].m128i_i32[1] >> 16) & 0x100u) >> 1)) >> 6);
      v30 = __PAIR64__(v31, v16);
    }
    v4[3] = UserSessionState[4195];
    if ( HIDWORD(v30) > 4 )
      v31 = UserSessionState[4195];
    else
      v4[3] = HIDWORD(v30);
    v4[7] = UserSessionState[4196];
    if ( IsValidMouseSensitivity(v11, v8, v10) )
      v4[7] = v11;
    else
      v11 = UserSessionState[4196];
    v4[11] = UserSessionState[4197];
    if ( v12 > 0x64 )
      v12 = UserSessionState[4197];
    else
      v4[11] = v12;
    v4[15] = UserSessionState[4198];
    if ( v13 > 0x64 )
      v13 = UserSessionState[4198];
    else
      v4[15] = v13;
    v4[59] = UserSessionState[4199];
    if ( v14 > 0x64 )
      v14 = UserSessionState[4199];
    else
      v4[59] = v14;
    v4[63] = UserSessionState[4200];
    if ( v15 > 0x64 )
      v15 = UserSessionState[4200];
    else
      v4[63] = v15;
    v4[19] = -(v16 & 1);
    v33 = -__CFSHR__(v16, 2);
    v4[23] = v33;
    v4[27] = -__CFSHR__(v16, 3);
    v4[31] = -__CFSHR__(v16, 4);
    v4[35] = -__CFSHR__(v16, 5);
    v4[39] = -__CFSHR__(v16, 6);
    v4[43] = -__CFSHR__(v16, 7);
    v4[47] = -__CFSHR__(v16, 8);
    v4[51] = -__CFSHR__(v16, 9);
    v4[55] = -__CFSHR__(v16, 10);
    if ( a2 )
    {
      v20 = WriteSettingValues(0LL, v4, 16LL);
      if ( !v20 )
        return v20;
    }
    else
    {
      v20 = 1;
    }
    v21 = UserSessionState[4194] & 0xFFFFFC02;
    UserSessionState[4195] = v31;
    v22 = v21 | v16 & 0x3FD;
    UserSessionState[4199] = v14;
    UserSessionState[4194] = v22;
    UserSessionState[4200] = v15;
    if ( UserSessionState[4196] != v11 )
    {
      UserSessionState[4196] = v11;
      ResetAccelerationCurves(1, v21, v22);
    }
    if ( UserSessionState[4197] != v12 || UserSessionState[4198] != v13 || -__CFSHR__(UserSessionState[4194], 2) != v33 )
    {
      v23 = UserSessionState[4194] & 0xFFFFFFFD;
      UserSessionState[4197] = v12;
      UserSessionState[4198] = v13;
      UserSessionState[4194] = v16 & 2 | v23;
      v24 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v19, v21, v22) + 16832) + 1232LL);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v24, 0LL);
      v28 = W32GetUserSessionState(v26, v25, v27);
      CBaseInput::ForEachDevice__lambda_5adfe49bbdf306a9ff7721a0af415f46___(*(_QWORD *)(v28 + 16832));
      ExReleasePushLockSharedEx(v24, 0LL);
      KeLeaveCriticalRegion();
    }
    UpdateTPCurrentActiveState(v19, v21, v22);
    BroadcastSettingsUpdateToAllContainers();
    return v20;
  }
  return 0LL;
}
