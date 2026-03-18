/*
 * XREFs of ??$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B6A8
 * Callers:
 *     ?GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140036C08 (-GrepLockVisRgn@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ReleaseCacheDC @ 0x14003BF80 (ReleaseCacheDC.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1400C7198 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DxgkEngAcquireWin32kLocks@@YAXXZ @ 0x1400C7220 (-DxgkEngAcquireWin32kLocks@@YAXXZ.c)
 *     GreLockVisRgnWithDmcLockAcquiredEx @ 0x1401F0920 (GreLockVisRgnWithDmcLockAcquiredEx.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$02@@YAXXZ @ 0x14001C604 (--$GrepAcquireLockValidate@$02@@YAXXZ.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1401B6664 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

struct _GRETHREAD *__fastcall GreAcquireSemaphore<3,>(struct _ERESOURCE **a1, int a2, int a3)
{
  struct _ERESOURCE *v3; // rbx

  v3 = *a1;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer((_DWORD)a1, a2, a3, (_DWORD)v3 + 728, 0, (__int64)L"DCVisRgn");
  GreAcquireSemaphoreInternal(v3 + 7);
  return GrepAcquireLockValidate<3>();
}
