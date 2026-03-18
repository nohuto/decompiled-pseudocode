/*
 * XREFs of MiPrepareToHotPatchVad @ 0x140873C64
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x14086E8A8 (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     MiLockVad @ 0x14027EBC0 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027F670 (MiUnlockVad.c)
 *     MiVadDeleted @ 0x140480A68 (MiVadDeleted.c)
 *     MiBeginHoldingDirtyFaults @ 0x1406FBF38 (MiBeginHoldingDirtyFaults.c)
 *     MiPrepareToHotPatchImage @ 0x1408735EC (MiPrepareToHotPatchImage.c)
 *     MiInitializeImageHotPatchContext @ 0x140B611FC (MiInitializeImageHotPatchContext.c)
 */

__int64 __fastcall MiPrepareToHotPatchVad(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        int a5,
        unsigned __int16 a6,
        _DWORD *a7,
        unsigned int *a8,
        int a9)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v13; // ebx

  CurrentThread = KeGetCurrentThread();
  MiLockVad((__int64)CurrentThread, a2, a3, a4);
  if ( (unsigned int)MiVadDeleted(a2) )
  {
    v13 = -1073741800;
  }
  else
  {
    MiInitializeImageHotPatchContext(a3, a6, a2);
    if ( !a9
      || (MiBeginHoldingDirtyFaults(a1, (_QWORD *)(a3 + 88)),
          *(_DWORD *)(a3 + 156) |= 2u,
          v13 = MiPrepareToHotPatchImage(a3, a7, a8),
          v13 >= 0) )
    {
      v13 = 0;
    }
  }
  MiUnlockVad((__int64)CurrentThread, a2);
  return (unsigned int)v13;
}
