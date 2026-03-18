/*
 * XREFs of NtLockRegistryKey @ 0x14084F100
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmLockKeyForWrite @ 0x140A30B0C (CmLockKeyForWrite.c)
 *     CmObReferenceObjectByHandle @ 0x140C58340 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtLockRegistryKey(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  int v5; // r8d
  __int64 v6; // rcx
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

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
    v4 = CmObReferenceObjectByHandle(a1, 131078, v5, 0, (__int64)&Object, 0LL);
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
  return (unsigned int)v4;
}
