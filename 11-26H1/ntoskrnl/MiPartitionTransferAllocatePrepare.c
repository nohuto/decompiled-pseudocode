/*
 * XREFs of MiPartitionTransferAllocatePrepare @ 0x140B633E0
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x140B632C4 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiInitializeDemandCoalesceContext @ 0x140206BB0 (MiInitializeDemandCoalesceContext.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 */

__int64 __fastcall MiPartitionTransferAllocatePrepare(__int64 a1)
{
  int v1; // esi
  unsigned __int64 v2; // rbp
  __int64 result; // rax
  unsigned int v5; // r15d
  __int64 v6; // r12
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rax

  v1 = *(_DWORD *)(a1 + 28);
  v2 = *(_QWORD *)(a1 + 16);
  if ( (v1 & 0x200) == 0 && (int)MiAcquireNonPagedResources(*(ULONG **)a1, v2, 0LL, 8LL) < 0 )
    return 3221225626LL;
  v5 = (unsigned __int16)KeNumberNodes;
  if ( (v1 & 1) == 0 )
    v5 = 1;
  v6 = qword_140E2D810 + 4LL * *(_DWORD *)(a1 + 24) * (unsigned int)(unsigned __int16)KeNumberNodes;
  if ( v2 < 0x40000 )
    v7 = -(__int64)(v2 < 0x200) & 0xFFFFFFFFFFFFFE10uLL;
  else
    v7 = (v1 & 0x180) != 0 ? 0x3FE00 : 0;
  v8 = v7 + 512;
  v9 = v2 / v8;
  if ( v2 / v8 <= 1 )
    v9 = 1LL;
  if ( (v1 & 0xA2) != 0 || (v1 & 0x200) != 0 )
    *(_DWORD *)(a1 + 80) = 1;
  MiInitializeDemandCoalesceContext((_QWORD *)(a1 + 88), v8, v9, *(_DWORD *)(a1 + 80));
  *(_DWORD *)(a1 + 32) = ((v1 & 4) << 13) | 0x100001;
  *(_QWORD *)(a1 + 48) = v6;
  *(_QWORD *)(a1 + 40) = 0LL;
  result = 0LL;
  *(_QWORD *)(a1 + 56) = v6 + 4LL * v5;
  return result;
}
