/*
 * XREFs of sub_1404A2EE0 @ 0x1404A2EE0
 * Callers:
 *     sub_1404A2E0C @ 0x1404A2E0C (sub_1404A2E0C.c)
 * Callees:
 *     sub_14052EE64 @ 0x14052EE64 (sub_14052EE64.c)
 */

__int64 __fastcall sub_1404A2EE0(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rcx
  unsigned int v7; // r8d
  __int64 result; // rax
  __int64 v9; // rdx

  while ( 1 )
  {
    v6 = *(unsigned int *)(a1 + 20);
    if ( (unsigned int)v6 >= *(_DWORD *)a1 )
      break;
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 4) + 4 * v6);
    result = v7 & 0xFFFFFFF;
    if ( (unsigned int)result >= *(_DWORD *)(a1 + 16) )
      break;
    *(_DWORD *)(a1 + 20) = v6 + 1;
    v9 = *(_QWORD *)(a1 + 24) + (v7 & 0xFFFFFFF);
    result = sub_14052EE64(v6, v9, v7 >> 28, a3, v9 + a2);
  }
  return result;
}
