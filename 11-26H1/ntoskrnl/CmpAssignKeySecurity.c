/*
 * XREFs of CmpAssignKeySecurity @ 0x140860E54
 * Callers:
 *     CmpSecurityMethod @ 0x1408F39C0 (CmpSecurityMethod.c)
 * Callees:
 *     CmpLockKcbStackExclusive @ 0x1408C08E0 (CmpLockKcbStackExclusive.c)
 *     CmpUnlockKcbStack @ 0x1408C29B0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408C2A40 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     CmpGetKeyNodeForKcb @ 0x1408DAEC0 (CmpGetKeyNodeForKcb.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmLockHiveSecurityExclusive @ 0x1408E575C (CmLockHiveSecurityExclusive.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408E5828 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCleanupKcbStack @ 0x140944530 (CmpCleanupKcbStack.c)
 *     CmpAssignSecurityToKcb @ 0x140A683D0 (CmpAssignSecurityToKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 *     CmUnlockHiveSecurity @ 0x140C5EBA8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpAssignKeySecurity(__int64 a1, void *a2)
{
  char v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // di
  int started; // ebx
  ULONG_PTR v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 KeyNodeForKcb; // r12
  __int64 v13; // rcx
  __int64 v14; // rcx
  _OWORD v16[2]; // [rsp+40h] [rbp-20h] BYREF
  char v17; // [rsp+B0h] [rbp+50h]
  __int64 v18; // [rsp+B8h] [rbp+58h] BYREF

  v18 = 0LL;
  v4 = 0;
  HvpGetCellContextInitialize(&v18);
  memset(v16, 0, sizeof(v16));
  WORD1(v16[0]) = -1;
  v17 = CmpAcquireShutdownRundown(v6, v5);
  v7 = v17;
  if ( v17 )
  {
    CmpLockRegistry();
    v9 = *(_QWORD *)(a1 + 8);
    v4 = 1;
    v10 = *(_QWORD *)(v9 + 32);
    started = CmpStartKcbStackForTopLayerKcb(v16, v9);
    if ( started >= 0 )
    {
      CmpLockKcbStackExclusive(v16);
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started >= 0 )
      {
        HvLockHiveFlusherShared(v10);
        CmLockHiveSecurityExclusive(v10);
        LOBYTE(v11) = 1;
        KeyNodeForKcb = CmpGetKeyNodeForKcb(v9, &v18, v11);
        *(_QWORD *)(a1 - 8) = 0LL;
        if ( !KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(v10 + 4120) & 0x20) != 0 && *(_DWORD *)(v10 + 1880) )
          a2 = (void *)(*(_QWORD *)(*(_QWORD *)(v10 + 1896) + 8LL) + 32LL);
        started = CmpGetSecurityDescriptorNodeEx(*(_QWORD *)(v9 + 32), a2, 0, KeyNodeForKcb + 44);
        if ( started >= 0 )
        {
          CmpAssignSecurityToKcb(v9, *(unsigned int *)(KeyNodeForKcb + 44), 0);
          started = 0;
        }
        if ( KeyNodeForKcb )
        {
          v13 = *(_QWORD *)(v9 + 32);
          if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v13, &v18);
          else
            HvpReleaseCellPaged(v13, &v18);
        }
        CmUnlockHiveSecurity(v10);
        HvUnlockHiveFlusherShared(v10);
      }
      CmpUnlockKcbStack(v16);
    }
    v7 = v17;
  }
  else
  {
    started = -1073741431;
  }
  CmpCleanupKcbStack(v16);
  if ( v4 )
    CmpUnlockRegistry(v14);
  if ( v7 )
    CmpReleaseShutdownRundown(v14);
  return (unsigned int)started;
}
