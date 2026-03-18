/*
 * XREFs of DirtyVisRgnTrackers @ 0x140037A28
 * Callers:
 *     InternalInvalidate3 @ 0x140032DB8 (InternalInvalidate3.c)
 *     xxxSimpleDoSyncPaint @ 0x1400359F0 (xxxSimpleDoSyncPaint.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxCalcClientRect @ 0x140047B98 (xxxCalcClientRect.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x14004B110 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     UnlinkWindow @ 0x14004BBDC (UnlinkWindow.c)
 *     ?DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z @ 0x14004EE38 (-DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z.c)
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 *     xxxDoPaint @ 0x14005138C (xxxDoPaint.c)
 *     xxxBeginPaint @ 0x140052240 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x140052E08 (xxxEndPaint.c)
 *     zzzUpdateLayeredWindow @ 0x14005335C (zzzUpdateLayeredWindow.c)
 *     CreateVisRgnTracker @ 0x14005B558 (CreateVisRgnTracker.c)
 *     SelectWindowRgn @ 0x14005B5EC (SelectWindowRgn.c)
 *     OffsetChildren @ 0x14005B830 (OffsetChildren.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x14018FE40 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140233E58 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     LinkWindow @ 0x1402B6200 (LinkWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x14005BBA4 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x14016A158 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x14019F480 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall DirtyVisRgnTrackers(struct tagWND *a1, __int64 a2)
{
  struct tagWND *v2; // rbx
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v4; // rax
  char v5; // si
  _QWORD *v6; // rdi
  _QWORD *i; // rcx
  __int64 v8; // rdx
  char v9; // al
  CVisRgnTrackerProp *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v2 = a1;
    CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(a1, a2);
    if ( CurrentThreadNonPaged )
      CurrentThreadNonPaged = (_QWORD *)*CurrentThreadNonPaged;
    v4 = CurrentThreadNonPaged[62];
    if ( v4 )
    {
      v5 = 1;
      if ( (*(_DWORD *)(**(_QWORD **)(v4 + 8) + 64LL) & 1) != 0 && (*((_DWORD *)v2 + 95) & 0x2000000) != 0 )
      {
        v6 = (_QWORD *)*((_QWORD *)v2 + 13);
        for ( i = v6; i; i = (_QWORD *)i[13] )
        {
          v8 = i[5];
          v9 = *(_BYTE *)(v8 + 31);
          if ( (v9 & 0x10) == 0 || (v9 & 0x20) != 0 && i != v6 )
            return;
          if ( (*(_WORD *)(v8 + 42) & 0x2FFF) == 0x29D )
            break;
        }
        EtwTraceDwmVisRgnDirty(*(_QWORD *)v2, *v6);
        if ( !(unsigned int)IsTopLevelWindow(v2) )
        {
          v5 = 0;
          if ( v2 != (struct tagWND *)GetDesktopWindow((__int64)v2) && (*(_BYTE *)(v6[5] + 31LL) & 2) != 0 )
          {
            v10 = 0LL;
            if ( (unsigned int)CWindowProp::GetProp<CVisRgnTrackerProp>(v6, &v10) )
              CVisRgnTrackerProp::MarkDirty(v10);
          }
        }
        MarkDirtyWorker(v2);
        if ( !v5 )
        {
          while ( 1 )
          {
            v2 = (struct tagWND *)*((_QWORD *)v2 + 11);
            if ( !v2 )
              break;
            if ( (*(_BYTE *)(*((_QWORD *)v2 + 5) + 31LL) & 0x14) == 0x14 )
              MarkDirtyWorker(v2);
          }
        }
      }
    }
  }
}
