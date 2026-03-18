/*
 * XREFs of NtCreateRegistryTransaction @ 0x140AFDE40
 * Callers:
 *     DifNtCreateRegistryTransactionWrapper @ 0x140673250 (DifNtCreateRegistryTransactionWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtCreateRegistryTransaction(HANDLE *a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // r15
  char PreviousMode; // si
  int inserted; // edi
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
    if ( a4 )
    {
      inserted = -1073741811;
    }
    else
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode )
        RtlWriteULong64ToUser(a1, 0LL);
      else
        *a1 = 0LL;
      inserted = ObCreateObjectEx(
                   PreviousMode,
                   CmRegistryTransactionType,
                   a3,
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
        inserted = ObInsertObjectEx((char *)v13, 0LL, a2, 0, 0, 0LL, &Handle);
        Object = 0LL;
        if ( inserted >= 0 )
        {
          if ( PreviousMode )
            RtlWriteULong64ToUser(a1, (__int64)Handle);
          else
            *a1 = Handle;
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
  return (unsigned int)inserted;
}
