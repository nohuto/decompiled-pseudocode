/*
 * XREFs of NtCreateThreadStateChange @ 0x140B2C140
 * Callers:
 *     DifNtCreateThreadStateChangeWrapper @ 0x140677A70 (DifNtCreateThreadStateChangeWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 */

NTSTATUS __cdecl NtCreateThreadStateChange(
        PHANDLE ThreadStateChangeHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ThreadHandle,
        ULONG64 Reserved)
{
  char PreviousMode; // si
  NTSTATUS inserted; // edi
  _OWORD *v12; // rcx
  __int64 ULong64FromUser; // rax
  __int64 Tag; // [rsp+20h] [rbp-68h]
  HANDLE Handle; // [rsp+60h] [rbp-28h] BYREF
  PVOID Object; // [rsp+68h] [rbp-20h] BYREF
  _OWORD *v17; // [rsp+70h] [rbp-18h] BYREF

  Object = 0LL;
  v17 = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(ThreadStateChangeHandle);
    RtlWriteULong64ToUser(ThreadStateChangeHandle, ULong64FromUser);
  }
  if ( (_DWORD)Reserved )
  {
    inserted = -1073741811;
  }
  else
  {
    inserted = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 32,
                 (__int64)PsThreadType,
                 PreviousMode,
                 0x63547350u,
                 &Object,
                 0LL,
                 0LL);
    if ( inserted >= 0 )
    {
      inserted = ObCreateObjectEx(
                   PreviousMode,
                   *(_DWORD **)&stru_140FC11F0.WaitBlockFill11[64],
                   (__int64)ObjectAttributes,
                   PreviousMode,
                   Tag,
                   24,
                   0,
                   0,
                   &v17,
                   0LL);
      if ( inserted >= 0 )
      {
        v12 = v17;
        *v17 = 0LL;
        *((_QWORD *)v12 + 2) = 0LL;
        *((_QWORD *)v12 + 1) = 0LL;
        *(_QWORD *)v12 = Object;
        *((_DWORD *)v12 + 5) = 0;
        Object = 0LL;
        inserted = ObInsertObjectEx((char *)v12, 0LL, DesiredAccess, 0, 0, 0LL, &Handle);
        if ( inserted >= 0 )
        {
          if ( PreviousMode )
            RtlWriteULong64ToUser(ThreadStateChangeHandle, (__int64)Handle);
          else
            *ThreadStateChangeHandle = Handle;
          Handle = 0LL;
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x63547350u);
  if ( Handle )
    NtClose(Handle);
  return inserted;
}
