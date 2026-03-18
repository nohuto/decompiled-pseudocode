/*
 * XREFs of ?GrepGetCurrentProcessBehaviorRestriction@@YA?AW4GreBehaviorRestriction@@XZ @ 0x1400FE870
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x14001B740 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vLockIgnoreAttributes@DCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14003D840 (-vLockIgnoreAttributes@DCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     GrepDeleteDC @ 0x14003ECB0 (GrepDeleteDC.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140040038 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1400407D4 (-vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1400FE730 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     <none>
 */

__int64 GrepGetCurrentProcessBehaviorRestriction()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !(unsigned __int8)PsIsWin32KFilterEnabled() )
    return 0LL;
  LOBYTE(v0) = (unsigned int)PsGetWin32KFilterSet() == 5;
  return v0;
}
