/*
 * XREFs of ?iHash@@YAIPEBGI@Z @ 0x1400CA7A4
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1400C7CD0 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEBG@Z @ 0x1400CA61C (-bFindBitmapFont@MAPPER@@QEAAHPEBG@Z.c)
 *     ?vSetUniqueness@PFFOBJ@@QEAAXXZ @ 0x1400CAA20 (-vSetUniqueness@PFFOBJ@@QEAAXXZ.c)
 *     bAddAllFlEntry @ 0x1400CAAB4 (bAddAllFlEntry.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x140104000 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x140105050 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x140105540 (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z @ 0x140106418 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall iHash(const unsigned __int16 *a1, unsigned int a2)
{
  unsigned int v2; // eax
  int v3; // r8d

  v2 = 0;
  while ( *a1 )
  {
    v3 = *(unsigned __int8 *)a1++;
    v2 = v3 + 257 * v2;
  }
  return v2 % a2;
}
