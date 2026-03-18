/*
 * XREFs of ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B7280
 * Callers:
 *     <none>
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400B69E0 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z @ 0x14012B6B8 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::RestoreResourceCB(
        VIDMM_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        bool *a3,
        void *a4)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  _QWORD *i; // rbx
  _QWORD *j; // rsi

  if ( VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB(a2) )
  {
    v6 = *(_QWORD *)a2;
    WdLogSingleEntry1(4LL, *(_QWORD *)a2);
    WdLogGlobalForLineNumber = 6341;
    if ( (byte_14008A203 & 4) != 0 )
      McTemplateK0x_EtwWriteTransfer(v7, &EventVidMmRestoreResource, v8, v6);
    v9 = VIDMM_MEMORY_SEGMENT::TransferToSegment(this, a2, 0LL, 1);
    if ( v9 < 0 )
    {
      WdLogSingleEntry1(1LL, v9);
      WdLogGlobalForLineNumber = 6366;
      DxgkLogInternalTriageEvent(v10, 0x40000LL);
      for ( i = *(_QWORD **)(v6 + 112); i != (_QWORD *)(v6 + 112); i = (_QWORD *)*i )
      {
        for ( j = (_QWORD *)*(i - 2); j != i - 2; j = (_QWORD *)*j )
          VidSchMarkDeviceAsError(*(_QWORD *)(*(j - 4) + 32LL), 24);
      }
    }
    *(_BYTE *)(v6 + 43) = 1;
    *(_QWORD *)(v6 + 312) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 304, 0LL);
    KeLeaveCriticalRegion();
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v6 + 136));
  }
  return 0LL;
}
