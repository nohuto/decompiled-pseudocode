/*
 * XREFs of ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1400658A8
 * Callers:
 *     ?BoundPoint@CCursorClip@@QEAA?AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x1400653C0 (-BoundPoint@CCursorClip@@QEAA-AW4ClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mous.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dddddddddddd @ 0x140065E44 (WPP_RECORDER_AND_TRACE_SF_dddddddddddd.c)
 *     ?ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z @ 0x1400661B4 (-ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStrategy@2@@Z @ 0x140066470 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@W4FindRegionStra.c)
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BB1E0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?ApplySpeedBumpAndCornerLock@CCursorClip@@AEAA_NPEAUtagPOINT@@@Z @ 0x140135384 (-ApplySpeedBumpAndCornerLock@CCursorClip@@AEAA_NPEAUtagPOINT@@@Z.c)
 *     ?SpeedBumpCornerLock@Cursor@InputTraceLogging@@SAXAEBUtagPOINT@@@Z @ 0x140150540 (-SpeedBumpCornerLock@Cursor@InputTraceLogging@@SAXAEBUtagPOINT@@@Z.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F743C (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

char __fastcall CCursorClip::BoundPointToRegions(CCursorClip *a1, struct tagPOINT a2, char a3, struct tagPOINT *a4)
{
  _OWORD *v4; // r15
  struct tagRECT v5; // xmm1
  unsigned __int64 v7; // xmm0_8
  LONG left; // edi
  LONG right; // r13d
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  char v12; // si
  unsigned __int64 v13; // rdx
  char v14; // r14
  struct tagPOINT v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  _OWORD *v18; // rax
  __int128 v19; // xmm0
  __int64 v20; // rdx
  LONG v21; // eax
  LONG v22; // eax
  LONG v23; // eax
  LONG y; // ecx
  LONG v25; // eax
  __int64 UserSessionState; // rax
  int v27; // r8d
  int v28; // edx
  struct tagPOINT v29; // rax
  bool v30; // al
  __int64 v31; // rax
  bool v33; // [rsp+A0h] [rbp-39h]
  char v35; // [rsp+A8h] [rbp-31h]
  __int64 v36; // [rsp+B0h] [rbp-29h] BYREF
  tagDomLock *v37; // [rsp+B8h] [rbp-21h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-19h]
  CCursorClip *v39; // [rsp+C8h] [rbp-11h]
  struct tagPOINT v40; // [rsp+D0h] [rbp-9h] BYREF
  struct tagPOINT v41; // [rsp+D8h] [rbp-1h]
  struct tagRECT v42; // [rsp+E0h] [rbp+7h] BYREF

  v4 = (_OWORD *)((char *)a1 + 48);
  v5 = (struct tagRECT)*((_OWORD *)a1 + 3);
  v39 = a1;
  v41 = a2;
  *a4 = a2;
  v7 = _mm_srli_si128((__m128i)v5, 8).m128i_u64[0];
  left = v5.left;
  right = v7;
  v38 = *(_QWORD *)&v5.left;
  v42 = v5;
  if ( a2.x < (int)v7 && a2.x >= v5.left )
  {
    a1 = (CCursorClip *)HIDWORD(*(unsigned __int64 *)&a2);
    if ( a2.y >= v5.top )
    {
      v10 = HIDWORD(v7);
      if ( a2.y < SHIDWORD(v7) )
        return v10;
    }
  }
  if ( v5.left >= (int)v7 || (a1 = (CCursorClip *)HIDWORD(v7), v5.top >= SHIDWORD(v7)) )
  {
    v36 = 0LL;
    v31 = ((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)(a1, a2);
    CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v37, (struct CEResourceLock *)(v31 + 18640));
    v12 = 1;
    v35 = 1;
    v17 = 1LL;
LABEL_18:
    if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))InputConfig::Mouse::RegionFromPoint)(
                            *a4,
                            &v36,
                            v17) )
    {
      v18 = (_OWORD *)v36;
      *v4 = *(_OWORD *)v36;
      v4[1] = v18[1];
      v4[2] = v18[2];
      v4[3] = v18[3];
      v4[4] = v18[4];
      v4[5] = v18[5];
      v4[6] = v18[6];
      v19 = v18[7];
      v18 += 8;
      v4[7] = v19;
      v4[8] = *v18;
      v4[9] = v18[1];
      v4[10] = v18[2];
      v4[11] = v18[3];
      *((_QWORD *)v4 + 24) = *((_QWORD *)v18 + 8);
    }
    goto LABEL_20;
  }
  v36 = 0LL;
  v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)(a1, a2);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v37, (struct CEResourceLock *)(v11 + 18640));
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))InputConfig::Mouse::RegionFromPoint)(*a4, &v36, 0LL);
  v12 = 1;
  v35 = 1;
  if ( !v36 )
    goto LABEL_35;
  v13 = *(_QWORD *)&v5.left - *(_QWORD *)v36;
  if ( *(_QWORD *)&v5.left == *(_QWORD *)v36 )
    v13 = v7 - *(_QWORD *)(v36 + 8);
  if ( v13 )
    v14 = 1;
  else
LABEL_35:
    v14 = 0;
  v29 = *a4;
  v40 = *a4;
  if ( (!v36
     && (a3 & 4) != 0
     && (v30 = CCursorClip::DeadzoneJumping::ApplyDeadZoneJumpIfNeeded(
                 (CCursorClip *)((char *)v39 + 272),
                 v29,
                 &v42,
                 &v40),
         left = v42.left,
         right = v42.right,
         v38 = *(_QWORD *)&v42.left,
         v30)
     || v14)
    && (a3 & 1) != 0
    && CCursorClip::ApplySpeedBumpAndCornerLock(v39, a4) )
  {
    InputTraceLogging::Cursor::SpeedBumpCornerLock(a4);
  }
  else
  {
    *a4 = v40;
  }
  v15 = *a4;
  if ( a4->x >= right
    || v15.x < left
    || (v16 = HIDWORD(*(unsigned __int64 *)&v15), (int)v16 >= v42.bottom)
    || (int)v16 < v42.top )
  {
    v17 = 0LL;
    goto LABEL_18;
  }
LABEL_20:
  tagDomLock::UnLockExclusive(v37);
  v21 = *(_DWORD *)v4;
  if ( a4->x >= *(_DWORD *)v4 )
  {
    v22 = *((_DWORD *)v4 + 2);
    if ( a4->x < v22 )
      goto LABEL_24;
    v21 = v22 - 1;
  }
  a4->x = v21;
LABEL_24:
  v23 = *((_DWORD *)v4 + 1);
  y = a4->y;
  if ( y >= v23 )
  {
    v25 = *((_DWORD *)v4 + 3);
    if ( y < v25 )
      goto LABEL_28;
    v23 = v25 - 1;
  }
  a4->y = v23;
LABEL_28:
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v12 = 0;
    v35 = 0;
  }
  LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
    LOBYTE(v27) = v33;
    LOBYTE(v28) = v35;
    LOBYTE(v10) = WPP_RECORDER_AND_TRACE_SF_dddddddddddd(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v28,
                    v27,
                    *(_QWORD *)(UserSessionState + 69144));
  }
  return v10;
}
