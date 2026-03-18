/*
 * XREFs of ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x14004F06C
 * Callers:
 *     InternalInvalidate3 @ 0x14002EEB8 (InternalInvalidate3.c)
 *     xxxCalcClientRect @ 0x1400333BC (xxxCalcClientRect.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     DwmChildRectChange @ 0x14004E990 (DwmChildRectChange.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     xxxDoPaint @ 0x14004F698 (xxxDoPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x140050370 (xxxSimpleDoSyncPaint.c)
 *     xxxBeginPaint @ 0x14012A7C4 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x14012B900 (xxxEndPaint.c)
 *     xxxSendEraseBkgnd @ 0x14012BCEC (xxxSendEraseBkgnd.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x1401D3650 (-DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1401D3714 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402CB6EC (-DwmSetBorderMargins@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x14004E2F8 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x14004ED4C (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x1400A7100 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x140191A34 (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddqdddds @ 0x1401BC728 (WPP_RECORDER_AND_TRACE_SF_ddddqdddds.c)
 *     DwmAsyncNotifyWindowFrameMarginsChange @ 0x1401F5DC8 (DwmAsyncNotifyWindowFrameMarginsChange.c)
 *     ?ChangeReasonToString@WindowMargins@@YAQEADW4ChangeReason@1@@Z @ 0x140210E58 (-ChangeReasonToString@WindowMargins@@YAQEADW4ChangeReason@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14025F6A4 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 */

struct WindowMargins::CWindowMarginProp *__fastcall WindowMargins::CheckForChanges(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // r14d
  char v4; // r12
  char v5; // si
  char v6; // di
  struct WindowMargins::CWindowMarginProp *result; // rax
  __int64 v8; // rdx
  struct WindowMargins::CWindowMarginProp *v9; // rsi
  __int64 v10; // rdi
  char v11; // bp
  char v12; // bl
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  char v15; // si
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  void *v24; // rax
  __int64 v25; // rdx
  int v26; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 UserSessionState; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  int v36; // r9d
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  int v40; // [rsp+20h] [rbp-A8h]
  int v41; // [rsp+28h] [rbp-A0h]
  int v42; // [rsp+30h] [rbp-98h]
  int v43; // [rsp+38h] [rbp-90h]
  bool v44; // [rsp+D8h] [rbp+10h]
  __int64 v45; // [rsp+E0h] [rbp+18h]
  unsigned __int64 v46; // [rsp+E8h] [rbp+20h] BYREF

  v2 = a2;
  v4 = 1;
  if ( (unsigned int)(a2 - 3) > 1 )
  {
    result = (struct WindowMargins::CWindowMarginProp *)IsTopLevelWindow((__int64)a1);
    if ( !(_DWORD)result )
      return result;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v5 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v6 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v6 = 0;
  }
  if ( v5 || v6 )
  {
    v29 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    v33 = WindowMargins::ChangeReasonToString(v2, v31, v32, *(_QWORD *)(UserSessionState + 69152));
    LOBYTE(v34) = v6;
    LOBYTE(v35) = v5;
    WPP_RECORDER_AND_TRACE_SF_qs(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v35,
      v34,
      v36,
      5,
      21,
      27,
      (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
      v29,
      v33);
  }
  result = WindowMargins::CWindowMarginProp::GetOrCreate(a1, a2);
  v9 = result;
  if ( !result )
    return result;
  v45 = 0LL;
  LOWORD(v10) = 0;
  if ( !v2 )
  {
    v46 = 0LL;
LABEL_30:
    v25 = *((_QWORD *)a1 + 5);
    v26 = *(_DWORD *)(v25 + 288) & 0xF;
    if ( v26 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v25 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v25 + 232) & 0x400) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
    }
    else if ( !v26
           && (v28 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 488LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v28 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) + 272LL);
    }
    v40 = 1;
    v13 = *(_QWORD *)WindowMargins::CWindowMarginProp::CalculateWindowMargins(v9, &v46, a1, WindowDpiLastNotify);
    v46 = v13;
    *(_QWORD *)((char *)v9 + 44) = v13;
    goto LABEL_18;
  }
  v10 = *(_QWORD *)((char *)result + 44);
  v45 = v10;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) == 0
    || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v11 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v12 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v12 = 0;
  }
  if ( v11 || v12 )
  {
    v37 = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
    LOBYTE(v38) = v12;
    LOBYTE(v39) = v11;
    WPP_RECORDER_AND_TRACE_SF_dddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v39,
      v38,
      *(_QWORD *)(v37 + 69152),
      5,
      21,
      28,
      (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
      v10,
      SBYTE4(v10),
      SBYTE2(v10),
      SBYTE6(v10));
  }
  v13 = 0LL;
  v46 = 0LL;
  if ( v2 != 4 )
    goto LABEL_30;
  CWindowProp::RemoveAndDeleteProp(v9);
LABEL_18:
  if ( __PAIR32__(WORD1(v45), v10) == (_DWORD)v13 )
  {
    v15 = BYTE6(v45);
    if ( WORD2(v45) == WORD2(v13) )
    {
      result = (struct WindowMargins::CWindowMarginProp *)HIWORD(v13);
      if ( HIWORD(v45) == HIWORD(v13) )
        return result;
    }
  }
  else
  {
    v15 = BYTE6(v45);
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v4 = 0;
  }
  v44 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v16 = *(_QWORD *)a1;
    v17 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
    v20 = WindowMargins::ChangeReasonToString(v2, v18, v19, *(_QWORD *)(v17 + 69152));
    LOBYTE(v21) = v4;
    LOBYTE(v22) = v44;
    WPP_RECORDER_AND_TRACE_SF_ddddqdddds(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v22,
      v23,
      v40,
      v41,
      v42,
      v43,
      v13,
      SBYTE4(v46),
      SBYTE2(v46),
      SBYTE6(v46),
      v16,
      v10,
      SBYTE4(v45),
      SBYTE2(v45),
      v15,
      v20);
  }
  v24 = (void *)UserReferenceDwmApiPort();
  return (struct WindowMargins::CWindowMarginProp *)DwmAsyncNotifyWindowFrameMarginsChange(v24);
}
