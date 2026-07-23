/*
 * XREFs of BiGetObjectIdentifier @ 0x1409A4F60
 * Callers:
 *     BcdQueryObject @ 0x14077CA50 (BcdQueryObject.c)
 *     BiResolveLocate @ 0x14089933C (BiResolveLocate.c)
 *     BcdGetElementDataWithFlags @ 0x1409A5B60 (BcdGetElementDataWithFlags.c)
 *     PopBcdSetPendingResume @ 0x140B4E554 (PopBcdSetPendingResume.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     BiGetKeyName @ 0x1409A4FC4 (BiGetKeyName.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetObjectIdentifier(__int64 a1, GUID *a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PCWSTR SourceString; // [rsp+50h] [rbp+18h] BYREF

  SourceString = 0LL;
  DestinationString = 0LL;
  result = BiGetKeyName(a1, &SourceString);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v4 = RtlGUIDFromString(&DestinationString, a2);
    ExFreePoolWithTag((PVOID)SourceString, 0x4B444342u);
    return v4;
  }
  return result;
}
