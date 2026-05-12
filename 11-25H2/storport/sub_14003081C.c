/*
 * XREFs of sub_14003081C @ 0x14003081C
 * Callers:
 *     sub_140030360 @ 0x140030360 (sub_140030360.c)
 *     sub_140030450 @ 0x140030450 (sub_140030450.c)
 *     sub_14007A2E0 @ 0x14007A2E0 (sub_14007A2E0.c)
 *     sub_14007A7B0 @ 0x14007A7B0 (sub_14007A7B0.c)
 * Callees:
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 */

__int64 __fastcall sub_14003081C(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( sub_1400215B0(a1, 5) )
    return (unsigned int)sub_140021760(*(_QWORD *)(a1 + 24) + 376LL);
  return v2;
}
