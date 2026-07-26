/*
 * XREFs of ?ndisPcwAddSinglePhysicalInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140162A20
 * Callers:
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x140068B60 (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     ?ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140162F60 (-ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

NTSTATUS __fastcall ndisPcwAddSinglePhysicalInstance(struct _PCW_BUFFER *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  const UNICODE_STRING *MiniportName; // rax
  __int64 v3; // rdx
  int v4; // r9d
  PPCW_BUFFER v5; // r10
  struct _PCW_DATA Data; // [rsp+30h] [rbp-18h] BYREF

  Data.Data = a2->PhysicalPerformanceCounters;
  Data.Size = 32;
  MiniportName = ndisPcwGetMiniportName(a2);
  return PcwAddInstance(v5, MiniportName, v4 ^ (*(_DWORD *)(v3 + 4056) ^ v4) & 0xFFFFFF, 1u, &Data);
}
