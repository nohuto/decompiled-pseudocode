/*
 * XREFs of ExIsResourceAcquiredSharedLite @ 0x14042F560
 * Callers:
 *     DifExIsResourceAcquiredSharedLiteWrapper @ 0x140656950 (DifExIsResourceAcquiredSharedLiteWrapper.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409B337C (PnpUnlinkDeviceRemovalRelations.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140A6A2E0 (FsRtlAcquireFileForCcFlushEx.c)
 *     PpDevNodeLockTree @ 0x140A8F554 (PpDevNodeLockTree.c)
 *     PnpRestartDeviceNode @ 0x140B23CFC (PnpRestartDeviceNode.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpIsResourceAcquiredSharedLite @ 0x14042F630 (ExpIsResourceAcquiredSharedLite.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG __stdcall ExIsResourceAcquiredSharedLite(PERESOURCE Resource)
{
  UCHAR ReservedLowFlags; // cl
  ULONG v3; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 v7; // si
  char v8; // dl
  unsigned __int64 *p_LastXStateSaveDebugInfo; // rdx
  unsigned __int64 *SparePtr; // rcx

  ReservedLowFlags = Resource->ReservedLowFlags;
  if ( (ReservedLowFlags & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (ReservedLowFlags & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  }
  if ( (Resource->ReservedLowFlags & 1) != 0 )
  {
    v3 = 0;
    if ( ((__int64)Resource->SystemResourcesList.Flink & 1) == 0
      && ((unsigned __int64)Resource->SystemResourcesList.Flink & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
    {
      return v3;
    }
    CurrentThread = KeGetCurrentThread();
    v7 = KeGetCurrentIrql();
    if ( v7 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      v8 = 2;
      KiRaiseIrqlProcessIrqlFlags(v7, v8);
    }
    p_LastXStateSaveDebugInfo = &CurrentThread[1].LastXStateSaveDebugInfo;
    SparePtr = (unsigned __int64 *)CurrentThread[1].WaitBlock[3].SparePtr;
    if ( (unsigned __int64 *)*p_LastXStateSaveDebugInfo == p_LastXStateSaveDebugInfo )
    {
LABEL_22:
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
      __writecr8(v7);
      return v3;
    }
    while ( (*((_BYTE *)SparePtr + 37) & 2) != 0 )
    {
      if ( Resource == (PERESOURCE)(SparePtr - 8) )
        goto LABEL_20;
LABEL_21:
      SparePtr = (unsigned __int64 *)*SparePtr;
      if ( SparePtr == p_LastXStateSaveDebugInfo )
        goto LABEL_22;
    }
    if ( (PERESOURCE)SparePtr[3] != Resource )
      goto LABEL_21;
LABEL_20:
    v3 += *((_DWORD *)SparePtr + 8);
    goto LABEL_21;
  }
  return ExpIsResourceAcquiredSharedLite(Resource);
}
