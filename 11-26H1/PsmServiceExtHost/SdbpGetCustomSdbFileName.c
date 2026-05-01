/*
 * XREFs of SdbpGetCustomSdbFileName @ 0x180091620
 * Callers:
 *     SdbGetPathCustomSdb @ 0x180091150 (SdbGetPathCustomSdb.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     RtlStringCchCatW @ 0x18008D074 (RtlStringCchCatW.c)
 *     AslGuidToString @ 0x1800994C0 (AslGuidToString.c)
 */

__int64 __fastcall SdbpGetCustomSdbFileName(_WORD *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  const char *v4; // r9
  __int64 v5; // r8
  int v7; // [rsp+20h] [rbp-18h]

  *a1 = 0;
  v2 = AslGuidToString();
  v3 = v2;
  if ( v2 >= 0 )
  {
    v2 = RtlStringCchCatW(a1, 43LL, (__int64)L".sdb");
    v3 = v2;
    if ( v2 >= 0 )
      return 0;
    v4 = "RtlStringCchCatW failed [%x]";
    v5 = 831LL;
  }
  else
  {
    v4 = "AslGuidToString failed [%x]";
    v5 = 825LL;
  }
  v7 = v2;
  AslLogCallPrintf(1LL, "SdbpGetCustomSdbFileName", v5, v4, v7);
  return v3;
}
