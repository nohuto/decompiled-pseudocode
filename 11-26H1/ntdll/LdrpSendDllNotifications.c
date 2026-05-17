/*
 * XREFs of LdrpSendDllNotifications @ 0x1800DEB20
 * Callers:
 *     LdrpSendPostSnapNotifications @ 0x18011B220 (LdrpSendPostSnapNotifications.c)
 *     LdrpUnloadNode @ 0x18011BEB0 (LdrpUnloadNode.c)
 *     LdrpCorProcessImports @ 0x18011D1A0 (LdrpCorProcessImports.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpSendDllNotifications(__int64 a1, unsigned int a2)
{
  _UNKNOWN **v3; // rbx
  _QWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+40h] [rbp-18h]

  v5[0] = 0LL;
  v5[1] = a1 + 72;
  v5[2] = a1 + 88;
  v5[3] = *(_QWORD *)(a1 + 48);
  v6 = *(_DWORD *)(a1 + 64);
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  v3 = (_UNKNOWN **)LdrpDllNotificationList;
  if ( LdrpDllNotificationList != (_UNKNOWN *)&LdrpDllNotificationList )
  {
    do
    {
      ((void (__fastcall *)(_QWORD, _QWORD *, void *))v3[2])(a2, v5, v3[3]);
      v3 = (_UNKNOWN **)*v3;
    }
    while ( v3 != &LdrpDllNotificationList );
  }
  return RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
}
