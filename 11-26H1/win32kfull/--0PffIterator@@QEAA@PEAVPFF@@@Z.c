/*
 * XREFs of ??0PffIterator@@QEAA@PEAVPFF@@@Z @ 0x140297050
 * Callers:
 *     ?bFoundForcedMatch@MAPPER@@QEAAHXZ @ 0x1400C74D0 (-bFoundForcedMatch@MAPPER@@QEAAHXZ.c)
 *     bAddAllFlEntry @ 0x1400CAAB4 (bAddAllFlEntry.c)
 *     vCleanupPrivateFonts @ 0x1400FD9B0 (vCleanupPrivateFonts.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@AEAI@Z @ 0x1400FDD9C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@AEAI@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x140104000 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z @ 0x140106418 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z.c)
 *     ?PffBucket@PFT@@QEBA?AVPffIterator@@K@Z @ 0x14025A850 (-PffBucket@PFT@@QEBA-AVPffIterator@@K@Z.c)
 *     ?QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x14025B1C8 (-QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x14028F80C (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 * Callees:
 *     <none>
 */

PffIterator *__fastcall PffIterator::PffIterator(PffIterator *this, struct PFF *a2)
{
  int v2; // r8d
  bool v3; // al

  v2 = 0;
  for ( *(_QWORD *)this = a2; ; *(_QWORD *)this = a2 )
  {
    v3 = 0;
    if ( a2 )
    {
      v2 |= 1u;
      if ( (*((_DWORD *)a2 + 13) & 0x10000) != 0 )
        v3 = 1;
    }
    if ( (v2 & 1) != 0 )
      v2 &= ~1u;
    if ( !v3 )
      break;
    a2 = (struct PFF *)*((_QWORD *)a2 + 1);
  }
  return this;
}
