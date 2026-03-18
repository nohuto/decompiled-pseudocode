/*
 * XREFs of SdbpReadStringRef @ 0x1409E8460
 * Callers:
 *     SdbGetStringTagPtr @ 0x1409E7DF4 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbpReadTagData @ 0x1409E8130 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1409E8584 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadStringRef(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = a2;
  v9 = 0;
  if ( (SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000) == 0x6000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v4, (__int64)&v9, 4u) )
      return v9;
    AslLogCallPrintf(1, (unsigned int)"SdbpReadStringRef", 639, (unsigned int)"Error reading data");
  }
  else
  {
    SdbGetTagFromTagID(a1, v4, v6, v7);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadStringRef",
      634,
      (unsigned int)"TagID 0x%08X, Tag %04X not STRINGREF type");
  }
  return 0LL;
}
