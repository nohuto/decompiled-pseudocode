/*
 * XREFs of KiInitializeReservedCpuSets @ 0x140CD18F0
 * Callers:
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     KiValidateCpuSetMasks @ 0x14045BE5C (KiValidateCpuSetMasks.c)
 *     KeModifySystemAllowedCpuSets @ 0x1405F6688 (KeModifySystemAllowedCpuSets.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS KiInitializeReservedCpuSets()
{
  NTSTATUS result; // eax
  __int64 v1; // r8
  unsigned int v2; // r10d
  int i; // ebx
  unsigned __int8 Length; // [rsp+20h] [rbp-E0h]
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp-70h] BYREF
  int v11; // [rsp+94h] [rbp-6Ch]
  unsigned int v12; // [rsp+98h] [rbp-68h]
  _BYTE Src[260]; // [rsp+9Ch] [rbp-64h] BYREF

  memset_0(KeyValueInformation, 0, 0x110uLL);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ResultLength = 0;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v7[1] = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\kernel";
  v7[0] = 9699474LL;
  ValueName.Buffer = L"ReservedCpuSets";
  *(_QWORD *)&ValueName.Length = 2097182LL;
  KeyHandle = 0LL;
  memset_0(&KiReservedCpuSets, 0, 0x100uLL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v7;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( result < 0 )
    goto LABEL_13;
  result = ZwQueryValueKey(
             KeyHandle,
             &ValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x110u,
             &ResultLength);
  if ( result < 0 )
    goto LABEL_13;
  if ( v11 != 3 )
    goto LABEL_13;
  if ( (v12 & 7) != 0 )
    goto LABEL_13;
  result = KiValidateCpuSetMasks((__int64)Src, v12 >> 3);
  if ( result < 0 )
    goto LABEL_13;
  if ( v2 >= 0x20 )
  {
    v2 = 32;
  }
  else if ( !v2 )
  {
    goto LABEL_11;
  }
  memmove(&KiReservedCpuSets, Src, 8LL * v2);
LABEL_11:
  for ( i = 0; i < 2; ++i )
    result = KeModifySystemAllowedCpuSets(0, 0, v1, i, Length);
LABEL_13:
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
