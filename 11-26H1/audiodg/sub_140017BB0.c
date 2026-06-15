/*
 * XREFs of sub_140017BB0 @ 0x140017BB0
 * Callers:
 *     sub_1400735F0 @ 0x1400735F0 (sub_1400735F0.c)
 *     sub_140073600 @ 0x140073600 (sub_140073600.c)
 *     sub_140073610 @ 0x140073610 (sub_140073610.c)
 *     sub_140073620 @ 0x140073620 (sub_140073620.c)
 *     sub_140073630 @ 0x140073630 (sub_140073630.c)
 *     sub_140073640 @ 0x140073640 (sub_140073640.c)
 *     sub_140073650 @ 0x140073650 (sub_140073650.c)
 *     sub_140073660 @ 0x140073660 (sub_140073660.c)
 *     sub_140073670 @ 0x140073670 (sub_140073670.c)
 *     sub_140073680 @ 0x140073680 (sub_140073680.c)
 *     sub_140073690 @ 0x140073690 (sub_140073690.c)
 *     sub_1400736A0 @ 0x1400736A0 (sub_1400736A0.c)
 *     sub_1400736B0 @ 0x1400736B0 (sub_1400736B0.c)
 * Callees:
 *     sub_140017CB0 @ 0x140017CB0 (sub_140017CB0.c)
 */

__int64 __fastcall sub_140017BB0(__int64 a1, signed __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v4; // rtt

  v2 = *(_QWORD *)(a1 + 120);
  while ( 1 )
  {
    if ( v2 < 0 )
    {
      LODWORD(a2) = sub_140017CB0(2 * v2 + 16, a2, 0x7FFFFFFFLL);
      return (unsigned int)a2;
    }
    if ( (_DWORD)v2 == 0x7FFFFFFF )
      break;
    a2 = v2 + 1;
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 120), v2 + 1, v2);
    if ( v4 == v2 )
      return (unsigned int)a2;
  }
  LODWORD(a2) = 0x7FFFFFFF;
  return (unsigned int)a2;
}
