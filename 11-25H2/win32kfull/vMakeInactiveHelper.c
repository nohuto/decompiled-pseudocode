/*
 * XREFs of vMakeInactiveHelper @ 0x14030DF34
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1401F3650 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ?vUnlinkAllEudcFromRFONTListInternal@@YAXPEAUHDEV__@@@Z @ 0x14030E07C (-vUnlinkAllEudcFromRFONTListInternal@@YAXPEAUHDEV__@@@Z.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x14030E428 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x14030E570 (vUnlinkEudcRFONTsWorker.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1402611D4 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 */

void __fastcall vMakeInactiveHelper(struct _LIST_ENTRY **a1)
{
  struct _LIST_ENTRY *v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( *a1 )
    {
      v2 = *a1;
      RFONTOBJ::bMakeInactiveHelper(&v2, 0LL);
      *a1 = 0LL;
      v2 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v2);
    }
  }
}
