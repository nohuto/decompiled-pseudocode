/*
 * XREFs of LdrpSendDllNotifications @ 0x1800DBA90
 * Callers:
 *     LdrpSendPostSnapNotifications @ 0x18011AFD0 (LdrpSendPostSnapNotifications.c)
 *     LdrpUnloadNode @ 0x18011BC60 (LdrpUnloadNode.c)
 *     LdrpCorProcessImports @ 0x18011CF50 (LdrpCorProcessImports.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __fastcall LdrpSendDllNotifications(__int64 a1, unsigned int a2)
{
  _UNKNOWN **v3; // rbx
  _QWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+40h] [rbp-18h]

  v5[0] = 0LL;
  v5[1] = a1 + 72;
  v5[2] = a1 + 88;
  v5[3] = *(_QWORD *)(a1 + 48);
  v6 = *(_DWORD *)(a1 + 64);
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
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
  return RtlLeaveCriticalSection(&LdrpDllNotificationLock);
}
