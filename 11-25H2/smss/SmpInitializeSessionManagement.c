/*
 * XREFs of SmpInitializeSessionManagement @ 0x14000EBC0
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpInitCoreProcessArray @ 0x140018C14 (SmpInitCoreProcessArray.c)
 */

NTSTATUS SmpInitializeSessionManagement()
{
  NTSTATUS result; // eax
  struct _OBJECT_ATTRIBUTES v1; // [rsp+30h] [rbp-38h] BYREF

  memset(&v1.Attributes + 1, 0, 20);
  v1.RootDirectory = 0LL;
  v1.ObjectName = 0LL;
  *(_QWORD *)&v1.Length = 48LL;
  v1.Attributes = 2;
  result = NtCreateEvent(&SmpSessionCreateBlockEvent, 0x100002u, &v1, NotificationEvent, 1u);
  if ( result >= 0 )
    return SmpInitCoreProcessArray();
  return result;
}
