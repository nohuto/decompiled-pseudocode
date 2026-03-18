/*
 * XREFs of GreLockVisRgnWithDmcLockAcquiredEx @ 0x1401F0920
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B5D4 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B6A8 (--$GreAcquireSemaphore@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

struct _GRETHREAD *__fastcall GreLockVisRgnWithDmcLockAcquiredEx(__int64 a1)
{
  struct _ERESOURCE **v1; // rbx
  int v2; // edx
  int v3; // r8d
  int v4; // edx
  int v5; // r8d

  v1 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  GreAcquireSemaphore<2,>(v1, v2, v3);
  return GreAcquireSemaphore<3,>(v1, v4, v5);
}
