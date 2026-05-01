/*
 * XREFs of AslGuidToString @ 0x1800994C0
 * Callers:
 *     SdbpGetCustomSdbFileName @ 0x180091620 (SdbpGetCustomSdbFileName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     RtlStringCchPrintfW @ 0x18008D0EC (RtlStringCchPrintfW.c)
 */

__int64 __fastcall AslGuidToString(_WORD *a1, __int64 a2, unsigned int *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-58h]
  int v7; // [rsp+28h] [rbp-50h]
  int v8; // [rsp+30h] [rbp-48h]
  int v9; // [rsp+38h] [rbp-40h]
  int v10; // [rsp+40h] [rbp-38h]
  int v11; // [rsp+48h] [rbp-30h]
  int v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+60h] [rbp-18h]
  int v15; // [rsp+68h] [rbp-10h]

  v15 = *((unsigned __int8 *)a3 + 15);
  v14 = *((unsigned __int8 *)a3 + 14);
  v13 = *((unsigned __int8 *)a3 + 13);
  v12 = *((unsigned __int8 *)a3 + 12);
  v11 = *((unsigned __int8 *)a3 + 11);
  v10 = *((unsigned __int8 *)a3 + 10);
  v9 = *((unsigned __int8 *)a3 + 9);
  v8 = *((unsigned __int8 *)a3 + 8);
  v7 = *((unsigned __int16 *)a3 + 3);
  v6 = *((unsigned __int16 *)a3 + 2);
  v3 = RtlStringCchPrintfW(
         a1,
         43LL,
         (__int64)L"{%08lx-%04hx-%04hx-%02hx%02hx-%02hx%02hx%02hx%02hx%02hx%02hx}",
         *a3,
         v6,
         v7,
         v8,
         v9,
         v10,
         v11,
         v12,
         v13,
         v14,
         v15);
  v4 = v3;
  if ( v3 >= 0 )
    return 0;
  else
    AslLogCallPrintf(1LL, "AslGuidToString", 334LL, "RtlStringCchPrintfW failed [%x]", v3);
  return v4;
}
