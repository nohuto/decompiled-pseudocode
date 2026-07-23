/*
 * XREFs of PspCreatePartitionSystemProcess @ 0x1408038E8
 * Callers:
 *     PspAllocatePartition @ 0x140803608 (PspAllocatePartition.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall PspCreatePartitionSystemProcess(HANDLE *a1, _QWORD *a2)
{
  char v4; // r9
  int v5; // eax
  HANDLE v6; // rbx
  NTSTATUS v7; // edi
  HANDLE v8; // rcx
  __int64 result; // rax
  _QWORD v10[2]; // [rsp+60h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+30h] BYREF

  v10[0] = 1966108LL;
  v10[1] = L"PartitionSystm";
  v4 = BYTE2(PsInitialSystemProcess[3].ActiveGroupsMask.Masks[1]);
  Handle = 0LL;
  v5 = PsCreateMinimalProcess(
         (__int64)PsInitialSystemProcess,
         (__int64)v10,
         0LL,
         v4,
         0LL,
         0,
         1,
         0LL,
         0LL,
         0LL,
         0LL,
         &Handle);
  v6 = Handle;
  v7 = v5;
  if ( v5 >= 0 )
  {
    v8 = Handle;
    Handle = 0LL;
    v7 = ObReferenceObjectByHandle(v8, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle, 0LL);
    if ( v7 >= 0 )
    {
      *a1 = Handle;
      result = 0LL;
      *a2 = v6;
      return result;
    }
    if ( Handle )
      ObfDereferenceObject(Handle);
  }
  if ( v6 )
    ObCloseHandle(v6, 0);
  return (unsigned int)v7;
}
