/*
 * XREFs of ?bGarbageCollect@XEPALOBJ2@@QEAA_NAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401EDE88
 * Callers:
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F237C (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C3380 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1400C49EC (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 */

bool __fastcall XEPALOBJ2::bGarbageCollect(XEPALOBJ2 *this, struct _ERESOURCE **a2)
{
  int v3; // r8d
  int v4; // eax
  int v5; // r8d
  struct _ERESOURCE *v6; // rbx
  bool v7; // di
  struct _GRETHREAD *v8; // rax
  bool v9; // zf
  struct _ERESOURCE *v11; // rbx
  struct _GRETHREAD *v12; // rax
  HSEMAPHORE v13; // [rsp+30h] [rbp+8h] BYREF

  SEMOBJ<13>::SEMOBJ<13>((struct _ERESOURCE **)&v13, a2);
  if ( *(_QWORD *)this )
  {
    v4 = XEPALOBJ::bDeletePalette(this, 1);
    v6 = (struct _ERESOURCE *)v13;
    v7 = v4 != 0;
    if ( v13 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v13, v5);
      v8 = GreGetCurrentThreadCrossSessionCheck();
      if ( v8 )
      {
        v9 = (*((_BYTE *)v8 + 21))-- == 1;
        if ( v9 )
          *(_QWORD *)v8 &= ~0x2000uLL;
      }
      GreReleaseSemaphoreSharedInternal(v6);
    }
    return v7;
  }
  else
  {
    v11 = (struct _ERESOURCE *)v13;
    if ( v13 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v13, v3);
      v12 = GreGetCurrentThreadCrossSessionCheck();
      if ( v12 )
      {
        v9 = (*((_BYTE *)v12 + 21))-- == 1;
        if ( v9 )
          *(_QWORD *)v12 &= ~0x2000uLL;
      }
      GreReleaseSemaphoreSharedInternal(v11);
    }
    return 0;
  }
}
