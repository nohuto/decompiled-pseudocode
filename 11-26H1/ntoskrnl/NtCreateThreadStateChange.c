/*
 * XREFs of NtCreateThreadStateChange @ 0x140B2A0C0
 * Callers:
 *     DifNtCreateThreadStateChangeWrapper @ 0x140673E90 (DifNtCreateThreadStateChangeWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateThreadStateChange(HANDLE *a1, unsigned int a2, __int64 a3, ULONG_PTR a4, int a5)
{
  char PreviousMode; // si
  int inserted; // edi
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
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  if ( a5 )
  {
    inserted = -1073741811;
  }
  else
  {
    inserted = ObpReferenceObjectByHandleWithTag(a4, 32LL, PsThreadType, PreviousMode, 0x63547350u, &Object, 0LL, 0LL);
    if ( inserted >= 0 )
    {
      inserted = ObCreateObjectEx(
                   PreviousMode,
                   *(_DWORD **)&stru_140FC01F0.WaitBlockFill11[64],
                   a3,
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
        inserted = ObInsertObjectEx((char *)v12, 0LL, a2, 0, 0, 0LL, &Handle);
        if ( inserted >= 0 )
        {
          if ( PreviousMode )
            RtlWriteULong64ToUser(a1, (__int64)Handle);
          else
            *a1 = Handle;
          Handle = 0LL;
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x63547350u);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)inserted;
}
