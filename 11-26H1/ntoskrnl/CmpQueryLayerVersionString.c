/*
 * XREFs of CmpQueryLayerVersionString @ 0x14085C6B4
 * Callers:
 *     CmpLoadLayerVersion @ 0x14085BC98 (CmpLoadLayerVersion.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __fastcall CmpQueryLayerVersionString(
        PUNICODE_STRING DestinationString,
        char *SourceString,
        unsigned __int16 a3,
        const WCHAR *a4,
        HANDLE KeyHandle)
{
  unsigned __int64 v6; // r14
  NTSTATUS result; // eax
  __int64 v10; // rbx
  ULONG ResultLength; // [rsp+30h] [rbp-168h] BYREF
  UNICODE_STRING DestinationStringa; // [rsp+38h] [rbp-160h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-148h] BYREF
  int v14; // [rsp+54h] [rbp-144h]
  unsigned int Size; // [rsp+58h] [rbp-140h]
  size_t Size_4; // [rsp+5Ch] [rbp-13Ch] BYREF

  v6 = a3;
  DestinationStringa = 0LL;
  memset_0(KeyValueInformation, 0, 0x10CuLL);
  *DestinationString = 0LL;
  ResultLength = 0;
  RtlInitUnicodeString(&DestinationStringa, a4);
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationStringa,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x10Cu,
             &ResultLength);
  if ( result >= 0 )
  {
    if ( v14 == 1 )
    {
      if ( Size + 12 == ResultLength )
      {
        if ( (Size & 1) != 0 )
        {
          return -1073741306;
        }
        else
        {
          v10 = Size;
          if ( (unsigned __int64)Size + 2 <= v6 )
          {
            memmove(SourceString, &Size_4, Size);
            *(_WORD *)&SourceString[v10] = 0;
            RtlInitUnicodeString(DestinationString, (PCWSTR)SourceString);
            result = 0;
            DestinationString->MaximumLength = v6;
          }
          else
          {
            return -1073741789;
          }
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
