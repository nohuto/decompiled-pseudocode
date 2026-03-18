/*
 * XREFs of NtRollbackRegistryTransaction @ 0x140850070
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmpRollbackLightWeightTransaction @ 0x1408AE484 (CmpRollbackLightWeightTransaction.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtRollbackRegistryTransaction(HANDLE Handle, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // ebx
  NTSTATUS v8; // eax
  PVOID v9; // rdi
  PVOID Object; // [rsp+38h] [rbp-9h] BYREF
  __int128 v12; // [rsp+40h] [rbp-1h] BYREF
  __int64 v13; // [rsp+50h] [rbp+Fh]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp+17h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v12);
  if ( (unsigned __int8)CmpAcquireShutdownRundown(v5, v4) )
  {
    if ( a2 )
    {
      v7 = -1073741811;
    }
    else
    {
      Object = 0LL;
      v8 = ObReferenceObjectByHandle(
             Handle,
             0x10u,
             CmRegistryTransactionType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
      v9 = Object;
      v7 = v8;
      if ( v8 >= 0 )
      {
        CmpAttachToRegistryProcess(&ApcState);
        v7 = CmpRollbackLightWeightTransaction(v9);
        CmpDetachFromRegistryProcess(&ApcState);
        if ( v7 >= 0 )
          v7 = 0;
      }
      if ( v9 )
        ObfDereferenceObject(v9);
    }
    CmpReleaseShutdownRundown(v6);
  }
  else
  {
    v7 = -1073741431;
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v12);
  return (unsigned int)v7;
}
