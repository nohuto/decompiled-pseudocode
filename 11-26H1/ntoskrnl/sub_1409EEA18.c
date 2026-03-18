/*
 * XREFs of sub_1409EEA18 @ 0x1409EEA18
 * Callers:
 *     sub_1409EDA0C @ 0x1409EDA0C (sub_1409EDA0C.c)
 *     sub_140B6C624 @ 0x140B6C624 (sub_140B6C624.c)
 * Callees:
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 *     sub_1409EB84C @ 0x1409EB84C (sub_1409EB84C.c)
 *     SddlpFree @ 0x1409ED230 (SddlpFree.c)
 */

__int64 __fastcall sub_1409EEA18(UCHAR *Source1, unsigned int a2)
{
  int v3; // ebx
  int v5; // [rsp+30h] [rbp+8h] BYREF
  void *Source2; // [rsp+40h] [rbp+18h] BYREF

  Source2 = 0LL;
  v5 = 0;
  if ( !Source1 || a2 <= 0x20 )
    goto LABEL_8;
  v3 = sub_1409EB84C(Source1 + 32, a2 - 32, &Source2, &v5);
  if ( v3 < 0 )
    goto LABEL_7;
  if ( v5 != 32 )
  {
LABEL_8:
    v3 = -1073741811;
    goto LABEL_7;
  }
  if ( RtlCompareMemory(Source1, Source2, 0x20uLL) != 32 )
    v3 = -1073740760;
LABEL_7:
  SddlpFree(Source2);
  return (unsigned int)v3;
}
