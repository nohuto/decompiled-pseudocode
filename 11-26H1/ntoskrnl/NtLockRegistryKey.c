/*
 * XREFs of NtLockRegistryKey @ 0x140855410
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmLockKeyForWrite @ 0x140A4BA6C (CmLockKeyForWrite.c)
 *     CmObReferenceObjectByHandle @ 0x140C5E340 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

NTSTATUS __cdecl NtLockRegistryKey(HANDLE KeyHandle)
{
  int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  NTSTATUS v4; // ebx
  int v5; // r8d
  __int64 v6; // rcx
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v1 = (int)KeyHandle;
  v9 = 0LL;
  v8 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v8);
  Object = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v4 = -1073741727;
  }
  else if ( (unsigned __int8)CmpAcquireShutdownRundown(v3, v2) )
  {
    v4 = CmObReferenceObjectByHandle(v1, 131078, v5, 0, (__int64)&Object, 0LL);
    if ( v4 >= 0 )
    {
      v4 = CmLockKeyForWrite(Object);
      if ( v4 >= 0 )
        v4 = 0;
    }
    if ( Object )
      ObfDereferenceObject(Object);
    CmpReleaseShutdownRundown(v6);
  }
  else
  {
    v4 = -1073741431;
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v8);
  return v4;
}
