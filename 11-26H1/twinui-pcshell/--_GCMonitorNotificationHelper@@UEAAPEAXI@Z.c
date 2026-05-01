/*
 * XREFs of ??_GCMonitorNotificationHelper@@UEAAPEAXI@Z @ 0x1802E8370
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TabletModePositionerHandoffContext@@UEAA@XZ @ 0x1802E82CC (--1TabletModePositionerHandoffContext@@UEAA@XZ.c)
 */

CMonitorNotificationHelper *__fastcall CMonitorNotificationHelper::`scalar deleting destructor'(
        CMonitorNotificationHelper *this,
        char a2)
{
  TabletModePositionerHandoffContext::~TabletModePositionerHandoffContext(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
