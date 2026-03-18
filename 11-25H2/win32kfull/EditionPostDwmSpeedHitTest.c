/*
 * XREFs of EditionPostDwmSpeedHitTest @ 0x1402A50B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x140021688 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxTouchTargetWindow @ 0x1400230D8 (xxxTouchTargetWindow.c)
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x14008CCB4 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x140154898 (INPUTDEST_FROM_PWND.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1401548E0 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1401549DC (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x14019E618 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     TouchTargetChildTree @ 0x1401C20E8 (TouchTargetChildTree.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1401C2338 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_DWORD *__fastcall EditionPostDwmSpeedHitTest(
        __int64 a1,
        struct tagPOINT *a2,
        const struct _SUBPIXELS *a3,
        struct tagTOUCHTARGETINGCONTACT *a4,
        __int64 a5,
        _DWORD *a6)
{
  __int64 v6; // rbx
  struct tagWND *TopLevelWindow; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  const struct tagWND **v14; // r14
  bool v15; // zf
  struct tagWND *CompositionInputWindowUIOwner; // rdi
  __int64 v17; // rdx
  const struct tagWND *v18; // rcx
  _DWORD *result; // rax
  __int64 v20; // r14
  __int64 UserSessionState; // rax
  struct tagWND *v22; // rax
  __int64 v23; // rax
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // xmm3
  __int128 v28; // xmm4
  __int128 v29; // xmm5
  __int128 v30; // xmm6
  struct tagPOINT v31; // [rsp+48h] [rbp-79h] BYREF
  int v32; // [rsp+50h] [rbp-71h] BYREF
  __int64 v33; // [rsp+58h] [rbp-69h] BYREF
  _DWORD v34[34]; // [rsp+60h] [rbp-61h] BYREF
  __int64 v35; // [rsp+118h] [rbp+57h] BYREF

  v6 = 0LL;
  TopLevelWindow = 0LL;
  v12 = 2LL;
  *a6 = 0;
  v13 = *(unsigned int *)(a1 + 92);
  if ( (_DWORD)v13 == 2 && (*(_DWORD *)(a1 + 88) & 1) != 0 )
  {
    v14 = (const struct tagWND **)(a1 + 80);
    TopLevelWindow = (struct tagWND *)GetTopLevelWindow(*(_QWORD *)(a1 + 80));
    v15 = TopLevelWindow == 0LL;
  }
  else
  {
    v14 = (const struct tagWND **)(a1 + 80);
    v15 = (_DWORD)v13 == 2;
  }
  if ( !v15 || !*v14 )
  {
    v20 = a5;
    if ( *(_DWORD *)(a5 + 80) )
    {
      LODWORD(v35) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 438);
    }
    v31 = *a2;
    if ( a4 )
    {
      v33 = 0LL;
      v32 = 0;
      LOWORD(v35) = 0;
      if ( !TopLevelWindow )
        goto LABEL_24;
      UserSessionState = W32GetUserSessionState(v13, v12);
      if ( !(unsigned int)xxxTouchTargetWindow(
                            TopLevelWindow,
                            a4,
                            &v31,
                            &v32,
                            &v35,
                            (__int64)&v33,
                            *(_DWORD *)(**(_QWORD **)(*(_QWORD *)(UserSessionState + 19144) + 8LL) + 64LL) & 1) )
        goto LABEL_24;
      W32GetUserSessionState(v13, v12);
      v22 = TouchTargetChildTree(TopLevelWindow, a4, *(_QWORD *)&v31, &v33);
    }
    else
    {
      if ( !TopLevelWindow || !(unsigned int)DCEIsWindowHit(TopLevelWindow, &v31, a3) )
      {
        v23 = W32GetUserSessionState(v13, v12);
        TopLevelWindow = TopLevelSpeedHitTest(*(struct tagDESKTOP **)(v23 + 19144), &v31, a3);
        if ( !TopLevelWindow )
          goto LABEL_24;
      }
      if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v13, v12) + 96) + 120LL) )
        v22 = DCEChildTreeSpeedHitTest(TopLevelWindow, *a2, &v31, a3);
      else
        v22 = ClassicChildTreeSpeedHitTest(TopLevelWindow, v31);
    }
    v12 = (__int64)v22;
    if ( v22 )
    {
      *a6 = 1;
      *a2 = v31;
      goto LABEL_25;
    }
LABEL_24:
    v31 = *a2;
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v13, v12) + 19144) + 8LL) + 24LL);
    *a2 = v31;
    if ( !v12 )
    {
LABEL_26:
      *(_QWORD *)v20 = v6;
      v24 = INPUTDEST_FROM_PWND(v34, v12);
      v25 = v24[1];
      v26 = v24[2];
      v27 = v24[3];
      v28 = v24[4];
      v29 = v24[5];
      v30 = v24[6];
      *(_OWORD *)a1 = *v24;
      *(_OWORD *)(a1 + 16) = v25;
      *(_OWORD *)(a1 + 32) = v26;
      *(_OWORD *)(a1 + 48) = v27;
      *(_OWORD *)(a1 + 64) = v28;
      *(_OWORD *)(a1 + 80) = v29;
      *(_OWORD *)(a1 + 96) = v30;
      result = (_DWORD *)*(unsigned int *)(v20 + 100);
      *(_DWORD *)(a1 + 4) = (_DWORD)result;
      return result;
    }
LABEL_25:
    v6 = *(_QWORD *)v12;
    goto LABEL_26;
  }
  CompositionInputWindowUIOwner = *v14;
  if ( (unsigned int)IsIndependentInputWindow(*v14) )
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v18);
  v35 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 256LL), v17);
  PhysicalToLogicalDPIPoint(a2, a2, *(unsigned int *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 288LL), &v35);
  result = a6;
  *a6 = 1;
  return result;
}
