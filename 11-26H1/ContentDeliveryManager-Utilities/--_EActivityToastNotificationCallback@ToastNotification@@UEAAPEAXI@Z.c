/*
 * XREFs of ??_EActivityToastNotificationCallback@ToastNotification@@UEAAPEAXI@Z @ 0x180068670
 * Callers:
 *     <none>
 * Callees:
 *     ??1ActivityToastNotificationCallback@ToastNotification@@UEAA@XZ @ 0x18006801C (--1ActivityToastNotificationCallback@ToastNotification@@UEAA@XZ.c)
 */

wil::details **__fastcall ToastNotification::ActivityToastNotificationCallback::`vector deleting destructor'(
        wil::details **this,
        void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  ToastNotification::ActivityToastNotificationCallback::~ActivityToastNotificationCallback(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
