/*
 * XREFs of KsepDbQueryRegistryDeviceData @ 0x1409E5B5C
 * Callers:
 *     KseQueryDeviceData @ 0x1409E5A00 (KseQueryDeviceData.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404E2A70 (KsepPoolFreePaged.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     KsepRegistryQueryValue @ 0x1407BF4FC (KsepRegistryQueryValue.c)
 *     KsepRegistryCloseKey @ 0x1409E42F0 (KsepRegistryCloseKey.c)
 *     KsepStringConcatenate @ 0x1409E5358 (KsepStringConcatenate.c)
 *     KsepStringTransform @ 0x1409E5CF0 (KsepStringTransform.c)
 *     KsepStringDuplicate @ 0x1409E5E2C (KsepStringDuplicate.c)
 */

__int64 __fastcall KsepDbQueryRegistryDeviceData(__int64 a1, const WCHAR *a2, _DWORD *a3, _DWORD *a4, void *a5)
{
  HANDLE v8; // rdi
  int v9; // ebx
  int v11; // eax
  NTSTATUS v12; // ebx
  unsigned __int64 v13; // rax
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  __int64 v15; // [rsp+40h] [rbp-19h] BYREF
  void *v16; // [rsp+48h] [rbp-11h]
  __int64 v17; // [rsp+50h] [rbp-9h] BYREF
  _WORD *v18; // [rsp+58h] [rbp-1h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v8 = 0LL;
  v9 = KsepStringTransform(&v17, a1);
  if ( v9 >= 0 )
  {
    v15 = 0LL;
    v16 = 0LL;
    memset(&ObjectAttributes, 0, 44);
    KeyHandle = 0LL;
    if ( v18 )
      v11 = KsepStringConcatenate(
              (__int64)&v15,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
              v18,
              1);
    else
      v11 = KsepStringDuplicate(&v15, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device");
    v12 = v11;
    if ( v11 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v12 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( v12 >= 0 )
      {
        v8 = KeyHandle;
        _InterlockedIncrement((volatile signed __int32 *)&AlpcpMessageLogLock.RelativeTimerBias);
      }
    }
    if ( v16 )
      KsepPoolFreePaged(v16);
    if ( v12 < 0
      || (v13 = (unsigned int)*a4,
          LODWORD(KeyHandle) = 0,
          v15 = v13,
          v9 = KsepRegistryQueryValue(v8, a2, &KeyHandle, a5, v13, (size_t *)&v15),
          *a4 = v15,
          v9 == -1073741772) )
    {
      v9 = -1073741275;
    }
    else if ( v9 >= 0 )
    {
      v9 = 0;
      *a3 |= (unsigned int)KeyHandle | 0x10000000;
    }
    if ( v8 )
      KsepRegistryCloseKey(v8);
  }
  if ( v18 )
    KsepPoolFreePaged(v18);
  return (unsigned int)v9;
}
