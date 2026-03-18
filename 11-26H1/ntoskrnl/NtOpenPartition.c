/*
 * XREFs of NtOpenPartition @ 0x1407FD970
 * Callers:
 *     DifNtOpenPartitionWrapper @ 0x14067E1C0 (DifNtOpenPartitionWrapper.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObOpenObjectByName @ 0x1408FC870 (ObOpenObjectByName.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 */

__int64 __fastcall NtOpenPartition(HANDLE *a1, int a2, int a3)
{
  int v3; // ebx
  KPROCESSOR_MODE PreviousMode; // si
  __int64 ULong64FromUser; // rax
  __int64 result; // rax
  int v9; // edi
  HANDLE v10; // rbx
  HANDLE Handle[2]; // [rsp+48h] [rbp-10h] BYREF

  v3 = a3;
  Handle[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  LOBYTE(a3) = PreviousMode;
  result = ObOpenObjectByName(v3, (_DWORD)PsPartitionType, a3, 0, a2, 0LL, (__int64)Handle);
  v9 = result;
  if ( (int)result >= 0 )
  {
    v10 = Handle[0];
    if ( PreviousMode )
      RtlWriteULong64ToUser(a1, (__int64)Handle[0]);
    else
      *a1 = Handle[0];
    if ( v9 < 0 )
      ObCloseHandle(v10, PreviousMode);
    return (unsigned int)v9;
  }
  return result;
}
