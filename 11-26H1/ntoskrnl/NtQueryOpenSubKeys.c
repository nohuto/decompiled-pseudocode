/*
 * XREFs of NtQueryOpenSubKeys @ 0x14084F320
 * Callers:
 *     DifNtQueryOpenSubKeysWrapper @ 0x140684CE0 (DifNtQueryOpenSubKeysWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     CmpLockRegistryExclusive @ 0x1408C2148 (CmpLockRegistryExclusive.c)
 *     ObReferenceObjectByNameEx @ 0x1408EBDCC (ObReferenceObjectByNameEx.c)
 *     CmpInitializeParseContext @ 0x14097C5D0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14097C850 (CmpCleanupParseContext.c)
 *     CmpSearchForOpenSubKeys @ 0x140B2250C (CmpSearchForOpenSubKeys.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtQueryOpenSubKeys(int a1, unsigned int *a2)
{
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v8; // r12
  int v9; // ebx
  char PreviousMode; // r14
  int ULongFromUser; // eax
  _QWORD *v12; // rdi
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rcx
  PVOID Object; // [rsp+48h] [rbp-260h] BYREF
  _KAFFINITY_EX v18[2]; // [rsp+50h] [rbp-258h] BYREF

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
      ULongFromUser = RtlReadULongFromUser(a2);
      RtlWriteULongToUser(a2, ULongFromUser);
    }
    v9 = ObReferenceObjectByNameEx(
           a1,
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
            RtlWriteULongToUser(a2, v13);
          else
            *a2 = v13;
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
  return (unsigned int)v9;
}
