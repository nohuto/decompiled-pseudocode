/*
 * XREFs of MiInitializePfnListHead @ 0x140481F18
 * Callers:
 *     MiInitializePartition @ 0x14086F740 (MiInitializePartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePfnListHead(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  result = 0x3FFFFFFFFFLL;
  *(_DWORD *)(a1 + 28) = a2;
  *(_QWORD *)a1 = 0x3FFFFFFFFFLL;
  *(_QWORD *)(a1 + 8) = 0x3FFFFFFFFFLL;
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}
