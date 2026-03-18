/*
 * XREFs of Crashdump_DoBulkTransfer @ 0x140050A70
 * Callers:
 *     Crashdump_SendUrb @ 0x140051710 (Crashdump_SendUrb.c)
 *     Crashdump_SendUrbAsync @ 0x140051800 (Crashdump_SendUrbAsync.c)
 * Callees:
 *     Crashdump_Endpoint_SendBulkTransfer @ 0x140053AE4 (Crashdump_Endpoint_SendBulkTransfer.c)
 */

__int64 __fastcall Crashdump_DoBulkTransfer(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v8; // r9d
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r9

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_DoBulkTransfer: Begin\n");
  v8 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 24) + 2LL);
  v9 = (unsigned __int8)(2 * v8 + (*(_BYTE *)(*(_QWORD *)(a2 + 24) + 2LL) >> 7));
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Endpoint: 0x%X,%u, BufferLength %u\n", v8, v9, *(_DWORD *)(a2 + 36));
  v10 = *(_QWORD *)(a1 + 576);
  LOBYTE(v11) = a4;
  *(_BYTE *)(a1 + 626) = 0;
  LODWORD(v9) = Crashdump_Endpoint_SendBulkTransfer(*(_QWORD *)(v10 + 8 * v9 + 112), a2, a3, v11);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_DoBulkTransfer: end 0x%X\n", v9);
  return (unsigned int)v9;
}
