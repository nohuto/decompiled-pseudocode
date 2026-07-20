/*
 * XREFs of SmpInitializeSessionManagement @ 0x14000E800
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x1400159FC (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpInitCoreProcessArray @ 0x140018878 (SmpInitCoreProcessArray.c)
 */

NTSTATUS SmpInitializeSessionManagement()
{
  NTSTATUS result; // eax
  struct _OBJECT_ATTRIBUTES v1; // [rsp+30h] [rbp-38h] BYREF

  *(_QWORD *)&v1.Length = 48LL;
  v1.RootDirectory = 0LL;
  v1.ObjectName = 0LL;
  *(_QWORD *)&v1.Attributes = 2LL;
  *(_OWORD *)&v1.SecurityDescriptor = 0LL;
  result = NtCreateEvent(&SmpSessionCreateBlockEvent, 0x100002u, &v1, NotificationEvent, 1u);
  if ( result >= 0 )
    return SmpInitCoreProcessArray();
  return result;
}
