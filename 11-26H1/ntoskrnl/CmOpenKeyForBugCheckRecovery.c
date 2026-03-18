/*
 * XREFs of CmOpenKeyForBugCheckRecovery @ 0x14084E670
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmpLockKeyBodyIntoMemory @ 0x1408593F0 (CmpLockKeyBodyIntoMemory.c)
 *     CmpUnlockKcbStack @ 0x1408BC3E0 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1408BC470 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D0B78 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmOpenKey @ 0x140975160 (CmOpenKey.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     CmObReferenceObjectByHandle @ 0x140C58340 (CmObReferenceObjectByHandle.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmOpenKeyForBugCheckRecovery(HANDLE *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  void *v11; // r14
  bool v12; // zf
  int started; // esi
  char v14; // al
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // r15
  HANDLE v18; // rcx
  _QWORD *v20; // [rsp+30h] [rbp-40h] BYREF
  __int128 v21; // [rsp+38h] [rbp-38h] BYREF
  __int64 v22; // [rsp+48h] [rbp-28h]
  _OWORD v23[2]; // [rsp+50h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+40h] BYREF

  v22 = 0LL;
  memset(v23, 0, sizeof(v23));
  v21 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v21);
  LOBYTE(v10) = 0;
  v11 = 0LL;
  v12 = (*(_DWORD *)(a3 + 24) & 0x200) == 0;
  v20 = 0LL;
  Handle = 0LL;
  if ( v12 )
  {
    started = -1073741811;
  }
  else
  {
    v14 = CmpAcquireShutdownRundown(v9, v8);
    v10 = v14 & 1;
    if ( (v14 & 1) != 0 )
    {
      started = CmOpenKey(&Handle, a2, a3, a4, 0LL, 0);
      if ( started >= 0 )
      {
        started = CmObReferenceObjectByHandle((_DWORD)Handle, a2, v16, 0, (__int64)&v20, 0LL);
        if ( started < 0 )
        {
          v11 = v20;
        }
        else
        {
          CmpLockRegistry();
          v11 = v20;
          v10 |= 2u;
          v17 = v20[1];
          started = CmpStartKcbStackForTopLayerKcb(v23, v17);
          if ( started >= 0 )
          {
            CmpLockKcbStackTopExclusiveRestShared(v23);
            v10 |= 4u;
            started = CmpPerformKeyBodyDeletionCheck(v11, 0LL);
            if ( started >= 0 )
            {
              if ( (*(_DWORD *)(v17 + 184) & 0x40000) != 0 )
              {
                started = CmpLockKeyBodyIntoMemory(v11);
                if ( started >= 0 )
                {
                  started = 0;
                  *a1 = Handle;
                  Handle = 0LL;
                }
              }
              else
              {
                started = -1073741811;
              }
            }
          }
        }
      }
      if ( v10 >= 4 )
        CmpUnlockKcbStack(v23);
    }
    else
    {
      started = -1073741431;
    }
    if ( (v10 & 2) != 0 )
      CmpUnlockRegistry(v15);
  }
  if ( v11 )
    ObfDereferenceObject(v11);
  v18 = Handle;
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( (v10 & 1) != 0 )
    CmpReleaseShutdownRundown(v18);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v21);
  return (unsigned int)started;
}
