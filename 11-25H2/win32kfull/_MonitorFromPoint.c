/*
 * XREFs of _MonitorFromPoint @ 0x140091A70
 * Callers:
 *     GetDPITransformationMonitor @ 0x140044BBC (GetDPITransformationMonitor.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     NtUserCalculatePopupWindowPosition @ 0x140159D30 (NtUserCalculatePopupWindowPosition.c)
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x14020E040 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1402507C4 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     zzzResetSharedDesktops @ 0x1402557F0 (zzzResetSharedDesktops.c)
 *     ?xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x14025D178 (-xxxCreateTooltip@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     zzzStartSonar @ 0x140287B4C (zzzStartSonar.c)
 *     ?HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1402A732C (-HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THR.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D8AA4 (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402DA4C0 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetMonitorRectForDpi @ 0x140091044 (GetMonitorRectForDpi.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromPoint(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbp
  INT v6; // ebx
  __int64 v7; // rcx
  __int64 DispInfo; // rdi
  INT v10; // esi
  __int64 v11; // r13
  unsigned int v12; // r8d
  __int64 v13; // rcx
  INT v14; // r14d
  INT v15; // edx
  INT v16; // edi
  INT v17; // r15d
  INT v18; // esi
  __m128i v19; // xmm6
  INT v20; // ebp
  INT v21; // eax
  int v22; // esi
  INT v23; // eax
  unsigned int v24; // edx
  int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // edx
  __int64 v28; // r14
  unsigned __int64 v29; // r15
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbp
  INT v36; // r14d
  int v37; // edx
  int v38; // eax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  INT a[4]; // [rsp+30h] [rbp-78h] BYREF
  int v42; // [rsp+40h] [rbp-68h]
  __int64 v43; // [rsp+48h] [rbp-60h]
  __int64 v44; // [rsp+50h] [rbp-58h]

  v3 = 0LL;
  v43 = a1;
  v44 = 0LL;
  v6 = a1;
  DispInfo = GetDispInfo();
  if ( **(_DWORD **)DispInfo == 1 && a2 )
    return *(_QWORD *)(GetDispInfo() + 104);
  if ( !a3 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v7);
    v32 = CurrentThreadDpiAwarenessContext;
    a3 = CurrentThreadDpiAwarenessContext;
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 )
    {
      LOBYTE(v32) = CurrentThreadDpiAwarenessContext & 0xF;
      if ( !*((_QWORD *)PtiCurrent(v32, v31) + 62)
        || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v34, v33) + 62) + 8LL) + 64LL) & 1) == 0 )
      {
        a3 = 18;
      }
    }
  }
  if ( a2 == 2 )
  {
    v10 = HIDWORD(v43);
    if ( (unsigned int)(v6 + 0x8000) > 0xFFFF || (unsigned int)(HIDWORD(v43) + 0x8000) > 0xFFFF )
    {
      v28 = *(_QWORD *)(DispInfo + 112);
      v29 = -1LL;
      while ( v28 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v28 + 40) + 24LL) & 1) != 0 )
        {
          GetMonitorRectForDpi((__m128i *)a, v28, (a3 >> 8) & 0x1FF);
          if ( v6 < a[0] )
            v37 = a[0] - v6;
          else
            v37 = v6 < a[2] ? 0 : v6 - a[2] + 1;
          if ( v37 < v29 )
          {
            if ( v10 < a[1] )
            {
              v38 = a[1] - v10;
            }
            else if ( v10 < a[3] )
            {
              if ( !v37 )
                return v28;
              v38 = 0;
            }
            else
            {
              v38 = v10 - a[3] + 1;
            }
            v39 = v37 * (__int64)v37;
            if ( v39 < v29 && v38 + v39 < v29 )
            {
              v40 = v38 * (__int64)v38 + v39;
              if ( v40 < v29 )
              {
                v29 = v40;
                v3 = v28;
              }
            }
          }
        }
        v28 = *(_QWORD *)(v28 + 56);
      }
    }
    else
    {
      v11 = *(_QWORD *)(DispInfo + 112);
      v12 = -1;
      v42 = -1;
      while ( v11 )
      {
        v13 = *(_QWORD *)(v11 + 40);
        if ( (*(_DWORD *)(v13 + 24) & 1) != 0 )
        {
          v14 = *(unsigned __int16 *)(v13 + 60);
          v15 = *(unsigned __int16 *)(v13 + 62);
          *(_OWORD *)a = *(_OWORD *)(v13 + 28);
          if ( ((a3 >> 8) & 0x1FF) != 0 )
          {
            v16 = v15;
            v17 = (a3 >> 8) & 0x1FF;
            v18 = EngMulDiv(a[0], v17, v15);
            v19 = *(__m128i *)a;
            v20 = EngMulDiv(a[1], v17, v16);
            v21 = v18 + EngMulDiv(0, v17, v14);
            v22 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)a, 4));
            a[0] = v21;
            a[1] = v20 + EngMulDiv(v22 - a[1], v17, v14);
            a[2] = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v19, 8)) - _mm_cvtsi128_si32(v19), v17, v14) + a[0];
            v23 = EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v19, 12)) - v22, v17, v14);
            v10 = HIDWORD(v43);
            v3 = v44;
            v12 = v42;
            a[3] = v23 + a[1];
          }
          if ( v6 < a[0] )
            v24 = a[0] - v6;
          else
            v24 = v6 >= a[2] ? v6 - a[2] + 1 : 0;
          if ( v24 < v12 )
          {
            if ( v10 < a[1] )
            {
              v25 = a[1] - v10;
            }
            else if ( v10 >= a[3] )
            {
              v25 = v10 - a[3] + 1;
            }
            else
            {
              if ( !v24 )
                return v11;
              v25 = 0;
            }
            v26 = v24 * v24;
            if ( v26 < v12 && v26 + v25 < v12 )
            {
              v27 = v25 * v25 + v26;
              if ( v27 < v12 )
              {
                v12 = v27;
                v42 = v27;
                v3 = v11;
                v44 = v11;
              }
            }
          }
        }
        v11 = *(_QWORD *)(v11 + 56);
      }
    }
    return v3;
  }
  else
  {
    if ( a2 >= 2 )
      return 0LL;
    v35 = *(_QWORD *)(DispInfo + 112);
    v36 = HIDWORD(v43);
    while ( v35 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v35 + 40) + 24LL) & 1) != 0 )
      {
        GetMonitorRectForDpi((__m128i *)a, v35, (a3 >> 8) & 0x1FF);
        if ( v6 >= a[0] && v6 < a[2] && v36 >= a[1] && v36 < a[3] )
          return v35;
      }
      v35 = *(_QWORD *)(v35 + 56);
    }
    if ( a2 == 1 )
      return *(_QWORD *)(GetDispInfo() + 104);
    else
      return 0LL;
  }
}
