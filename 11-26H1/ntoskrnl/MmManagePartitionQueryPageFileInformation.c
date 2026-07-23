/*
 * XREFs of MmManagePartitionQueryPageFileInformation @ 0x140883898
 * Callers:
 *     NtManagePartition @ 0x140802EF0 (NtManagePartition.c)
 * Callees:
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     MmGetPageFileInformation @ 0x140B14EF4 (MmGetPageFileInformation.c)
 */

__int64 __fastcall MmManagePartitionQueryPageFileInformation(int a1, char a2, __int64 a3)
{
  int v6; // ebx
  __int64 result; // rax
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v8 = 0;
  if ( *(_DWORD *)(a3 + 12) )
  {
    result = 3221225485LL;
  }
  else if ( *(_DWORD *)(a3 + 8) >= 0x28u )
  {
    if ( a2 )
      ProbeForWrite(*(volatile void **)a3, *(unsigned int *)(a3 + 8), 8u);
    result = MmGetPageFileInformation(a1, *(_QWORD *)a3, *(_DWORD *)(a3 + 8), a2, 1, (__int64)&v8);
    if ( (int)result >= 0 )
      result = 0LL;
    v6 = v8;
  }
  else
  {
    v6 = 40;
    result = 3221225476LL;
  }
  *(_DWORD *)(a3 + 8) = v6;
  return result;
}
