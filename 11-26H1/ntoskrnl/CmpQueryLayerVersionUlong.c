/*
 * XREFs of CmpQueryLayerVersionUlong @ 0x140856450
 * Callers:
 *     CmpLoadLayerVersion @ 0x140855900 (CmpLoadLayerVersion.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

NTSTATUS __fastcall CmpQueryLayerVersionUlong(_DWORD *a1, const WCHAR *a2, void *a3)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-158h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-150h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-138h] BYREF
  int v10; // [rsp+54h] [rbp-134h]
  int v11; // [rsp+58h] [rbp-130h]
  int v12; // [rsp+5Ch] [rbp-12Ch]

  DestinationString = 0LL;
  memset_0(KeyValueInformation, 0, 0x10CuLL);
  ResultLength = 0;
  *a1 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  result = ZwQueryValueKey(
             a3,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x10Cu,
             &ResultLength);
  if ( result >= 0 )
  {
    if ( v10 == 4 )
    {
      if ( v11 + 12 == ResultLength )
      {
        if ( v11 == 4 )
        {
          *a1 = v12;
          return 0;
        }
        else
        {
          return -1073741306;
        }
      }
      else
      {
        return -1073741764;
      }
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
