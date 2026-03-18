/*
 * XREFs of ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x14025F678
 * Callers:
 *     xxxDrawScrollBar @ 0x1402E847C (xxxDrawScrollBar.c)
 * Callees:
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     DrawFrameControl @ 0x140054934 (DrawFrameControl.c)
 *     GreSetTextColor @ 0x140056CB4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140056D44 (GreSetBkColor.c)
 *     xxxDefWindowProc @ 0x1400C36C0 (xxxDefWindowProc.c)
 *     BitBltSysBmp @ 0x14019276C (BitBltSysBmp.c)
 *     GreGetTextColor @ 0x14021FA6C (GreGetTextColor.c)
 *     GreGetBkColor @ 0x1402287AC (GreGetBkColor.c)
 *     ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x14025EB04 (-DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qlDddddddddd @ 0x1402E617C (WPP_RECORDER_AND_TRACE_SF_qlDddddddddd.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxDrawSB2(struct tagTHREADINFO **a1, struct tagSBCALC *a2, HDC a3, int a4, char a5)
{
  int v7; // ebx
  int v10; // r14d
  unsigned int DpiForSystem; // eax
  int *v12; // rdx
  int *v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // rcx
  char v16; // al
  int v17; // r12d
  int v18; // r13d
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // edx
  int v22; // r8d
  unsigned int v23; // eax
  int v24; // r9d
  unsigned int v25; // eax
  int v26; // ebx
  __int64 v27; // rbx
  char v28; // [rsp+A0h] [rbp-41h]
  char v29; // [rsp+A1h] [rbp-40h]
  int DpiDependentMetric; // [rsp+A4h] [rbp-3Dh]
  int BkColor; // [rsp+B0h] [rbp-31h]
  int TextColor; // [rsp+B4h] [rbp-2Dh]
  __int64 v35; // [rsp+C0h] [rbp-21h]
  HBRUSH v36; // [rsp+C8h] [rbp-19h]
  int v38[4]; // [rsp+E0h] [rbp-1h] BYREF

  v7 = *((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 6);
  v10 = (*((_DWORD *)a2 + 5) - *((_DWORD *)a2 + 4)) / 2;
  *(_OWORD *)v38 = 0LL;
  if ( v10 > 0 && v7 > 0 )
  {
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(11 - (unsigned int)(a4 != 0), DpiForSystem);
    BkColor = GreGetBkColor(a3);
    TextColor = GreGetTextColor(a3);
    v36 = (HBRUSH)xxxDefWindowProc(a1, 311LL, (HWND)a3, *a1);
    v12 = &v38[1];
    v13 = v38;
    if ( v10 > DpiDependentMetric )
      v10 = DpiDependentMetric;
    if ( !a4 )
    {
      v12 = v38;
      v13 = &v38[1];
    }
    *v13 = *((_DWORD *)a2 + 6);
    *v12 = *((_DWORD *)a2 + 4);
    v13[2] = *((_DWORD *)a2 + 7);
    v12[2] = *((_DWORD *)a2 + 5);
    UserSessionState = W32GetUserSessionState(v13, v12);
    v35 = GreSelectBrush(a3, *(_QWORD *)(*(_QWORD *)(UserSessionState + 19872) + 4840LL));
    LOBYTE(v15) = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
               && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
               && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    v29 = v15;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v16 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v16 = 0;
    }
    v17 = v38[3];
    v18 = v38[2];
    v19 = *(_QWORD *)v38;
    v28 = v16;
    if ( (_BYTE)v15 || v16 )
    {
      v20 = W32GetUserSessionState(v15, *(_QWORD *)&WPP_GLOBAL_Control);
      v21 = v38[1];
      v22 = DpiDependentMetric;
      LOBYTE(v22) = v28;
      LOBYTE(v21) = v29;
      WPP_RECORDER_AND_TRACE_SF_qlDddddddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v21,
        v22,
        *(_QWORD *)(v20 + 69160));
    }
    if ( a4 )
    {
      if ( v10 == DpiDependentMetric )
      {
        v23 = GetDpiForSystem();
        if ( v7 == (unsigned int)GetDpiDependentMetric(0, v23) )
        {
          BitBltSysBmp(a3, v19, v38[1], (a5 & 1) != 0 ? 49 : 46, 1);
          BitBltSysBmp(a3, v19, v17 - v10, (a5 & 2) != 0 ? 53 : 50, 1);
LABEL_28:
          v27 = GreSelectBrush(a3, v35);
          DrawThumb2((struct tagWND *)a1, a2, a3, v36, a4, a5);
          GreSelectBrush(a3, v27);
          GreSetBkColor(a3, BkColor);
          GreSetTextColor(a3, TextColor);
          return;
        }
      }
      v38[3] = v10 + HIDWORD(v19);
      DrawFrameControl(a3, (struct tagRECT *)v38, 3u, (a5 & 1) << 8);
      v38[3] = v17;
      v24 = ((a5 & 2) << 7) | 1;
      v38[1] = v17 - v10;
    }
    else
    {
      if ( v10 == DpiDependentMetric )
      {
        v25 = GetDpiForSystem();
        if ( v7 == (unsigned int)GetDpiDependentMetric(1, v25) )
        {
          v26 = v38[1];
          BitBltSysBmp(a3, v19, v38[1], (a5 & 1) != 0 ? 61 : 58, 1);
          BitBltSysBmp(a3, v18 - v10, v26, (a5 & 2) != 0 ? 57 : 54, 1);
          goto LABEL_28;
        }
      }
      v38[2] = v19 + v10;
      DrawFrameControl(a3, (struct tagRECT *)v38, 3u, ((a5 & 1) << 8) | 2);
      v38[2] = v18;
      v24 = ((a5 & 2) << 7) | 3;
      v38[0] = v18 - v10;
    }
    DrawFrameControl(a3, (struct tagRECT *)v38, 3u, v24);
    goto LABEL_28;
  }
}
