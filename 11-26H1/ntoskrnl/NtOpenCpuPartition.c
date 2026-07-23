/*
 * XREFs of NtOpenCpuPartition @ 0x1407F7960
 * Callers:
 *     DifNtOpenCpuPartitionWrapper @ 0x1406805D0 (DifNtOpenCpuPartitionWrapper.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObOpenObjectByName @ 0x14092C800 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenCpuPartition(_QWORD *a1, int a2, int a3)
{
  int v3; // ebx
  char PreviousMode; // si
  __int64 ULong64FromUser; // rax
  int v8; // ebx
  __int64 v10; // [rsp+48h] [rbp-10h] BYREF

  v3 = a3;
  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  LOBYTE(a3) = PreviousMode;
  v8 = ObOpenObjectByName(v3, (_DWORD)PsCpuPartitionType, a3, 0, a2, 0LL, (__int64)&v10);
  if ( v8 >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(a1, v10);
    else
      *a1 = v10;
  }
  return (unsigned int)v8;
}
