/*
 * XREFs of MiCopyOnWrite @ 0x14036CAD8
 * Callers:
 *     MmProtectPool @ 0x14024F9E4 (MmProtectPool.c)
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiWalkVaRange @ 0x1402B5320 (MiWalkVaRange.c)
 *     MiCompleteProtoPteFault @ 0x1402BAC10 (MiCompleteProtoPteFault.c)
 *     MiProbeLeafPteAccess @ 0x1402D1510 (MiProbeLeafPteAccess.c)
 *     MiSectionProtectValidPte @ 0x1402E64E0 (MiSectionProtectValidPte.c)
 *     MiFaultInPagedPool @ 0x1402E8708 (MiFaultInPagedPool.c)
 *     MiMakeProtoPrivate @ 0x140313500 (MiMakeProtoPrivate.c)
 *     MiSplitPrivatePage @ 0x14031942C (MiSplitPrivatePage.c)
 *     MiMakeDriverPagesPrivate @ 0x14038C790 (MiMakeDriverPagesPrivate.c)
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 *     MiValidFault @ 0x1403A9098 (MiValidFault.c)
 *     MiCopyToUserVa @ 0x14049C9A8 (MiCopyToUserVa.c)
 *     MiValidVirtualizationFault @ 0x140527ED0 (MiValidVirtualizationFault.c)
 *     MiSplitReducedCommitClonePage @ 0x14052EFB8 (MiSplitReducedCommitClonePage.c)
 *     MiLockDriverPageRange @ 0x1406EA498 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x1406EB9C8 (MiReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140701500 (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 *     MiInitializeCopyOnWritePacket @ 0x14036CC48 (MiInitializeCopyOnWritePacket.c)
 *     MiCopyOnWriteReturnCharges @ 0x14036CF80 (MiCopyOnWriteReturnCharges.c)
 *     MiCopyOnWritePerformCopy @ 0x14036CFE8 (MiCopyOnWritePerformCopy.c)
 *     MiCopyOnWriteUpdatePte @ 0x14036D080 (MiCopyOnWriteUpdatePte.c)
 *     MiCopyOnWriteInitializeTargetPage @ 0x14036D3E8 (MiCopyOnWriteInitializeTargetPage.c)
 *     MiCopyOnWriteGetPage @ 0x14036E07C (MiCopyOnWriteGetPage.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
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
        v13 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v15 + 174));
      if ( v13[4539] )
      {
        if ( (*(_DWORD *)(v15 + 184) & 0xF) != 1 )
          v11 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v15 + 174));
        if ( v16 >= v11[4540] )
          MiLogPageAccess(v15, a2, v15);
      }
      MiCopyOnWriteUpdatePte(v14, a3, v12);
      return 0LL;
    }
  }
  return result;
}
