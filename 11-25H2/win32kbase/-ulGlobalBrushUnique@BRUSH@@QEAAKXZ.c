/*
 * XREFs of ?ulGlobalBrushUnique@BRUSH@@QEAAKXZ @ 0x140071BD0
 * Callers:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140070FD4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x140071620 (bDynamicProcessAllDriverRealizations.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1400717D8 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     GreSetSolidBrushLight @ 0x140071A70 (GreSetSolidBrushLight.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BRUSH::ulGlobalBrushUnique(BRUSH *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(this) + 88)
                                                                       + 576LL));
}
