/*
 * XREFs of MiInitializeFreeZeroPfnListHead @ 0x1406F5508
 * Callers:
 *     MiInitializePartitionFreeZeroLists @ 0x14086FDC8 (MiInitializePartitionFreeZeroLists.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeFreeZeroPfnListHead(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  result = 0x3FFFFFFFFFLL;
  *(_DWORD *)(a1 + 28) = a2;
  *(_DWORD *)(a1 + 24) = a3;
  *(_QWORD *)a1 = 0x3FFFFFFFFFLL;
  *(_QWORD *)(a1 + 8) = 0x3FFFFFFFFFLL;
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}
