/*
 * XREFs of PopDisableCoolingExtension @ 0x1407CED84
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x1407CEAC0 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PopPropogateCoolingChange @ 0x140424D08 (PopPropogateCoolingChange.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopDiagTraceCoolingExtension @ 0x140AC37E0 (PopDiagTraceCoolingExtension.c)
 */

__int64 __fastcall PopDisableCoolingExtension(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *v4; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v4 = (struct _KTHREAD *)(a1 + 32);
  memset(&Event, 0, sizeof(Event));
  PopAcquireRwLockExclusive((unsigned __int64 *)(a1 + 32), a2, a3, a4);
  if ( !*(_BYTE *)(a1 + 64) )
    return PopReleaseRwLock(v4);
  *(_BYTE *)(a1 + 64) = 0;
  PopDiagTraceCoolingExtension(a1, POP_ETW_EVENT_COOLING_EXTENSION_REMOVE);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(a1 + 80) = &Event;
  PopPropogateCoolingChange(a1);
  PopReleaseRwLock(v4);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  PopAcquireRwLockExclusive((unsigned __int64 *)v4, v7, v8, v9);
  *(_QWORD *)(a1 + 80) = 0LL;
  v10 = *(_QWORD *)(a1 + 96);
  PopReleaseRwLock(v4);
  return guard_dispatch_icall_no_overrides(v10, v11);
}
