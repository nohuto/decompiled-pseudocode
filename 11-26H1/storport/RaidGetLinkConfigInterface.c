/*
 * XREFs of RaidGetLinkConfigInterface @ 0x140094504
 * Callers:
 *     StorAdapterInitializeDlrmIfSupported @ 0x1401B0860 (StorAdapterInitializeDlrmIfSupported.c)
 *     StorQueryPciLinkInformation @ 0x1401B0DC8 (StorQueryPciLinkInformation.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidQueryPciLinkConfigInterface @ 0x140095AC8 (RaidQueryPciLinkConfigInterface.c)
 */

__int64 __fastcall RaidGetLinkConfigInterface(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  _WORD *Pool; // rbx
  int PciLinkConfigInterface; // edi

  if ( a2 && a1 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v3 != 1094997074 )
      return 3221225659LL;
    v5 = *(_QWORD *)(v3 + 6280);
    *a2 = 0LL;
    if ( v5 )
    {
      *a2 = v5;
      return 0LL;
    }
    Pool = (_WORD *)RaidAllocatePool(64LL, 48LL, 1296851282LL, a1);
    if ( !Pool )
      return 3221225495LL;
    PciLinkConfigInterface = RaidQueryPciLinkConfigInterface(*(PDEVICE_OBJECT *)(v3 + 32));
    if ( PciLinkConfigInterface >= 0 )
    {
      if ( Pool[1] == 1 && *Pool == 48 && *((_QWORD *)Pool + 5) && *((_QWORD *)Pool + 1) && *((_QWORD *)Pool + 4) )
      {
        *a2 = Pool;
        return (unsigned int)PciLinkConfigInterface;
      }
      PciLinkConfigInterface = -1073741811;
    }
    ExFreePoolWithTag(Pool, 0x4D4C6152u);
    return (unsigned int)PciLinkConfigInterface;
  }
  return 3221225485LL;
}
