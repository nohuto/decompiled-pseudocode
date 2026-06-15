/*
 * XREFs of ??_GCKsSoftwareNotificationsMonitor@@UEAAPEAXI@Z @ 0x180079BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CKsNotificationsMonitor@@MEAA@XZ @ 0x180079BFC (--1CKsNotificationsMonitor@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CKsSoftwareNotificationsMonitor *__fastcall CKsSoftwareNotificationsMonitor::`scalar deleting destructor'(
        CKsSoftwareNotificationsMonitor *this,
        char a2)
{
  CKsNotificationsMonitor::~CKsNotificationsMonitor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
