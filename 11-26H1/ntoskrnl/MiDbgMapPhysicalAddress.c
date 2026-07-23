/*
 * XREFs of MiDbgMapPhysicalAddress @ 0x140703038
 * Callers:
 *     MiDbgCopyMemoryInternal @ 0x1407025C0 (MiDbgCopyMemoryInternal.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiCheckPhysicalAddressRange @ 0x14033A5D4 (MiCheckPhysicalAddressRange.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiDbgIsPfn @ 0x140702CF4 (MiDbgIsPfn.c)
 *     MiDbgLockIoPage @ 0x140702D80 (MiDbgLockIoPage.c)
 *     MiDbgLockPage @ 0x140702F08 (MiDbgLockPage.c)
 *     MiDbgUnmapPhysicalAddress @ 0x14070393C (MiDbgUnmapPhysicalAddress.c)
 *     MxDbgGetPhase0Mapping @ 0x140D023D8 (MxDbgGetPhase0Mapping.c)
 */

__int64 __fastcall MiDbgMapPhysicalAddress(__int64 a1)
{
  unsigned __int64 v1; // rbx
  int v3; // ebp
  unsigned __int64 Blink; // rdi
  unsigned __int64 v6; // r15
  unsigned __int8 CurrentIrql; // bp
  int v8; // eax
  int v9; // ebp
  unsigned __int64 ValidPte; // rax

  v1 = *(_QWORD *)(a1 + 56);
  v3 = *(_DWORD *)a1;
  if ( !(unsigned int)MiCheckPhysicalAddressRange(v1, 1LL) )
    return 0LL;
  Blink = (unsigned __int64)stru_140E2ED08.SuspendEvent.Header.WaitListHead.Blink;
  if ( (v3 & 4) != 0 )
    Blink = (unsigned __int64)stru_140E2ED08.SuspendEvent.Header.WaitListHead.Flink;
  v6 = v1 >> 12;
  if ( !Blink )
  {
    Blink = MxDbgGetPhase0Mapping(v6);
    if ( !Blink )
    {
      stru_140E2ED08.SuspendEvent.Header.SignalState |= 2u;
      return 0LL;
    }
  }
  *(_DWORD *)(a1 + 64) = (v3 & 0x41) != 0 ? 4 : 1;
  *(_QWORD *)(a1 + 136) = 0LL;
  if ( (v3 & 4) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  }
  *(_BYTE *)(a1 + 92) = CurrentIrql;
  if ( (MiFlags & 0x40000000) == 0 )
    goto LABEL_21;
  if ( (unsigned int)MiDbgIsPfn(v6) )
  {
    v8 = MiDbgLockPage((int *)a1);
    goto LABEL_17;
  }
  if ( !KeGetCurrentPrcb()->MmInternal )
  {
LABEL_21:
    *(_DWORD *)(a1 + 88) = 4;
    goto LABEL_22;
  }
  v8 = MiDbgLockIoPage(a1);
LABEL_17:
  if ( !v8 )
  {
LABEL_27:
    MiDbgUnmapPhysicalAddress(a1);
    return 0LL;
  }
LABEL_22:
  v9 = *(_DWORD *)a1;
  ValidPte = MiMakeValidPte(Blink, v6, *(_DWORD *)(a1 + 64) | 0xA0000000);
  if ( (v9 & 0x41) != 0 )
    stru_140E2ED08.SuspendEvent.Header.Type = 1;
  if ( (v9 & 4) != 0 )
  {
    if ( *(_QWORD *)&CLFS_LSN_NULL_EXT != _InterlockedCompareExchange64(
                                            (volatile signed __int64 *)Blink,
                                            ValidPte,
                                            *(signed __int64 *)&CLFS_LSN_NULL_EXT) )
    {
      stru_140E2ED08.SuspendEvent.Header.SignalState |= 0x40u;
      goto LABEL_27;
    }
  }
  else
  {
    *(_QWORD *)Blink = ValidPte;
  }
  *(_QWORD *)(a1 + 96) = Blink;
  return (v1 & 0xFFF) + ((__int64)(Blink << 25) >> 16);
}
