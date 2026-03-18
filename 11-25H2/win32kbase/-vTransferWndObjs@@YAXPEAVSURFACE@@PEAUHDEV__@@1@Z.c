/*
 * XREFs of ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1401D2378
 * Callers:
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x140070EB0 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x14006E3A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1401340E0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14013F47C (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GetgptoWrap @ 0x14013F514 (GetgptoWrap.c)
 */

void __fastcall vTransferWndObjs(struct SURFACE *a1, HDEV a2, HDEV a3)
{
  __int64 SessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 i; // rbx
  __int64 j; // rdi
  struct _ERESOURCE *v11; // rbx
  struct _GRETHREAD *v12; // rax
  HDEV v13; // [rsp+48h] [rbp+10h] BYREF
  HDEV v14; // [rsp+50h] [rbp+18h] BYREF
  HSEMAPHORE v15; // [rsp+58h] [rbp+20h] BYREF

  SessionState = W32GetSessionState(a1);
  SEMOBJ<33>::SEMOBJ<33>((struct _ERESOURCE **)&v15, *(struct _ERESOURCE ***)(SessionState + 88));
  v14 = a2;
  v13 = a3;
  for ( i = *(_QWORD *)GetgptoWrap(v8, v7); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(struct SURFACE **)(i + 32) == a1 )
    {
      for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v13);
        PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v14);
      }
    }
  }
  v11 = (struct _ERESOURCE *)v15;
  if ( v15 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Wndobj", (int)v15);
    v12 = GreGetCurrentThreadCrossSessionCheck();
    if ( v12 )
      *(_QWORD *)v12 &= ~0x200000000uLL;
    GreReleaseSemaphoreSharedInternal(v11);
  }
}
