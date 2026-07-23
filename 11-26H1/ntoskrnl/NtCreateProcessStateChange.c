/*
 * XREFs of NtCreateProcessStateChange @ 0x1407F7770
 * Callers:
 *     DifNtCreateProcessStateChangeWrapper @ 0x1406766F0 (DifNtCreateProcessStateChangeWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 */

NTSTATUS __cdecl NtCreateProcessStateChange(
        PHANDLE ProcessStateChangeHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        ULONG64 Reserved)
{
  int v6; // r15d
  char PreviousMode; // si
  __int64 ULong64FromUser; // rax
  NTSTATUS inserted; // edi
  int v12; // ecx
  int v13; // r9d
  PVOID *v14; // rcx
  HANDLE Handle; // [rsp+60h] [rbp-28h] BYREF
  PVOID Object; // [rsp+68h] [rbp-20h] BYREF
  PVOID *v18; // [rsp+70h] [rbp-18h]

  v6 = (int)ObjectAttributes;
  Object = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(ProcessStateChangeHandle);
    RtlWriteULong64ToUser(ProcessStateChangeHandle, ULong64FromUser);
  }
  if ( (_DWORD)Reserved )
  {
    inserted = -1073741811;
  }
  else
  {
    inserted = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x63507350u, (__int64)&Object, 0LL, 0LL);
    if ( inserted >= 0 )
    {
      LOBYTE(v13) = PreviousMode;
      LOBYTE(v12) = PreviousMode;
      inserted = ObCreateObjectEx(v12, *(_DWORD *)&stru_140FC11F0.WaitBlockFill11[72], v6, v13);
      if ( inserted >= 0 )
      {
        v14 = v18;
        *(_OWORD *)v18 = 0LL;
        v14[2] = 0LL;
        v14[1] = 0LL;
        *v14 = Object;
        *((_DWORD *)v14 + 4) = 0;
        Object = 0LL;
        inserted = ObInsertObjectEx(v14, 0LL, DesiredAccess, 0LL, 0, 0LL, &Handle);
        if ( inserted >= 0 )
        {
          if ( PreviousMode )
            RtlWriteULong64ToUser(ProcessStateChangeHandle, (__int64)Handle);
          else
            *ProcessStateChangeHandle = Handle;
          Handle = 0LL;
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x63507350u);
  if ( Handle )
    NtClose(Handle);
  return inserted;
}
