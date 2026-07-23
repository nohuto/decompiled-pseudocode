/*
 * XREFs of PipCallbackHasDeviceOverrides @ 0x140B6B784
 * Callers:
 *     PipFindDeviceOverrideEntry @ 0x1409DAC70 (PipFindDeviceOverrideEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x140728280 (ZwQueryKey.c)
 */

bool __fastcall PipCallbackHasDeviceOverrides(void *a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  int v5; // ecx
  HANDLE KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-19h] BYREF
  __int128 KeyInformation; // [rsp+70h] [rbp+17h] BYREF
  __int128 v11; // [rsp+80h] [rbp+27h]
  __int128 v12; // [rsp+90h] [rbp+37h]

  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)a2;
  ResultLength = 0;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyInformation = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    v4 = ZwQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
    v3 = 0;
    if ( v4 != -2147483643 )
      v3 = v4;
    if ( v3 >= 0 && (v5 = DWORD1(v11)) != 0 )
    {
      *(_QWORD *)(a2 + 16) = KeyHandle;
      *(_DWORD *)(a2 + 24) = v5;
    }
    else
    {
      v3 = -1073741823;
      ZwClose(KeyHandle);
    }
  }
  return v3 >= 0;
}
