/*
 * XREFs of NvmeAdapterSendControlUpdateNvmeController @ 0x1401A133C
 * Callers:
 *     NvmeAdapterConnectControllerInternal @ 0x1400D3D60 (NvmeAdapterConnectControllerInternal.c)
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400EADE0 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeCallMiniportAdapterControlSafe @ 0x140078794 (NvmeCallMiniportAdapterControlSafe.c)
 *     McTemplateK0qjzqsdqs_EtwWriteTransfer @ 0x1400D1EA4 (McTemplateK0qjzqsdqs_EtwWriteTransfer.c)
 */

__int64 __fastcall NvmeAdapterSendControlUpdateNvmeController(__int64 a1)
{
  __int64 v1; // rdi
  __int64 Pool; // rax
  __int64 v4; // rbx
  unsigned int v5; // esi
  int v6; // eax
  __int64 v7; // rdx

  v1 = *(_QWORD *)(a1 + 128);
  Pool = RaidAllocatePool(256LL, 118LL, 1179541842LL, *(_QWORD *)(v1 + 8));
  v4 = Pool;
  if ( Pool )
  {
    *(_DWORD *)Pool = 7733249;
    *(_DWORD *)(Pool + 8) = 5;
    *(_DWORD *)(Pool + 12) = 65640;
    *(_WORD *)(Pool + 16) = 104;
    *(_QWORD *)(Pool + 22) = *(_QWORD *)(a1 + 560);
    *(_WORD *)(Pool + 30) = *(_WORD *)(*(_QWORD *)(a1 + 592) + 78LL);
    *(_WORD *)(Pool + 32) = *(_WORD *)(a1 + 20);
    *(_DWORD *)(Pool + 34) = 16 * *(_DWORD *)(*(_QWORD *)(a1 + 592) + 1792LL);
    *(_DWORD *)(Pool + 38) = 16 * *(_DWORD *)(*(_QWORD *)(a1 + 592) + 1796LL);
    *(_DWORD *)(Pool + 42) = 16 * *(unsigned __int16 *)(*(_QWORD *)(a1 + 592) + 1800LL);
    *(_WORD *)(Pool + 46) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 592) + 1803LL);
    v6 = NvmeCallMiniportAdapterControlSafe(v1 + 168);
    v5 = v6;
    if ( v6 < 0 && (byte_14017344A & 4) != 0 )
      McTemplateK0qjzqsdqs_EtwWriteTransfer(
        *(_QWORD *)(a1 + 792),
        v7,
        v1 + 1048,
        *(_DWORD *)(v1 + 56),
        v1 + 1048,
        *(const wchar_t **)(v1 + 1032),
        5,
        *(const char **)(a1 + 792),
        v6,
        *(_DWORD *)(v4 + 50),
        (const char *)(v4 + 54));
    ExFreePoolWithTag((PVOID)v4, 0x464E6152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
