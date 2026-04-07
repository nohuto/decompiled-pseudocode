/*
 * XREFs of ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x1800DE3E8
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180016FEC (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800BA730 (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PartitionSetMagnifier@CVisualProxy@@QEAAJ_N@Z @ 0x1800DE538 (-PartitionSetMagnifier@CVisualProxy@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CVisual::SetIsMagnifier(CVisualProxy **this, bool a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CVisualProxy::PartitionSetMagnifier(this[2], a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x174u, 0LL);
  return v3;
}
