/*
 * XREFs of xxxDrawWindowFrame @ 0x14025CE6C
 * Callers:
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1401CF77C (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402BE800 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetWindowBorders @ 0x140044DD8 (GetWindowBorders.c)
 *     xxxDrawCaptionBar @ 0x140044E0C (xxxDrawCaptionBar.c)
 *     GetCaptionHeight @ 0x140049968 (GetCaptionHeight.c)
 *     GetRect @ 0x140052B80 (GetRect.c)
 *     IsVisible @ 0x140053FD8 (IsVisible.c)
 *     DrawEdge @ 0x1400552A8 (DrawEdge.c)
 *     xxxMenuBarDraw @ 0x14020258C (xxxMenuBarDraw.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x140281C38 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ @ 0x1402AC9D0 (-UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ.c)
 *     xxxClientDrawScrollBar @ 0x1402BD894 (xxxClientDrawScrollBar.c)
 *     xxxClientDrawSize @ 0x1402BD958 (xxxClientDrawSize.c)
 *     DrawSize @ 0x1402E4C0C (DrawSize.c)
 *     xxxDrawScrollBar @ 0x1402E847C (xxxDrawScrollBar.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

char __fastcall xxxDrawWindowFrame(struct tagWND *a1, HDC a2, __int16 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // r8d
  unsigned int WindowBorders; // esi
  unsigned __int32 v12; // r12d
  _BYTE *v13; // rcx
  char v14; // dl
  int v15; // r8d
  __int64 v16; // rdx
  struct tagTHREADINFO *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int32 v20; // r12d
  __int64 v21; // rax
  Scrollbar::NonClient *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  Scrollbar::NonClient *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  Scrollbar::NonClient *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __m128i v32; // [rsp+20h] [rbp-30h] BYREF
  __int128 v33; // [rsp+30h] [rbp-20h] BYREF

  v33 = 0LL;
  LODWORD(v6) = IsVisible((__int64)a1);
  if ( (_DWORD)v6 )
  {
    v8 = *(_QWORD *)(v7 + 40);
    LOBYTE(v6) = *(_BYTE *)(v8 + 17) & 0x81;
    if ( (_BYTE)v6 != 1 )
    {
      if ( *(_QWORD *)(v8 + 88) != *(_QWORD *)(v8 + 104) || (v6 = *(_QWORD *)(v8 + 96), v6 != *(_QWORD *)(v8 + 112)) )
      {
        if ( *(_QWORD *)(v8 + 136) || (LODWORD(v6) = GreGetClipBox(a2, &v33, 1LL), (_DWORD)v6 != 1) )
        {
          v9 = *((_QWORD *)a1 + 5);
          v32 = 0LL;
          if ( (*(_BYTE *)(v9 + 31) & 0x20) == 0 || (*(_BYTE *)(v9 + 17) & 1) != 0 )
          {
            WindowBorders = GetWindowBorders(*(_DWORD *)(v9 + 28), *(_DWORD *)(v9 + 24));
            GetRect((__int64)a1, (__int64)&v32, 34);
            v32.m128i_i32[0] += WindowBorders;
            v12 = v32.m128i_i32[1] + WindowBorders;
            v32.m128i_i32[2] -= WindowBorders;
            v32.m128i_i32[3] -= WindowBorders;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 1) != 0 && (a3 & 0x2000) == 0 )
              v12 += xxxMenuBarDraw(a1, a2, WindowBorders, WindowBorders);
            v13 = (_BYTE *)*((_QWORD *)a1 + 5);
            v14 = v13[30];
            if ( (v14 & 0xC0) != 0
              || (v13[24] & 1) != 0
              || (v14 & 4) != 0
              || (v13[25] & 1) != 0
              || (v13[26] & 2) != 0 && (v13[17] & 1) == 0 )
            {
              v15 = a3 & 0x2000 | 0x900D;
              if ( (a3 & 1) == 0 )
                v15 = a3 & 0x2000 | 0x900C;
              xxxDrawCaptionBar(a1, a2, v15 | 0x800);
            }
            v20 = GetCaptionHeight((__int64)a1) + v12;
            v21 = *((_QWORD *)a1 + 5);
            v32.m128i_i32[1] = v20;
            if ( (*(_BYTE *)(v21 + 20) & 0x10) != 0 )
            {
              WindowBorders += 2;
              DrawEdge(a2, &v32, 0xAu, 8207);
            }
            LOBYTE(v17) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL);
            if ( ((unsigned __int8)v17 & 2) != 0 && (a3 & 0x2000) == 0 )
            {
              if ( ((unsigned __int8)v17 & 4) != 0 )
              {
                if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline(
                                     v17,
                                     v16,
                                     v18,
                                     v19)
                  && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v22) )
                {
                  v17 = PtiCurrent(v24, v23);
                  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v17 + 132, 0, 0) & 1) == 0 )
                    xxxClientDrawSize(
                      *(_QWORD *)a1,
                      a2,
                      WindowBorders,
                      WindowBorders,
                      v32.m128i_i64[0],
                      v32.m128i_i64[1],
                      v33,
                      *((_QWORD *)&v33 + 1));
                }
                else
                {
                  DrawSize(
                    a1,
                    a2,
                    WindowBorders,
                    WindowBorders,
                    v32.m128i_i64[0],
                    v32.m128i_i64[1],
                    v33,
                    *((_QWORD *)&v33 + 1));
                }
              }
              if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline(
                                   v17,
                                   v16,
                                   v18,
                                   v19)
                && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v25) )
              {
                v17 = PtiCurrent(v27, v26);
                if ( (_InterlockedCompareExchange((volatile signed __int32 *)v17 + 132, 0, 0) & 1) == 0 )
                  xxxClientDrawScrollBar(*(_QWORD *)a1, a2, 1LL);
              }
              else
              {
                xxxDrawScrollBar(a1, a2, 1);
              }
            }
            v6 = *((_QWORD *)a1 + 5);
            if ( (*(_BYTE *)(v6 + 16) & 4) != 0 && (a3 & 0x2000) == 0 )
            {
              if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline(
                                   v17,
                                   v16,
                                   v18,
                                   v19)
                && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v28) )
              {
                LOBYTE(v6) = _InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v30, v29) + 132, 0, 0);
                if ( (v6 & 1) == 0 )
                  LOBYTE(v6) = xxxClientDrawScrollBar(*(_QWORD *)a1, a2, 0LL);
              }
              else
              {
                LOBYTE(v6) = xxxDrawScrollBar(a1, a2, 0);
              }
            }
          }
          else
          {
            v10 = ((*(_BYTE *)(v9 + 16) & 0x40 | 0x240300u) >> 6) | 0x2000;
            if ( (a3 & 0x2000) == 0 )
              v10 = (*(_BYTE *)(v9 + 16) & 0x40 | 0x240300u) >> 6;
            LOBYTE(v6) = xxxDrawCaptionBar(a1, a2, v10);
          }
        }
      }
    }
  }
  return v6;
}
