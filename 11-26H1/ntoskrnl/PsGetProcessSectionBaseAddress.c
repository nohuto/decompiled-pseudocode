/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x1404B6680
 * Callers:
 *     PopEtGetProcessVersionInfo @ 0x1409CA0AC (PopEtGetProcessVersionInfo.c)
 *     PopEtGetProcessImageInfo @ 0x1409CA204 (PopEtGetProcessImageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x1409D3984 (EtwpQueryProcessOtherInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 688);
}
