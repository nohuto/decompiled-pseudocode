/*
 * XREFs of NtOpenIoCompletion @ 0x140796E40
 * Callers:
 *     DifNtOpenIoCompletionWrapper @ 0x14067D350 (DifNtOpenIoCompletionWrapper.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObOpenObjectByName @ 0x1408FC870 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenIoCompletion(_QWORD *a1, int a2, int a3)
{
  int v3; // ebx
  char PreviousMode; // si
  __int64 ULong64FromUser; // rax
  int v8; // ebx
  __int64 v10; // [rsp+50h] [rbp-18h] BYREF

  v3 = a3;
  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  LOBYTE(a3) = PreviousMode;
  v8 = ObOpenObjectByName(v3, (_DWORD)IoCompletionObjectType, a3, 0, a2, 0LL, (__int64)&v10);
  if ( v8 >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(a1, v10);
    else
      *a1 = v10;
  }
  return (unsigned int)v8;
}
