/*
 * XREFs of PoInitDriverServices @ 0x140CD4774
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IoRegisterPlugPlayNotification @ 0x1409AAA90 (IoRegisterPlugPlayNotification.c)
 */

NTSTATUS (*PoInitDriverServices())()
{
  NTSTATUS (*result)(); // rax
  PVOID NotificationEntry; // [rsp+50h] [rbp+10h] BYREF

  NotificationEntry = 0LL;
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    0,
    &GUID_DEVICE_THERMAL_ZONE,
    PnpDriverObject,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)PopNotifyPolicyDevice,
    (PVOID)1,
    &NotificationEntry);
  NotificationEntry = 0LL;
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    0,
    &GUID_DEVICE_BATTERY,
    PnpDriverObject,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)PopNotifyPolicyDevice,
    (PVOID)2,
    &NotificationEntry);
  NotificationEntry = 0LL;
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    0,
    &GUID_DEVICE_MEMORY,
    PnpDriverObject,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)PopNotifyPolicyDevice,
    (PVOID)3,
    &NotificationEntry);
  NotificationEntry = 0LL;
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    0,
    &GUID_DEVICE_ACPI_TIME,
    PnpDriverObject,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)PopNotifyPolicyDevice,
    (PVOID)8,
    &NotificationEntry);
  NotificationEntry = 0LL;
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    0,
    &GUID_DEVICE_FAN,
    PnpDriverObject,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)PopNotifyPolicyDevice,
    (PVOID)9,
    &NotificationEntry);
  NotificationEntry = 0LL;
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    0,
    &GUID_DEVICE_POWER_ADAPTER,
    PnpDriverObject,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)PopNotifyPolicyDevice,
    (PVOID)0x10,
    &NotificationEntry);
  NotificationEntry = 0LL;
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    1u,
    &GUID_DEVINTERFACE_HPMI,
    PnpDriverObject,
    (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)PopCadHpmiPnpNotification,
    0LL,
    &NotificationEntry);
  result = PopCadTriggerDriverLoad;
  PopCadTriggerDriverLoadWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopCadTriggerDriverLoad;
  PopCadTriggerDriverLoadWorkItem.Parameter = 0LL;
  PopCadTriggerDriverLoadWorkItem.List.Flink = 0LL;
  return result;
}
