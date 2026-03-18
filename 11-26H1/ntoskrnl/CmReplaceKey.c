/*
 * XREFs of CmReplaceKey @ 0x140858C90
 * Callers:
 *     NtReplaceKey @ 0x14084FD20 (NtReplaceKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwFlushBuffersFile @ 0x140723D50 (ZwFlushBuffersFile.c)
 *     CmpCmdRenameHive @ 0x140854A18 (CmpCmdRenameHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140856CB8 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140856D48 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpPreserveSystemHiveData @ 0x14085F688 (CmpPreserveSystemHiveData.c)
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     CmpCmdHiveOpen @ 0x1408B4674 (CmpCmdHiveOpen.c)
 *     CmpDestroyHive @ 0x1408B6DC4 (CmpDestroyHive.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C58D14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C58D30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmReplaceKey(ULONG_PTR BugCheckParameter3, __int64 a2, int a3, const void **a4)
{
  char v6; // r14
  char v7; // r12
  __int64 Pool; // rax
  struct _PRIVILEGE_SET *v10; // r15
  NTSTATUS v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-90h] BYREF
  const void *ObjectInformation[64]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = 0;
  IoStatusBlock = 0LL;
  v7 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  Pool = CmpAllocatePool(0x100uLL);
  v10 = (struct _PRIVILEGE_SET *)Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  v11 = CmpCmdHiveOpen(a3, 18415617, 0, 0LL, 0LL, Pool);
  if ( v11 >= 0 )
  {
    CmpAttachToRegistryProcess(&ApcState);
    v6 = 1;
    CmpLockRegistry();
    HvLockHiveFlusherExclusive(BugCheckParameter3);
    if ( (*(_DWORD *)(BugCheckParameter3 + 160) & 4) != 0 )
    {
LABEL_5:
      v11 = -1073741611;
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(BugCheckParameter3 + 4120) & 0x20) != 0 )
      goto LABEL_7;
    if ( (struct _KTHREAD *)BugCheckParameter3 == stru_140E098B8.WaitBlock[2].Thread )
    {
      v11 = CmpPreserveSystemHiveData(BugCheckParameter3, 0LL);
      if ( v11 < 0 )
      {
LABEL_18:
        HvUnlockHiveFlusherExclusive(BugCheckParameter3);
        CmpUnlockRegistry(v13);
        if ( v7 )
          CmpFinishBeingActiveFlusherAndReconciler(BugCheckParameter3);
        goto LABEL_20;
      }
    }
    HvUnlockHiveFlusherExclusive(BugCheckParameter3);
    CmpUnlockRegistry(v12);
    v11 = CmpFlushHive(0LL, 12LL);
    if ( v11 >= 0 )
    {
      CmpDetachFromRegistryProcess(&ApcState);
      v6 = 0;
      CmpBecomeActiveFlusherAndReconciler(BugCheckParameter3);
      v7 = 1;
      CmpLockRegistry();
      HvLockHiveFlusherExclusive(BugCheckParameter3);
      if ( (*(_DWORD *)(BugCheckParameter3 + 160) & 4) != 0 )
        goto LABEL_5;
      if ( (*(_DWORD *)(BugCheckParameter3 + 4120) & 0x20) == 0 )
      {
        v11 = CmpCmdRenameHive(*(HANDLE *)(BugCheckParameter3 + 1544), ObjectInformation, a4, 0x200u, 0);
        if ( v11 >= 0 )
        {
          *(_DWORD *)(BugCheckParameter3 + 160) |= 4u;
          v11 = CmpCmdRenameHive(MEMORY[0x608], 0LL, ObjectInformation, 0, 0);
          if ( v11 < 0 || (v11 = ZwFlushBuffersFile(MEMORY[0x608], &IoStatusBlock), v11 < 0) )
          {
            if ( CmpCmdRenameHive(*(HANDLE *)(BugCheckParameter3 + 1544), 0LL, ObjectInformation, 0, 0) < 0 )
              v11 = -1073741492;
          }
        }
        goto LABEL_18;
      }
LABEL_7:
      v11 = -1073741811;
      goto LABEL_18;
    }
  }
LABEL_20:
  if ( v6 )
    CmpDetachFromRegistryProcess(&ApcState);
  CmSiFreeMemory(v10);
  return (unsigned int)v11;
}
