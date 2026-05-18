/*
 * XREFs of sub_18007B348 @ 0x18007B348
 * Callers:
 *     sub_18007B220 @ 0x18007B220 (sub_18007B220.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007B348(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)a2 = *(_QWORD *)a3;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 0LL;
  result = *(unsigned int *)(a3 + 32);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
