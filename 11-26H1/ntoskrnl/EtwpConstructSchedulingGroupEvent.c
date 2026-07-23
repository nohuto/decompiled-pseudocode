/*
 * XREFs of EtwpConstructSchedulingGroupEvent @ 0x1406C912C
 * Callers:
 *     EtwTraceSchedulingGroup @ 0x1406C8A9C (EtwTraceSchedulingGroup.c)
 *     EtwTraceSchedulingGroupRundown @ 0x1406C8B1C (EtwTraceSchedulingGroupRundown.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EtwpConstructSchedulingGroupEvent(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  int v3; // edx
  unsigned __int64 result; // rax
  int v5; // edx

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2[13];
  v2 = *a2;
  v3 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 16) = v2;
  result = HIDWORD(v2);
  v5 = v3 ^ ((unsigned __int8)result ^ (unsigned __int8)v3) & 1 ^ ((unsigned __int8)(v3 ^ (result ^ v3) & 1) ^ (unsigned __int8)result) & 2;
  *(_DWORD *)(a1 + 20) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)result) & 4 ^ ((unsigned __int8)result ^ (unsigned __int8)(v5 ^ (v5 ^ result) & 4)) & 8;
  return result;
}
