/*
 * XREFs of AVrfDllLoadNotification @ 0x1800C51D0
 * Callers:
 *     LdrpSendPostSnapNotifications @ 0x18011B220 (LdrpSendPostSnapNotifications.c)
 *     LdrpCorProcessImports @ 0x18011D1A0 (LdrpCorProcessImports.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     AVrfpIsVerifierProviderDll @ 0x1800C5288 (AVrfpIsVerifierProviderDll.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800C6C30 (AVrfpDllLoadNotificationInternal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AVrfDllLoadNotification(__int64 a1)
{
  int NotificationInternal; // esi
  __int64 *v4; // rbx
  void (__fastcall *v5)(_QWORD, _QWORD, _QWORD, __int64); // rax

  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100) == 0 )
    return 0LL;
  NotificationInternal = 0;
  RtlEnterCriticalSection((__int64)&AVrfpVerifierLock);
  if ( !(unsigned __int8)AVrfpIsVerifierProviderDll(*(_QWORD *)(a1 + 48)) )
  {
    NotificationInternal = AVrfpDllLoadNotificationInternal(a1);
    if ( NotificationInternal >= 0 )
    {
      v4 = (__int64 *)AVrfpVerifierProvidersList;
      while ( v4 != &AVrfpVerifierProvidersList )
      {
        v5 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))v4[6];
        v4 = (__int64 *)*v4;
        if ( v5 )
          v5(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a1);
      }
    }
  }
  RtlLeaveCriticalSection((__int64)&AVrfpVerifierLock);
  return (unsigned int)NotificationInternal;
}
