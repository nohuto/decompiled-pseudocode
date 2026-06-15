/*
 * XREFs of ??_G?$TItem@VCKsNotificationsMonitor@@@@QEAAPEAXI@Z @ 0x180122E14
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800DAA10 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 *     ?RemoveAt@?$TList@VCKsNotificationsMonitor@@@@QEAAXPEAX@Z @ 0x180123DAC (-RemoveAt@-$TList@VCKsNotificationsMonitor@@@@QEAAXPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall TItem<CKsNotificationsMonitor>::`scalar deleting destructor'(void *a1)
{
  operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
