/*
 * XREFs of ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B5D4
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z @ 0x1400126D0 (-bDeleteSurface@SURFACE@@QEAAHAEAUSESSION_GLOBALS@Base@Gre@@W4_CLEANUPTYPE@@H@Z.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x14001B740 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x14003B480 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAX_N@Z @ 0x14003B590 (-vLock@NEEDGRELOCK@@QEAAX_N@Z.c)
 *     ReleaseCacheDC @ 0x14003BF80 (ReleaseCacheDC.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1400C5300 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1400C65C4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1400C7198 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DxgkEngAcquireWin32kLocks@@YAXXZ @ 0x1400C7220 (-DxgkEngAcquireWin32kLocks@@YAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x140110D10 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreSetMagicColors @ 0x14018C3B0 (GreSetMagicColors.c)
 *     GreLockVisRgnWithDmcLockAcquiredEx @ 0x1401F0920 (GreLockVisRgnWithDmcLockAcquiredEx.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1401B6664 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

struct _GRETHREAD *__fastcall GreAcquireSemaphore<2,>(struct _ERESOURCE **a1, int a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  struct _GRETHREAD *result; // rax
  unsigned __int64 i; // rcx
  struct _GRETHREAD *v6; // rbx
  __int64 v7; // r8
  int v8; // edx
  int v9; // eax

  v3 = *a1;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer((_DWORD)a1, a2, a3, (_DWORD)v3 + 1144, 0, (__int64)L"GreLock");
  GreAcquireSemaphoreInternal(v3 + 11);
  result = GreGetCurrentThreadCrossSessionCheck();
  v6 = result;
  if ( result )
  {
    v7 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFDFFFFFFFFCuLL) != 0 && (v7 & 4) == 0 )
    {
      v8 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v9 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v7) == 0 )
          v9 = v8;
        v8 = v9;
      }
      if ( v9 > 2 && v9 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v9, v7);
    }
    LOBYTE(i) = *((_BYTE *)v6 + 10);
    result = (struct _GRETHREAD *)(unsigned int)(i + 1);
    *((_BYTE *)v6 + 10) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v6 |= 4uLL;
  }
  return result;
}
