/*
 * XREFs of MiCopyOnWrite @ 0x14036AD38
 * Callers:
 *     MmProtectPool @ 0x14024E084 (MmProtectPool.c)
 *     MiLockCode @ 0x14029602C (MiLockCode.c)
 *     MiWalkVaRange @ 0x1402D3560 (MiWalkVaRange.c)
 *     MiCompleteProtoPteFault @ 0x1402D8E50 (MiCompleteProtoPteFault.c)
 *     MiProbeLeafPteAccess @ 0x1402EF490 (MiProbeLeafPteAccess.c)
 *     MiSectionProtectValidPte @ 0x140304460 (MiSectionProtectValidPte.c)
 *     MiFaultInPagedPool @ 0x140306688 (MiFaultInPagedPool.c)
 *     MiMakeProtoPrivate @ 0x1403114CC (MiMakeProtoPrivate.c)
 *     MiSplitPrivatePage @ 0x1403173FC (MiSplitPrivatePage.c)
 *     MiMakeDriverPagesPrivate @ 0x14038A9E0 (MiMakeDriverPagesPrivate.c)
 *     MiSystemFault @ 0x1403A4508 (MiSystemFault.c)
 *     MiValidFault @ 0x1403A7338 (MiValidFault.c)
 *     MiCopyToUserVa @ 0x1404A2F88 (MiCopyToUserVa.c)
 *     MiValidVirtualizationFault @ 0x140525860 (MiValidVirtualizationFault.c)
 *     MiSplitReducedCommitClonePage @ 0x14052CA98 (MiSplitReducedCommitClonePage.c)
 *     MiLockDriverPageRange @ 0x1406E57E8 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x1406E6D18 (MiReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406FC830 (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiLogPageAccess @ 0x140320930 (MiLogPageAccess.c)
 *     MiInitializeCopyOnWritePacket @ 0x14036AEA8 (MiInitializeCopyOnWritePacket.c)
 *     MiCopyOnWriteReturnCharges @ 0x14036B1E0 (MiCopyOnWriteReturnCharges.c)
 *     MiCopyOnWritePerformCopy @ 0x14036B248 (MiCopyOnWritePerformCopy.c)
 *     MiCopyOnWriteUpdatePte @ 0x14036B2E0 (MiCopyOnWriteUpdatePte.c)
 *     MiCopyOnWriteInitializeTargetPage @ 0x14036B648 (MiCopyOnWriteInitializeTargetPage.c)
 *     MiCopyOnWriteGetPage @ 0x14036C2DC (MiCopyOnWriteGetPage.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MiCopyOnWrite(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5)
{
  __int64 result; // rax
  unsigned int v10; // eax
  ULONG *v11; // rdx
  unsigned int v12; // edi
  ULONG *v13; // rax
  _BYTE v14[72]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v15; // [rsp+68h] [rbp-40h]
  ULONG v16; // [rsp+98h] [rbp-10h]

  memset_0(v14, 0, 0x80uLL);
  if ( a5 )
    *a5 = 0LL;
  result = MiInitializeCopyOnWritePacket(v14, a1, a2, a4);
  if ( (int)result >= 0 )
  {
    if ( a3 == -1 && (a3 = MiCopyOnWriteGetPage(v14, a5), a3 == -1) )
    {
      return 3221225495LL;
    }
    else
    {
      __incgsdword(0x2E94u);
      MiCopyOnWriteReturnCharges(v14);
      MiCopyOnWriteInitializeTargetPage(v14, a3);
      v10 = MiCopyOnWritePerformCopy(v14, a3);
      v11 = &MiSystemPartition;
      v12 = v10;
      if ( (*(_DWORD *)(v15 + 184) & 0xF) == 1 )
        v13 = &MiSystemPartition;
      else
        v13 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(v15 + 174));
      if ( v13[4539] )
      {
        if ( (*(_DWORD *)(v15 + 184) & 0xF) != 1 )
          v11 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(v15 + 174));
        if ( v16 >= v11[4540] )
          MiLogPageAccess(v15, a2);
      }
      MiCopyOnWriteUpdatePte(v14, a3, v12);
      return 0LL;
    }
  }
  return result;
}
