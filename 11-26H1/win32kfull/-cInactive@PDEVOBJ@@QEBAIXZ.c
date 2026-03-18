/*
 * XREFs of ?cInactive@PDEVOBJ@@QEBAIXZ @ 0x1401AB924
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140105CD0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 *     vDeactivateEudcRFONTsWorker @ 0x140324C34 (vDeactivateEudcRFONTsWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::cInactive(PDEVOBJ *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x800000) != 0 )
    return *(unsigned int *)(*(_QWORD *)(v1 + 3512) + 1552LL);
  else
    return *(unsigned int *)(v1 + 1552);
}
