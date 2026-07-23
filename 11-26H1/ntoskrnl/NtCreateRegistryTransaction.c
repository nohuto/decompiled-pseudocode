/*
 * XREFs of NtCreateRegistryTransaction @ 0x140AFFEB0
 * Callers:
 *     DifNtCreateRegistryTransactionWrapper @ 0x140676E30 (DifNtCreateRegistryTransactionWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

NTSTATUS __cdecl NtCreateRegistryTransaction(
        HANDLE *RegistryTransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjAttributes,
        ULONG CreateOptions)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // r15
  char PreviousMode; // si
  NTSTATUS inserted; // edi
  _OWORD *v13; // rcx
  PVOID v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-88h]
  HANDLE Handle; // [rsp+60h] [rbp-48h] BYREF
  PVOID Object; // [rsp+68h] [rbp-40h] BYREF
  __int128 v19; // [rsp+70h] [rbp-38h] BYREF
  __int64 v20; // [rsp+80h] [rbp-28h]

  v19 = 0LL;
  v20 = 0LL;
  Object = 0LL;
  Handle = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v19);
  v10 = CmpAcquireShutdownRundown(v9, v8);
  if ( v10 )
  {
    if ( CreateOptions )
    {
      inserted = -1073741811;
    }
    else
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode )
        RtlWriteULong64ToUser(RegistryTransactionHandle, 0LL);
      else
        *RegistryTransactionHandle = 0LL;
      inserted = ObCreateObjectEx(
                   PreviousMode,
                   CmRegistryTransactionType,
                   (__int64)ObjAttributes,
                   PreviousMode,
                   v16,
                   32,
                   0,
                   0,
                   &Object,
                   0LL);
      if ( inserted >= 0 )
      {
        v13 = Object;
        *(_OWORD *)Object = 0LL;
        v13[1] = 0LL;
        *((_QWORD *)v13 + 1) = 0LL;
        inserted = ObInsertObjectEx((char *)v13, 0LL, DesiredAccess, 0, 0, 0LL, &Handle);
        Object = 0LL;
        if ( inserted >= 0 )
        {
          if ( PreviousMode )
            RtlWriteULong64ToUser(RegistryTransactionHandle, (__int64)Handle);
          else
            *RegistryTransactionHandle = Handle;
          Handle = 0LL;
          inserted = 0;
        }
      }
    }
  }
  else
  {
    inserted = -1073741431;
  }
  if ( Handle )
    NtClose(Handle);
  v14 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v10 )
    CmpReleaseShutdownRundown(v14);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v19);
  return inserted;
}
