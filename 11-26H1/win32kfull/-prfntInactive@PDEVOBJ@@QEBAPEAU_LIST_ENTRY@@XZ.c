/*
 * XREFs of ?prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x14019CB6C
 * Callers:
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x14017515C (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x14030CA70 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x14030EED4 (-vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z.c)
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
