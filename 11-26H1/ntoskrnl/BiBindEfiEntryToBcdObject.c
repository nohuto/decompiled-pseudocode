/*
 * XREFs of BiBindEfiEntryToBcdObject @ 0x1409A0B80
 * Callers:
 *     BiBindEfiEntries @ 0x1409A0C88 (BiBindEfiEntries.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     BiCreateObject @ 0x1409A3A50 (BiCreateObject.c)
 *     BiGetKeyName @ 0x1409A4FC4 (BiGetKeyName.c)
 *     BcdCloseObject @ 0x1409A5E18 (BcdCloseObject.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiBindEfiEntryToBcdObject(int a1, GUID *a2)
{
  unsigned int Data1; // eax
  NTSTATUS Object; // ebx
  GUID v5; // xmm0
  PCWSTR SourceString; // [rsp+30h] [rbp-40h] BYREF
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v9[2]; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  GUID Guid; // [rsp+58h] [rbp-18h] BYREF

  Data1 = a2[3].Data1;
  SourceString = 0LL;
  BcdObjectHandle = 0LL;
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
    Object = BiCreateObject(a1, 0, (unsigned int)v9, 1, (__int64)&BcdObjectHandle);
    if ( Object >= 0 )
    {
      Object = BiGetKeyName(BcdObjectHandle, &SourceString);
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
    if ( BcdObjectHandle )
      BcdCloseObject(BcdObjectHandle);
  }
  return (unsigned int)Object;
}
