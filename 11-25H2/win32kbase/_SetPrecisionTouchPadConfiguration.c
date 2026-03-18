/*
 * XREFs of _SetPrecisionTouchPadConfiguration @ 0x1401B4FC0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1400A70D0 (xxxSystemParametersInfo.c)
 *     UnpackTouchpadSettings @ 0x140217698 (UnpackTouchpadSettings.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x1400A8400 (BroadcastSettingsUpdateToAllContainers.c)
 *     ResetAccelerationCurves @ 0x14012B760 (ResetAccelerationCurves.c)
 *     UpdateTPCurrentActiveState @ 0x14012F2E0 (UpdateTPCurrentActiveState.c)
 *     IsValidMouseSensitivity @ 0x140141330 (IsValidMouseSensitivity.c)
 *     CBaseInput::ForEachDevice__lambda_6d565e9c04b8a87d3a6068a881f4d702___ @ 0x1401B4A98 (CBaseInput--ForEachDevice__lambda_6d565e9c04b8a87d3a6068a881f4d702___.c)
 *     WriteSettingValues @ 0x1401B9630 (WriteSettingValues.c)
 */

__int64 __fastcall SetPrecisionTouchPadConfiguration(__m128i *a1, __int64 a2)
{
  _DWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _DWORD *UserSessionState; // rbx
  unsigned __int32 v8; // r14d
  unsigned int v9; // r15d
  unsigned int v10; // r12d
  unsigned int v11; // r13d
  int v12; // esi
  unsigned int v13; // eax
  __m128i v14; // xmm2
  __int64 v15; // rcx
  unsigned int v16; // edi
  unsigned int v17; // r8d
  __int64 v18; // rdx
  unsigned int v19; // eax
  struct W32_PUSH_LOCK *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v28; // [rsp+20h] [rbp-48h]
  unsigned __int64 v29; // [rsp+38h] [rbp-30h]
  unsigned int v30; // [rsp+B0h] [rbp+48h]
  int v31; // [rsp+B8h] [rbp+50h]
  int v32; // [rsp+C0h] [rbp+58h]

  v31 = a2;
  v3 = (_DWORD *)(W32GetUserSessionState(a1, a2) + 17696);
  UserSessionState = (_DWORD *)W32GetUserSessionState(v5, v4);
  if ( a1 && a1->m128i_i32[0] <= 1u )
  {
    if ( a1->m128i_i32[0] )
    {
      v14 = a1[1];
      v13 = a1[2].m128i_u32[2];
      v8 = a1[1].m128i_u32[2];
      v11 = HIDWORD(a1[2].m128i_i64[0]);
      v10 = a1[2].m128i_i64[0];
      v9 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 12));
      v32 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 4));
      HIDWORD(v29) = v14.m128i_i32[1];
      v12 = _mm_cvtsi128_si32(v14);
    }
    else
    {
      v8 = a1[1].m128i_u32[0];
      v9 = a1[1].m128i_i8[5];
      v10 = a1[1].m128i_i8[6];
      v11 = UserSessionState[4201];
      v32 = a1->m128i_i32[2];
      v6 = a1->m128i_i32[3] & 0x180;
      v12 = a1[1].m128i_i32[1] & 0x41 | v6 | (2
                                            * (a1[1].m128i_i32[1] & 4 | (8
                                                                       * (a1[1].m128i_i32[1] & 2 | (4
                                                                                                  * (a1->m128i_i32[3] & 8)))))) | ((a1->m128i_i32[3] & 0x400 | ((a1->m128i_i32[3] & 0x200 | (a1[1].m128i_i32[1] >> 16) & 0x100u) >> 1)) >> 6);
      v13 = UserSessionState[4202];
      v29 = __PAIR64__(v32, v12);
    }
    v30 = v13;
    v3[3] = UserSessionState[4197];
    if ( HIDWORD(v29) > 4 )
      v32 = UserSessionState[4197];
    else
      v3[3] = HIDWORD(v29);
    v3[7] = UserSessionState[4198];
    if ( IsValidMouseSensitivity(v8, v6) )
      v3[7] = v8;
    else
      v8 = UserSessionState[4198];
    v3[11] = UserSessionState[4199];
    if ( v9 > 0x64 )
      v9 = UserSessionState[4199];
    else
      v3[11] = v9;
    v3[15] = UserSessionState[4200];
    if ( v10 > 0x64 )
      v10 = UserSessionState[4200];
    else
      v3[15] = v10;
    v3[59] = UserSessionState[4201];
    if ( v11 > 0x64 )
      v11 = UserSessionState[4201];
    else
      v3[59] = v11;
    v15 = v30;
    v3[63] = UserSessionState[4202];
    if ( v30 > 0x64 )
      v30 = UserSessionState[4202];
    else
      v3[63] = v30;
    v3[19] = -(v12 & 1);
    v28 = -__CFSHR__(v12, 2);
    v3[23] = v28;
    v3[27] = -__CFSHR__(v12, 3);
    v3[31] = -__CFSHR__(v12, 4);
    v3[35] = -__CFSHR__(v12, 5);
    v3[39] = -__CFSHR__(v12, 6);
    v3[43] = -__CFSHR__(v12, 7);
    v3[47] = -__CFSHR__(v12, 8);
    v3[51] = -__CFSHR__(v12, 9);
    v3[55] = -__CFSHR__(v12, 10);
    if ( v31 )
    {
      v16 = WriteSettingValues(0LL, v3, 16LL);
      if ( !v16 )
        return v16;
    }
    else
    {
      v16 = 1;
    }
    v17 = UserSessionState[4196] & 0xFFFFFC02;
    v18 = v12 & 0x3FD;
    UserSessionState[4197] = v32;
    UserSessionState[4196] = v18 | v17;
    UserSessionState[4201] = v11;
    UserSessionState[4202] = v30;
    if ( UserSessionState[4198] != v8 )
    {
      UserSessionState[4198] = v8;
      ResetAccelerationCurves(1LL, v18);
    }
    if ( UserSessionState[4199] != v9 || UserSessionState[4200] != v10 || -__CFSHR__(UserSessionState[4196], 2) != v28 )
    {
      v19 = UserSessionState[4196] & 0xFFFFFFFD;
      UserSessionState[4199] = v9;
      UserSessionState[4200] = v10;
      UserSessionState[4196] = v12 & 2 | v19;
      v20 = *(struct W32_PUSH_LOCK **)(*(_QWORD *)(W32GetUserSessionState(v15, v18) + 16840) + 1232LL);
      W32AcquirePushLockSharedEx(v20, 0);
      v23 = W32GetUserSessionState(v22, v21);
      CBaseInput::ForEachDevice__lambda_6d565e9c04b8a87d3a6068a881f4d702___(*(_QWORD *)(v23 + 16840), v24);
      ExReleasePushLockSharedEx(v20, 0LL);
      KeLeaveCriticalRegion();
    }
    UpdateTPCurrentActiveState(v15, v18);
    BroadcastSettingsUpdateToAllContainers(v26, v25);
    return v16;
  }
  return 0LL;
}
