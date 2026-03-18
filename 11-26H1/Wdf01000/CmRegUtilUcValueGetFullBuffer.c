/*
 * XREFs of CmRegUtilUcValueGetFullBuffer @ 0x1400DBB6C
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1400DB434 (PiRegStateReadStackCreationSettingsFromKey.c)
 * Callees:
 *     memset @ 0x1400ACFC0 (memset.c)
 */

__int64 __fastcall CmRegUtilUcValueGetFullBuffer(
        void *KeyHandle,
        _UNICODE_STRING *ValueName,
        unsigned int Information,
        unsigned int a4,
        _KEY_VALUE_FULL_INFORMATION **ValueName_0)
{
  _KEY_VALUE_FULL_INFORMATION **v5; // rsi
  unsigned int v8; // eax
  ULONG Length; // edi
  _KEY_VALUE_FULL_INFORMATION *PoolWithTag; // rax
  _KEY_VALUE_FULL_INFORMATION *v11; // rbx
  NTSTATUS v12; // edi
  _KEY_VALUE_FULL_INFORMATION *v14; // rax
  unsigned int keyValueLength; // [rsp+68h] [rbp+20h] BYREF

  v5 = ValueName_0;
  keyValueLength = 0;
  v8 = (ValueName->Length + 31) & 0xFFFFFFF8;
  *ValueName_0 = 0LL;
  Length = v8;
  PoolWithTag = (_KEY_VALUE_FULL_INFORMATION *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x62527050u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, Length);
  v12 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, v11, Length, &keyValueLength);
  if ( v12 < 0 )
  {
    ExFreePoolWithTag(v11, 0);
    if ( v12 != -2147483643 && v12 != -1073741789 )
      return (unsigned int)v12;
    v14 = (_KEY_VALUE_FULL_INFORMATION *)ExAllocatePoolWithTag(NonPagedPoolNx, keyValueLength, 0x62527050u);
    v11 = v14;
    if ( v14 )
    {
      memset(v14, 0, keyValueLength);
      v12 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, v11, keyValueLength, &keyValueLength);
      if ( v12 < 0 )
      {
LABEL_10:
        ExFreePoolWithTag(v11, 0);
        return (unsigned int)v12;
      }
      goto $Success;
    }
    return 3221225626LL;
  }
$Success:
  if ( v11->Type != 3 )
  {
    v12 = -1073741788;
    goto LABEL_10;
  }
  *v5 = v11;
  return 0LL;
}
