/*
 * XREFs of Isoch_GetConfiguration @ 0x14007E558
 * Callers:
 *     TR_Create @ 0x140081594 (TR_Create.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Isoch_GetConfiguration(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  *(_DWORD *)(a3 + 12) = 3;
  *(_QWORD *)(a3 + 32) = IsochFunctionTable;
  *(_DWORD *)(a3 + 16) = 448;
  *(_DWORD *)(a3 + 24) = 0;
  result = a2 != 0 ? 4096 : 512;
  *(_DWORD *)(a3 + 20) = result;
  return result;
}
