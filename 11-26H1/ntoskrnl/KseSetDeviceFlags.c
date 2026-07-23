/*
 * XREFs of KseSetDeviceFlags @ 0x1407BF720
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     KsepRegistryCreateKey @ 0x1407C1D58 (KsepRegistryCreateKey.c)
 *     KsepStringTransform @ 0x1409D7270 (KsepStringTransform.c)
 *     KsepStringFree @ 0x1409D7848 (KsepStringFree.c)
 *     KsepRegistryCloseKey @ 0x1409D8784 (KsepRegistryCloseKey.c)
 */

__int64 __fastcall KseSetDeviceFlags(__int64 a1, const WCHAR *a2, __int64 a3)
{
  HANDLE v4; // rdi
  NTSTATUS v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+38h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 Data; // [rsp+80h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+38h] BYREF

  Data = a3;
  v7 = 0LL;
  v8 = 0LL;
  v4 = 0LL;
  KeyHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( dword_140E66D14 != 2 || (KseEngine & 2) != 0 )
  {
    v5 = -1073741823;
  }
  else
  {
    if ( a1 && a2 )
    {
      v5 = KsepStringTransform(&v7, a1);
      if ( v5 < 0 )
        goto LABEL_14;
      v5 = KsepRegistryCreateKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
             v8,
             &KeyHandle);
      if ( v5 == -1073741772 )
      {
        v5 = KsepRegistryCreateKey(
               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility",
               L"Device",
               &KeyHandle);
        if ( v5 < 0 )
        {
LABEL_11:
          v4 = KeyHandle;
          goto LABEL_14;
        }
        KsepRegistryCloseKey(KeyHandle);
        KeyHandle = 0LL;
        v5 = KsepRegistryCreateKey(
               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
               v8,
               &KeyHandle);
      }
      if ( v5 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, a2);
        v4 = KeyHandle;
        v5 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &Data, 8u);
        goto LABEL_14;
      }
      goto LABEL_11;
    }
    v5 = -1073741811;
  }
LABEL_14:
  KsepStringFree(&v7);
  if ( v4 )
    KsepRegistryCloseKey(v4);
  return (unsigned int)v5;
}
