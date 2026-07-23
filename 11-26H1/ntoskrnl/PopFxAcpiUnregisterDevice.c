/*
 * XREFs of PopFxAcpiUnregisterDevice @ 0x14061525C
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x140614E40 (PopFxAcpiDispatchNotification.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x14044F150 (IoAcquireRemoveLockEx.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1404E0F80 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopFxDestroyDeviceCommon @ 0x1404E8FC0 (PopFxDestroyDeviceCommon.c)
 *     PopFxRemoveAcpiDevice @ 0x1406083E0 (PopFxRemoveAcpiDevice.c)
 *     PopPluginAcpiNotificationStrict @ 0x140616DC4 (PopPluginAcpiNotificationStrict.c)
 */

__int64 __fastcall PopFxAcpiUnregisterDevice(char *P, ULONG_PTR a2)
{
  struct _IO_REMOVE_LOCK *v2; // rdi
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  unsigned int v9; // ebp

  v2 = (struct _IO_REMOVE_LOCK *)(P + 312);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(P + 312), (PVOID)0x72466F50, &File, 1u, 0x20u);
  v8 = (struct _KLOCK_ENTRIES *)(P + 200);
  v9 = v5;
  if ( (struct _KLOCK_ENTRIES *)v8->Thread != v8 )
    PopFxRemoveAcpiDevice(v6, (__int64)P, v7, v8);
  IoReleaseRemoveLockAndWaitEx(v2, (PVOID)0x72466F50, 0x20u);
  PopPluginAcpiNotificationStrict(*((_QWORD *)P + 10), 4uLL, a2);
  _InterlockedAnd((volatile signed __int32 *)P + 216, 0xFFFFFFFB);
  *((_QWORD *)P + 10) = 0LL;
  *((_QWORD *)P + 11) = 0LL;
  PopFxDestroyDeviceCommon((PVOID *)P, 2);
  return v9;
}
