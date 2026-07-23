/*
 * XREFs of sub_1409EB1E8 @ 0x1409EB1E8
 * Callers:
 *     sub_1409EA1DC @ 0x1409EA1DC (sub_1409EA1DC.c)
 *     sub_140B6F720 @ 0x140B6F720 (sub_140B6F720.c)
 * Callees:
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     sub_1409E801C @ 0x1409E801C (sub_1409E801C.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 */

__int64 __fastcall sub_1409EB1E8(UCHAR *Source1, unsigned int a2)
{
  int v3; // ebx
  int v5; // [rsp+30h] [rbp+8h] BYREF
  void *Source2; // [rsp+40h] [rbp+18h] BYREF

  Source2 = 0LL;
  v5 = 0;
  if ( !Source1 || a2 <= 0x20 )
    goto LABEL_8;
  v3 = sub_1409E801C(Source1 + 32, a2 - 32, &Source2, &v5);
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
