/*
 * XREFs of ?cInactive@PDEVOBJ@@QEAAII@Z @ 0x1401C4AE0
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140105CD0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x14017515C (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x14030CA70 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     vDeactivateEudcRFONTsWorker @ 0x140324C34 (vDeactivateEudcRFONTsWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::cInactive(PDEVOBJ *this, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x800000) != 0 )
    *(_DWORD *)(*(_QWORD *)(v2 + 3512) + 1552LL) = a2;
  else
    *(_DWORD *)(v2 + 1552) = a2;
  return a2;
}
