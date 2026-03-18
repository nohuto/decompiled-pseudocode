/*
 * XREFs of ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x14010E4D0
 * Callers:
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C9E10 (-vReferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepReleaseLockValidate@$0CB@@@YAXXZ @ 0x14010E5D4 (--$GrepReleaseLockValidate@$0CB@@@YAXXZ.c)
 *     GetgptoWrap @ 0x14010E670 (GetgptoWrap.c)
 *     ??$GrepAcquireLockValidate@$0CB@@@YAXXZ @ 0x1401C3FF4 (--$GrepAcquireLockValidate@$0CB@@@YAXXZ.c)
 */

void __fastcall vChangeWndObjs(struct SURFACE *a1, HDEV a2, struct SURFACE *a3, HDEV a4)
{
  struct _ERESOURCE **v8; // r14
  struct _ERESOURCE *v9; // rsi
  _QWORD *i; // rbx
  int v11; // r8d
  struct SURFACE *v12; // rax
  __int64 j; // rdi
  __int64 k; // rdi
  HDEV v15; // [rsp+58h] [rbp+10h] BYREF
  HDEV v16; // [rsp+68h] [rbp+20h] BYREF

  v8 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  v9 = *v8 + 4;
  GreAcquireSemaphoreInternal(v9);
  GrepAcquireLockValidate<33>();
  v15 = a2;
  v16 = a4;
  for ( i = *(_QWORD **)GetgptoWrap(); i; i = (_QWORD *)i[1] )
  {
    v12 = (struct SURFACE *)i[4];
    if ( v12 == a1 )
    {
      for ( j = i[3]; j; j = *(_QWORD *)(j + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v16, v8);
        PDEVOBJ::vUnreferencePdev(&v15, (struct Gre::Base::SESSION_GLOBALS *)v8);
      }
    }
    else if ( v12 == a3 )
    {
      for ( k = i[3]; k; k = *(_QWORD *)(k + 160) )
      {
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v15, v8);
        PDEVOBJ::vUnreferencePdev(&v16, (struct Gre::Base::SESSION_GLOBALS *)v8);
      }
    }
  }
  if ( v9 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Wndobj", (int)v9, v11);
    GrepReleaseLockValidate<33>();
    GreReleaseSemaphoreSharedInternal(v9);
  }
}
