/*
 * XREFs of NvmeAdapterSendControlRemoveSubsystemPort @ 0x1400DCAB8
 * Callers:
 *     NvmeAdapterCleanupSubsystemPort @ 0x1400D36DC (NvmeAdapterCleanupSubsystemPort.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeCallMiniportAdapterControlSafe @ 0x140078794 (NvmeCallMiniportAdapterControlSafe.c)
 *     McTemplateK0qjzqsdqs_EtwWriteTransfer @ 0x1400D1EA4 (McTemplateK0qjzqsdqs_EtwWriteTransfer.c)
 */

__int64 __fastcall NvmeAdapterSendControlRemoveSubsystemPort(__int64 a1, __int64 a2)
{
  __int64 Pool; // rax
  __int64 v5; // rbx
  int v6; // esi
  __int64 v7; // rdx

  Pool = RaidAllocatePool(256LL, 102LL, 1179541842LL, *(_QWORD *)(a1 + 8));
  v5 = Pool;
  if ( Pool )
  {
    *(_DWORD *)Pool = 6684673;
    *(_DWORD *)(Pool + 8) = 2;
    *(_DWORD *)(Pool + 12) = 65624;
    *(_WORD *)(Pool + 16) = 88;
    *(_QWORD *)(Pool + 22) = *(_QWORD *)(a2 + 48);
    v6 = NvmeCallMiniportAdapterControlSafe(a1 + 168);
    if ( v6 < 0 )
    {
      if ( (byte_14017344A & 4) != 0 )
        McTemplateK0qjzqsdqs_EtwWriteTransfer(
          a2 + 60,
          v7,
          a1 + 1048,
          *(_DWORD *)(a1 + 56),
          a1 + 1048,
          *(const wchar_t **)(a1 + 1032),
          2,
          (const char *)(a2 + 60),
          v6,
          *(_DWORD *)(v5 + 30),
          (const char *)(v5 + 34));
    }
    else
    {
      *(_QWORD *)(a2 + 48) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v5, 0x464E6152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
