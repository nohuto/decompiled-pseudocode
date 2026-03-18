/*
 * XREFs of GreLockVisRgnPublish @ 0x140148470
 * Callers:
 *     <none>
 * Callees:
 *     ??$GrepAcquireLockValidate@$0L@@@YAXXZ @ 0x140015634 (--$GrepAcquireLockValidate@$0L@@@YAXXZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1401B6664 (McTemplateK0pqz_EtwWriteTransfer.c)
 */

struct _GRETHREAD *__fastcall GreLockVisRgnPublish(__int64 a1)
{
  int v1; // edx
  struct _ERESOURCE **v2; // rcx
  int v3; // r8d
  struct _ERESOURCE *v4; // rbx

  v2 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  v4 = *v2;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer((_DWORD)v2, v1, v3, (_DWORD)v4 + 1248, 0, (__int64)L"VisRgnPublish");
  GreAcquireSemaphoreInternal(v4 + 12);
  return GrepAcquireLockValidate<11>();
}
