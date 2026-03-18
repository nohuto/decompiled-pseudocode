/*
 * XREFs of ?ulGlobalBrushUnique@BRUSH@@QEAAKXZ @ 0x14003293C
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x140030BE0 (bDynamicProcessAllDriverRealizations.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1400322FC (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     GreSetSolidBrushLight @ 0x1400325A0 (GreSetSolidBrushLight.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140033AE4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BRUSH::ulGlobalBrushUnique(BRUSH *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(this) + 88)
                                                                       + 664LL));
}
