/*
 * XREFs of RtlpHpLargeAllocReport @ 0x180121400
 * Callers:
 *     RtlpHpLargeWalkHeap @ 0x180095248 (RtlpHpLargeWalkHeap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLargeAllocReport(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // r11
  __int64 result; // rax
  __int64 v7; // rdx
  unsigned __int16 *v8; // rdx

  v3 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFF0000uLL;
  *(_QWORD *)a3 = v3;
  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFF000uLL;
  *(_BYTE *)(a3 + 17) = 64;
  *(_WORD *)(a3 + 18) = 16385;
  *(_QWORD *)(a3 + 8) = v5 - (unsigned __int16)v4;
  *(_BYTE *)(a3 + 16) = *(_BYTE *)(a2 + 24);
  result = *(unsigned __int16 *)(a2 + 24);
  *(_QWORD *)(a3 + 36) = result;
  if ( (*(_BYTE *)(a2 + 32) & 1) != 0 )
  {
    v7 = v3 - (unsigned __int16)v4 + v5 + 16;
    if ( (*(_DWORD *)(a1 + 20) & 0x2000) == 0 )
      v7 = v3 - (unsigned __int16)v4 + v5;
    v8 = (unsigned __int16 *)((v7 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a3 + 24) = *((_QWORD *)v8 + 1);
    *(_WORD *)(a3 + 18) = 16401;
    *(_WORD *)(a3 + 18) = (*((_BYTE *)v8 + 2) >> 4 << 8) | 0x4011;
    result = *v8;
    *(_WORD *)(a3 + 32) = result;
  }
  return result;
}
