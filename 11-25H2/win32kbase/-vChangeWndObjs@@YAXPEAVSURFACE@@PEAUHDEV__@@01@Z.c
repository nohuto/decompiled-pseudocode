/*
 * XREFs of ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x14013F37C
 * Callers:
 *     bDynamicModeChange @ 0x1401793D8 (bDynamicModeChange.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x14006E3A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1401340E0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14013F47C (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GetgptoWrap @ 0x14013F514 (GetgptoWrap.c)
 */

void __fastcall vChangeWndObjs(struct SURFACE *a1, HDEV a2, struct SURFACE *a3, HDEV a4)
{
  __int64 SessionState; // rax
  _QWORD *i; // rbx
  struct _ERESOURCE *v10; // rbx
  struct SURFACE *v11; // rax
  struct _GRETHREAD *v12; // rax
  __int64 j; // rdi
  __int64 k; // rdi
  HSEMAPHORE v15[5]; // [rsp+20h] [rbp-28h] BYREF
  HDEV v16; // [rsp+58h] [rbp+10h] BYREF
  HDEV v17; // [rsp+68h] [rbp+20h] BYREF

  SessionState = W32GetSessionState(a1);
  SEMOBJ<33>::SEMOBJ<33>(v15, *(_QWORD *)(SessionState + 88));
  v16 = a2;
  v17 = a4;
  for ( i = *(_QWORD **)GetgptoWrap(); i; i = (_QWORD *)i[1] )
  {
    v11 = (struct SURFACE *)i[4];
    if ( v11 == a1 )
    {
      for ( j = i[3]; j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v17);
        PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v16);
      }
    }
    else if ( v11 == a3 )
    {
      for ( k = i[3]; k; k = *(_QWORD *)(k + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v16);
        PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v17);
      }
    }
  }
  v10 = (struct _ERESOURCE *)v15[0];
  if ( v15[0] )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Wndobj", (int)v15[0]);
    v12 = GreGetCurrentThreadCrossSessionCheck();
    if ( v12 )
      *(_QWORD *)v12 &= ~0x200000000uLL;
    GreReleaseSemaphoreSharedInternal(v10);
  }
}
