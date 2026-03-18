/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x1404BCEA0
 * Callers:
 *     PopEtGetProcessVersionInfo @ 0x14094E76C (PopEtGetProcessVersionInfo.c)
 *     PopEtGetProcessImageInfo @ 0x14094E8C4 (PopEtGetProcessImageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x14096DF08 (EtwpQueryProcessOtherInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 688);
}
