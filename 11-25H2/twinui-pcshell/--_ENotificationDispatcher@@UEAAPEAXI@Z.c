/*
 * XREFs of ??_ENotificationDispatcher@@UEAAPEAXI@Z @ 0x18030C7A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1NotificationDispatcher@@UEAA@XZ @ 0x18030BF58 (--1NotificationDispatcher@@UEAA@XZ.c)
 */

NotificationDispatcher *__fastcall NotificationDispatcher::`vector deleting destructor'(
        NotificationDispatcher *this,
        char a2)
{
  NotificationDispatcher::~NotificationDispatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
