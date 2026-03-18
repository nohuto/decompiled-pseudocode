/*
 * XREFs of ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1401F3274
 * Callers:
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1401F5468 (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C9E10 (-vReferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepReleaseLockValidate@$0CB@@@YAXXZ @ 0x14010E5D4 (--$GrepReleaseLockValidate@$0CB@@@YAXXZ.c)
 *     GetgptoWrap @ 0x14010E670 (GetgptoWrap.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14013898C (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall vTransferWndObjs(struct SURFACE *a1, HDEV a2, HDEV a3)
{
  struct _ERESOURCE **v6; // rsi
  __int64 v7; // rcx
  __int64 i; // rbx
  int v9; // r8d
  __int64 j; // rdi
  struct _ERESOURCE *v11; // rbx
  HDEV v12; // [rsp+48h] [rbp+10h] BYREF
  HDEV v13; // [rsp+50h] [rbp+18h] BYREF
  HSEMAPHORE v14; // [rsp+58h] [rbp+20h] BYREF

  v6 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  SEMOBJ<33>::SEMOBJ<33>((struct _ERESOURCE **)&v14, v6);
  v13 = a2;
  v12 = a3;
  for ( i = *(_QWORD *)GetgptoWrap(v7); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(struct SURFACE **)(i + 32) == a1 )
    {
      for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v12, v6);
        PDEVOBJ::vUnreferencePdev(&v13, (struct Gre::Base::SESSION_GLOBALS *)v6);
      }
    }
  }
  v11 = (struct _ERESOURCE *)v14;
  if ( v14 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Wndobj", (int)v14, v9);
    GrepReleaseLockValidate<33>();
    GreReleaseSemaphoreSharedInternal(v11);
  }
}
