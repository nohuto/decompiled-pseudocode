/*
 * XREFs of PipIsDeviceReadyForPowerRelations @ 0x140911614
 * Callers:
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x140771D30 (PipCheckIfAllProvidersHaveDevnodes.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14090ED8C (PipProcessRebuildPowerRelationsQueue.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x14091159C (PipAddtoRebuildPowerRelationsQueue.c)
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
