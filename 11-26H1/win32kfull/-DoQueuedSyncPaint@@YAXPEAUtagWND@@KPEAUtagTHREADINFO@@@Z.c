/*
 * XREFs of ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x140046E40
 * Callers:
 *     xxxDoSyncPaint @ 0x140046CFC (xxxDoSyncPaint.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x140046E40 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x140046E40 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140046F44 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 */

void __fastcall DoQueuedSyncPaint(struct tagWND *a1, unsigned int a2, struct tagTHREADINFO *a3)
{
  __int64 v4; // rdi
  struct tagTHREADINFO *v5; // rcx
  __int64 v7; // rdx
  __int64 i; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax

  v4 = a2;
  v5 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
  if ( v5 == a3 )
    goto LABEL_24;
  v7 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v7 + 17) & 0xA) != 0xA || (*(_BYTE *)(v7 + 31) & 0x10) == 0 )
    goto LABEL_24;
  v9 = (_QWORD *)((char *)v5 + 552);
  v10 = (_QWORD *)*v9;
  if ( (_QWORD *)*v9 == v9 )
  {
LABEL_21:
    SendNotifyMessageAlways(a1, 136LL, v4, 0LL, 1);
    SetOrClrWF(1LL, a1, 640LL, 1LL);
  }
  else
  {
    while ( *((_DWORD *)v10 + 22) != 136 || (struct tagWND *)v10[12] != a1 )
    {
      v10 = (_QWORD *)*v10;
      if ( v10 == v9 )
        goto LABEL_21;
    }
  }
  if ( a1 == (struct tagWND *)GetDesktopWindow(a1) )
  {
LABEL_24:
    if ( (v4 & 0x20) != 0 || (v4 & 4) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) != 0 )
    {
      for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(i + 40) + 31LL) & 0x40) == 0 || a3 == *(struct tagTHREADINFO **)(i + 16) )
          DoQueuedSyncPaint((struct tagWND *)i, v4, a3);
      }
    }
  }
}
