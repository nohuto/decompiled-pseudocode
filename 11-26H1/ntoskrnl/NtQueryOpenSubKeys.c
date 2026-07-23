/*
 * XREFs of NtQueryOpenSubKeys @ 0x140855630
 * Callers:
 *     DifNtQueryOpenSubKeysWrapper @ 0x1406888C0 (DifNtQueryOpenSubKeysWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     CmpLockRegistryExclusive @ 0x1408C8718 (CmpLockRegistryExclusive.c)
 *     ObReferenceObjectByNameEx @ 0x1408F238C (ObReferenceObjectByNameEx.c)
 *     CmpInitializeParseContext @ 0x14093E5E0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14093E860 (CmpCleanupParseContext.c)
 *     CmpSearchForOpenSubKeys @ 0x140B2490C (CmpSearchForOpenSubKeys.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

NTSTATUS __cdecl NtQueryOpenSubKeys(POBJECT_ATTRIBUTES TargetKey, PULONG HandleCount)
{
  int v3; // ebx
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v8; // r12
  NTSTATUS v9; // ebx
  char PreviousMode; // r14
  int ULongFromUser; // eax
  _QWORD *v12; // rdi
  ULONG v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rcx
  PVOID Object; // [rsp+48h] [rbp-260h] BYREF
  _KAFFINITY_EX v18[2]; // [rsp+50h] [rbp-258h] BYREF

  v3 = (int)TargetKey;
  memset(v18, 0, 72);
  memset_0(&v18[0].StaticBitmap[9], 0, 0x1D0uLL);
  Object = 0LL;
  CmpInitializeParseContext(&v18[0].StaticBitmap[9]);
  v4 = 0;
  CmpInitializeThreadInfo(v18);
  v8 = CmpAcquireShutdownRundown(v6, v5);
  if ( v8 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      ULongFromUser = RtlReadULongFromUser(HandleCount);
      RtlWriteULongToUser(HandleCount, ULongFromUser);
    }
    v9 = ObReferenceObjectByNameEx(
           v3,
           0,
           131097,
           (_DWORD)CmKeyObjectType,
           PreviousMode,
           (__int64)&v18[0].StaticBitmap[9],
           (__int64)&Object);
    if ( v9 >= 0 )
    {
      CmpLockRegistryExclusive(v7);
      v4 = 1;
      v12 = Object;
      v9 = CmpPerformKeyBodyDeletionCheck(Object, 0LL);
      if ( v9 >= 0 )
      {
        if ( (*(_DWORD *)(v12[1] + 184LL) & 0x40000) != 0 )
        {
          CmpAttachToRegistryProcess((PRKAPC_STATE)&v18[0].StaticBitmap[2]);
          v13 = CmpSearchForOpenSubKeys(v12[1], 0LL, 0LL);
          CmpDetachFromRegistryProcess(&v18[0].StaticBitmap[2]);
          CmpUnlockRegistry(v14);
          v4 = 0;
          if ( PreviousMode )
            RtlWriteULongToUser(HandleCount, v13);
          else
            *HandleCount = v13;
          v9 = 0;
        }
        else
        {
          v9 = -1073741811;
        }
      }
    }
  }
  else
  {
    v9 = -1073741431;
  }
  if ( v4 )
    CmpUnlockRegistry(v7);
  CmpCleanupParseContext(&v18[0].StaticBitmap[9], 0LL);
  if ( v8 )
    CmpReleaseShutdownRundown(v15);
  if ( Object )
    ObfDereferenceObject(Object);
  CmCleanupThreadInfo((_KAFFINITY_EX **)v18);
  return v9;
}
