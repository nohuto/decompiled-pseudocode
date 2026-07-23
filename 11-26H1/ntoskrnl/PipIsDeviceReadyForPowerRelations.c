/*
 * XREFs of PipIsDeviceReadyForPowerRelations @ 0x1409B36F4
 * Callers:
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x140774D30 (PipCheckIfAllProvidersHaveDevnodes.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409B0EBC (PipProcessRebuildPowerRelationsQueue.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x1409B367C (PipAddtoRebuildPowerRelationsQueue.c)
 * Callees:
 *     <none>
 */

bool __fastcall PipIsDeviceReadyForPowerRelations(__int64 a1)
{
  __int64 v1; // rax
  int v2; // eax
  bool result; // al

  result = a1
        && (v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) != 0
        && (v2 = *(_DWORD *)(v1 + 300), v2 != 769)
        && v2 != 770;
  return result;
}
