/*
 * XREFs of ?bGarbageCollect@XEPALOBJ2@@QEAA_NXZ @ 0x1401C5B00
 * Callers:
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1401D1760 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400E8268 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1401C595C (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 */

bool __fastcall XEPALOBJ2::bGarbageCollect(XEPALOBJ2 *this)
{
  __int64 SessionState; // rax
  int v3; // eax
  struct _ERESOURCE *v4; // rbx
  bool v5; // di
  struct _GRETHREAD *v6; // rax
  bool v7; // zf
  struct _ERESOURCE *v9; // rbx
  struct _GRETHREAD *v10; // rax
  HSEMAPHORE v11; // [rsp+30h] [rbp+8h] BYREF

  SessionState = W32GetSessionState(this);
  SEMOBJ<13>::SEMOBJ<13>((struct _ERESOURCE **)&v11, *(struct _ERESOURCE ***)(SessionState + 88));
  if ( *(_QWORD *)this )
  {
    v3 = XEPALOBJ::bDeletePalette(this, 1);
    v4 = (struct _ERESOURCE *)v11;
    v5 = v3 != 0;
    if ( v11 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v11);
      v6 = GreGetCurrentThreadCrossSessionCheck();
      if ( v6 )
      {
        v7 = (*((_BYTE *)v6 + 21))-- == 1;
        if ( v7 )
          *(_QWORD *)v6 &= ~0x2000uLL;
      }
      GreReleaseSemaphoreSharedInternal(v4);
    }
    return v5;
  }
  else
  {
    v9 = (struct _ERESOURCE *)v11;
    if ( v11 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v11);
      v10 = GreGetCurrentThreadCrossSessionCheck();
      if ( v10 )
      {
        v7 = (*((_BYTE *)v10 + 21))-- == 1;
        if ( v7 )
          *(_QWORD *)v10 &= ~0x2000uLL;
      }
      GreReleaseSemaphoreSharedInternal(v9);
    }
    return 0;
  }
}
