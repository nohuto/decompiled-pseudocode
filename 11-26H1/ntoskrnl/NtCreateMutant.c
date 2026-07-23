/*
 * XREFs of NtCreateMutant @ 0x140A9E470
 * Callers:
 *     DifNtCreateMutantWrapper @ 0x140675B00 (DifNtCreateMutantWrapper.c)
 * Callees:
 *     KeInitializeMutantEx @ 0x140471064 (KeInitializeMutantEx.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 */

NTSTATUS __cdecl NtCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  char PreviousMode; // si
  __int64 v9; // rdx
  NTSTATUS inserted; // ebx
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 ULong64FromUser; // rax
  __int64 v14; // [rsp+20h] [rbp-58h]
  struct _KTHREAD *v15; // [rsp+58h] [rbp-20h] BYREF
  void *v16; // [rsp+60h] [rbp-18h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(MutantHandle);
    RtlWriteULong64ToUser(MutantHandle, ULong64FromUser);
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               ExMutantObjectType,
               (__int64)ObjectAttributes,
               PreviousMode,
               v14,
               56,
               0,
               0,
               &v15,
               0LL);
  if ( inserted >= 0 )
  {
    LOBYTE(v9) = InitialOwner;
    KeInitializeMutantEx(v15, v9, *(_DWORD *)&WheapConfigTableLock.WaitBlockFill11[156] != 0, v11);
    inserted = ObInsertObjectEx((char *)v15, 0LL, DesiredAccess, 0, 0, 0LL, &v16);
    LODWORD(v15) = inserted;
    if ( inserted >= 0 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(MutantHandle, (__int64)v16);
      else
        *MutantHandle = v16;
    }
  }
  return inserted;
}
