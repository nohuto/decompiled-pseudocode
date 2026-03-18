/*
 * XREFs of CmRegUtilUcValueSetUcString @ 0x1400DBCE0
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1400DB600 (PpRegStateReadCreateClassCreationSettings.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1400DBED0 (CmRegUtilWstrValueSetWstrString.c)
 * Callees:
 *     memset @ 0x1400ACFC0 (memset.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

__int64 __fastcall CmRegUtilUcValueSetUcString(void *KeyHandle, _UNICODE_STRING *ValueName, _UNICODE_STRING *ValueData)
{
  unsigned __int64 Length; // r9
  unsigned __int64 v5; // rax
  unsigned int v8; // ebx
  size_t v9; // rdi
  wchar_t *PoolWithTag; // rax
  wchar_t *Buffer; // rdx
  _UNICODE_STRING tempString; // [rsp+30h] [rbp-28h] BYREF

  Length = ValueData->Length;
  v5 = ValueData->MaximumLength - Length;
  *(_DWORD *)(&tempString.MaximumLength + 1) = 0;
  if ( v5 < 2 )
  {
    v9 = Length + 2;
    tempString.MaximumLength = Length + 2;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Length + 2, 0x63557050u);
    tempString.Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v9);
      Buffer = ValueData->Buffer;
      tempString.Length = ValueData->Length;
      memmove(tempString.Buffer, Buffer, tempString.Length);
      tempString.Buffer[(unsigned __int64)tempString.Length >> 1] = 0;
      v8 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, tempString.Buffer, tempString.Length + 2);
      RtlFreeUnicodeString(&tempString);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    ValueData->Buffer[Length >> 1] = 0;
    return (unsigned int)ZwSetValueKey(KeyHandle, ValueName, 0, 1u, ValueData->Buffer, ValueData->Length + 2);
  }
  return v8;
}
