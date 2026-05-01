/*
 * XREFs of ?RuntimeClassInitialize@NotificationDispatcher@@QEAAJXZ @ 0x18030A30C
 * Callers:
 *     ??$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificationDispatcher@@@Z @ 0x180229DEC (--$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall NotificationDispatcher::RuntimeClassInitialize(NotificationDispatcher *this)
{
  __int64 v2; // rax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v6; // [rsp+48h] [rbp+10h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  v7 = 0;
  if ( CoGetApartmentType((APTTYPE *)&v6, (APTTYPEQUALIFIER *)&v7) < 0 || v6 && v6 != 3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  else
  {
    v2 = SHCreateWorkerWindowW(NotificationDispatcher::WndProc, -3LL, 0LL, 0LL, 0LL, this);
    *((_QWORD *)this + 5) = v2;
    if ( v2 )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x47,
               (__int64)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
               v3);
  }
}
