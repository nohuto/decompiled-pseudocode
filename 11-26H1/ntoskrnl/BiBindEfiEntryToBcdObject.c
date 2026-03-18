/*
 * XREFs of BiBindEfiEntryToBcdObject @ 0x1409CFBA0
 * Callers:
 *     BiBindEfiEntries @ 0x1409CFCA8 (BiBindEfiEntries.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1409A1880 (RtlGUIDFromString.c)
 *     BiCreateObject @ 0x1409D2A70 (BiCreateObject.c)
 *     BiGetKeyName @ 0x1409D3FE4 (BiGetKeyName.c)
 *     BcdCloseObject @ 0x1409D4E38 (BcdCloseObject.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiBindEfiEntryToBcdObject(int a1, GUID *a2)
{
  unsigned int Data1; // eax
  NTSTATUS Object; // ebx
  GUID v5; // xmm0
  PCWSTR SourceString; // [rsp+30h] [rbp-40h] BYREF
  HANDLE v8; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v9[2]; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  GUID Guid; // [rsp+58h] [rbp-18h] BYREF

  Data1 = a2[3].Data1;
  SourceString = 0LL;
  v8 = 0LL;
  Guid = 0LL;
  DestinationString = 0LL;
  if ( (Data1 & 4) != 0 )
  {
    return 0;
  }
  else
  {
    v9[1] = 270532607;
    v9[0] = 1;
    Object = BiCreateObject(a1, 0, (unsigned int)v9, 1, (__int64)&v8);
    if ( Object >= 0 )
    {
      Object = BiGetKeyName(v8, &SourceString);
      if ( Object >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        Object = RtlGUIDFromString(&DestinationString, &Guid);
        if ( Object >= 0 )
        {
          v5 = Guid;
          a2[3].Data1 |= 4u;
          a2[1] = v5;
        }
      }
      if ( SourceString )
        ExFreePoolWithTag((PVOID)SourceString, 0x4B444342u);
    }
    if ( v8 )
      BcdCloseObject(v8);
  }
  return (unsigned int)Object;
}
