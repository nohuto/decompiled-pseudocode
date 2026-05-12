/*
 * XREFs of RaidRemapScatterGatherList @ 0x1401C2008
 * Callers:
 *     StorPortGetScatterGatherListVrfy @ 0x1401C22F0 (StorPortGetScatterGatherListVrfy.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RaidRemapScatterGatherList(unsigned int *VirtualAddress, __int64 a2)
{
  unsigned __int64 v5; // rcx
  struct _MDL *Mdl; // rax
  struct _MDL *v7; // rdi
  PVOID v8; // rsi

  if ( *(_QWORD *)(a2 + 120) )
    return *(PVOID *)(a2 + 128);
  v5 = 24LL * *VirtualAddress;
  if ( v5 <= 0xFFFFFFFF && (int)v5 + 12 >= (unsigned int)v5 )
  {
    Mdl = IoAllocateMdl(VirtualAddress, (int)v5 + 12, 0, 0, 0LL);
    v7 = Mdl;
    if ( Mdl )
    {
      MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
      v8 = MmMapLockedPagesSpecifyCache(v7, 0, MmCached, 0LL, 0, 0x40000010u);
      if ( v8 )
      {
        MmProtectMdlSystemAddress(v7, 2u);
        *(_QWORD *)(a2 + 120) = v7;
        *(_QWORD *)(a2 + 128) = v8;
        return v8;
      }
      MmUnlockPages(v7);
      IoFreeMdl(v7);
    }
    *(_QWORD *)(a2 + 120) = 0LL;
  }
  return 0LL;
}
