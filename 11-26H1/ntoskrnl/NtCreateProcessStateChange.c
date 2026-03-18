/*
 * XREFs of NtCreateProcessStateChange @ 0x1407F1C10
 * Callers:
 *     DifNtCreateProcessStateChangeWrapper @ 0x140672B10 (DifNtCreateProcessStateChangeWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateProcessStateChange(HANDLE *a1, unsigned int a2, int a3, ULONG_PTR a4, int a5)
{
  char PreviousMode; // si
  __int64 ULong64FromUser; // rax
  int inserted; // edi
  int v12; // ecx
  int v13; // r9d
  PVOID *v14; // rcx
  HANDLE Handle; // [rsp+60h] [rbp-28h] BYREF
  PVOID Object; // [rsp+68h] [rbp-20h] BYREF
  PVOID *v18; // [rsp+70h] [rbp-18h]

  Object = 0LL;
  v18 = 0LL;
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
    inserted = ObpReferenceObjectByHandleWithTag(a4, 0x63507350u, (__int64)&Object, 0LL, 0LL);
    if ( inserted >= 0 )
    {
      LOBYTE(v13) = PreviousMode;
      LOBYTE(v12) = PreviousMode;
      inserted = ObCreateObjectEx(v12, *(_DWORD *)&stru_140FC01F0.WaitBlockFill11[72], a3, v13);
      if ( inserted >= 0 )
      {
        v14 = v18;
        *(_OWORD *)v18 = 0LL;
        v14[2] = 0LL;
        v14[1] = 0LL;
        *v14 = Object;
        *((_DWORD *)v14 + 4) = 0;
        Object = 0LL;
        inserted = ObInsertObjectEx(v14, 0LL, a2, 0LL, 0, 0LL, &Handle);
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
    ObfDereferenceObjectWithTag(Object, 0x63507350u);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)inserted;
}
