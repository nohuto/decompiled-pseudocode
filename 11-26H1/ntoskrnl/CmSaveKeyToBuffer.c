/*
 * XREFs of CmSaveKeyToBuffer @ 0x140C5E010
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpDumpKeyToBuffer @ 0x140C5E12C (CmpDumpKeyToBuffer.c)
 *     CmObReferenceObjectByHandle @ 0x140C5E340 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmSaveKeyToBuffer(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r9d
  int v9; // ebx
  int v10; // r8d
  __int64 v11; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdx
  PVOID Object; // [rsp+30h] [rbp-19h] BYREF
  __int128 v16; // [rsp+38h] [rbp-11h] BYREF
  __int64 v17; // [rsp+48h] [rbp-1h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp+7h] BYREF

  v17 = 0LL;
  Object = 0LL;
  v16 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v16);
  if ( v8 == 4 )
  {
    if ( (unsigned __int8)CmpAcquireShutdownRundown(v7, v6) )
    {
      v9 = CmObReferenceObjectByHandle(a1, 0, v10, 0, (__int64)&Object, 0LL);
      if ( v9 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        CmpAttachToRegistryProcess(&ApcState);
        v9 = CmpDumpKeyToBuffer(Object, v13, a2, a3);
        KiUnstackDetachProcess((__int64)&ApcState, 0);
        KeLeaveCriticalRegion();
      }
      if ( Object )
        ObfDereferenceObject(Object);
      CmpReleaseShutdownRundown(v11);
    }
    else
    {
      v9 = -1073741431;
    }
  }
  else
  {
    v9 = -1073741637;
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v16);
  return (unsigned int)v9;
}
