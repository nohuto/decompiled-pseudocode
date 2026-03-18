/*
 * XREFs of ?prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x14016C588
 * Callers:
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1401502F4 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1402611D4 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     HDEV_DeleteRfontsAndUnloadDeviceFonts @ 0x1402620D0 (HDEV_DeleteRfontsAndUnloadDeviceFonts.c)
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1402660F4 (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1402FD954 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x1402FFDB4 (-vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z.c)
 *     ?vUnlinkAllEudcFromRFONTListInternal@@YAXPEAUHDEV__@@@Z @ 0x14030E07C (-vUnlinkAllEudcFromRFONTListInternal@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall PDEVOBJ::prfntInactive(PDEVOBJ *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x800000) != 0 )
    v1 = *(_QWORD *)(v1 + 3512);
  return (struct _LIST_ENTRY *)(v1 + 1536);
}
