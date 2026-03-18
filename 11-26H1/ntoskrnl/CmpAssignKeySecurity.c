/*
 * XREFs of CmpAssignKeySecurity @ 0x14085AB60
 * Callers:
 *     CmpSecurityMethod @ 0x1408ED400 (CmpSecurityMethod.c)
 * Callees:
 *     CmpLockKcbStackExclusive @ 0x1408BA310 (CmpLockKcbStackExclusive.c)
 *     CmpUnlockKcbStack @ 0x1408BC3E0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408BC470 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvLockHiveFlusherShared @ 0x1408C3818 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408CFFE8 (HvUnlockHiveFlusherShared.c)
 *     CmpGetKeyNodeForKcb @ 0x1408D4900 (CmpGetKeyNodeForKcb.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     CmLockHiveSecurityExclusive @ 0x1408DF19C (CmLockHiveSecurityExclusive.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408DF268 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCleanupKcbStack @ 0x140982520 (CmpCleanupKcbStack.c)
 *     CmpAssignSecurityToKcb @ 0x140A5B410 (CmpAssignSecurityToKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 *     CmUnlockHiveSecurity @ 0x140C58BA8 (CmUnlockHiveSecurity.c)
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
