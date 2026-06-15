/*
 * XREFs of sub_140017CB0 @ 0x140017CB0
 * Callers:
 *     sub_140017210 @ 0x140017210 (sub_140017210.c)
 *     sub_140017258 @ 0x140017258 (sub_140017258.c)
 *     sub_14001727C @ 0x14001727C (sub_14001727C.c)
 *     sub_1400178E0 @ 0x1400178E0 (sub_1400178E0.c)
 *     sub_140017930 @ 0x140017930 (sub_140017930.c)
 *     sub_140017980 @ 0x140017980 (sub_140017980.c)
 *     sub_1400179D0 @ 0x1400179D0 (sub_1400179D0.c)
 *     sub_1400179E0 @ 0x1400179E0 (sub_1400179E0.c)
 *     sub_140017AF0 @ 0x140017AF0 (sub_140017AF0.c)
 *     sub_140017B90 @ 0x140017B90 (sub_140017B90.c)
 *     sub_140017BA0 @ 0x140017BA0 (sub_140017BA0.c)
 *     sub_140017BB0 @ 0x140017BB0 (sub_140017BB0.c)
 *     sub_140017C00 @ 0x140017C00 (sub_140017C00.c)
 *     sub_140017C50 @ 0x140017C50 (sub_140017C50.c)
 *     sub_140017CA0 @ 0x140017CA0 (sub_140017CA0.c)
 *     sub_140019010 @ 0x140019010 (sub_140019010.c)
 *     sub_140019060 @ 0x140019060 (sub_140019060.c)
 *     sub_140050370 @ 0x140050370 (sub_140050370.c)
 *     sub_140053160 @ 0x140053160 (sub_140053160.c)
 *     sub_1400601B0 @ 0x1400601B0 (sub_1400601B0.c)
 *     sub_140062C88 @ 0x140062C88 (sub_140062C88.c)
 *     sub_140064F50 @ 0x140064F50 (sub_140064F50.c)
 *     sub_140065B20 @ 0x140065B20 (sub_140065B20.c)
 *     sub_140077198 @ 0x140077198 (sub_140077198.c)
 *     sub_140078AF0 @ 0x140078AF0 (sub_140078AF0.c)
 *     sub_140078B70 @ 0x140078B70 (sub_140078B70.c)
 *     sub_140078BF0 @ 0x140078BF0 (sub_140078BF0.c)
 *     sub_14007AE70 @ 0x14007AE70 (sub_14007AE70.c)
 *     sub_14007AF20 @ 0x14007AF20 (sub_14007AF20.c)
 *     sub_14007AFC0 @ 0x14007AFC0 (sub_14007AFC0.c)
 *     sub_14007B060 @ 0x14007B060 (sub_14007B060.c)
 *     sub_140086EA4 @ 0x140086EA4 (sub_140086EA4.c)
 *     sub_1400877C0 @ 0x1400877C0 (sub_1400877C0.c)
 *     sub_140088620 @ 0x140088620 (sub_140088620.c)
 *     sub_140088D3C @ 0x140088D3C (sub_140088D3C.c)
 *     sub_140089990 @ 0x140089990 (sub_140089990.c)
 *     sub_140089C20 @ 0x140089C20 (sub_140089C20.c)
 *     sub_14008BBA0 @ 0x14008BBA0 (sub_14008BBA0.c)
 *     sub_14008DA30 @ 0x14008DA30 (sub_14008DA30.c)
 *     sub_140090930 @ 0x140090930 (sub_140090930.c)
 *     sub_140090960 @ 0x140090960 (sub_140090960.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140017CB0(volatile signed __int32 *a1)
{
  signed __int32 v1; // eax

  v1 = *a1;
  if ( *a1 == 0x7FFFFFFF )
    return 0x7FFFFFFFLL;
  while ( v1 != _InterlockedCompareExchange(a1, v1 + 1, v1) )
  {
    v1 = *a1;
    if ( *a1 == 0x7FFFFFFF )
      return 0x7FFFFFFFLL;
  }
  return (unsigned int)(v1 + 1);
}
