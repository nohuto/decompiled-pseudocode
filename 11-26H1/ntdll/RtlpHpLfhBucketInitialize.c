/*
 * XREFs of RtlpHpLfhBucketInitialize @ 0x180072040
 * Callers:
 *     RtlpHpLfhBucketActivate @ 0x180071E3C (RtlpHpLfhBucketActivate.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpHpLfhBucketInitialize(unsigned __int8 *a1, char a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  __int16 v6; // cx
  unsigned int v7; // ecx
  char v8; // al
  char result; // al

  *(_QWORD *)(a1 + 1) = 0LL;
  *(_DWORD *)(a1 + 9) = 0;
  *(_WORD *)(a1 + 13) = 0;
  a1[15] = 0;
  *((_QWORD *)a1 + 2) = 0LL;
  *a1 = (2 * a2) | 1;
  *((_QWORD *)a1 + 4) = a1 + 24;
  *((_QWORD *)a1 + 3) = a1 + 24;
  *((_QWORD *)a1 + 6) = a1 + 40;
  *((_QWORD *)a1 + 5) = a1 + 40;
  *((_DWORD *)a1 + 22) = 0;
  v3 = (*a1 >> 1) + 1;
  *((_QWORD *)a1 + 10) = 0LL;
  v4 = (unsigned __int16)RtlpBucketBlockSizes[v3];
  *((_DWORD *)a1 + 18) = (v4 + 0xFFFFFFFF) / v4;
  v5 = ((unsigned int)(v4 - 16)
      * (unsigned __int64)(unsigned int)((0x80000 << (((unsigned int)RtlpHpLfhPerfFlags >> 14) & 3)) - 0x10000)
      / 0x3FF0
      + 0x10000)
     / v4;
  if ( (unsigned int)v5 >= 0xFFFF )
  {
    LOWORD(v5) = -1;
    goto LABEL_5;
  }
  v6 = 4 * v5;
  if ( (unsigned int)(4 * v5) >= 0xFFFF )
LABEL_5:
    v6 = -1;
  *((_WORD *)a1 + 38) = v5;
  *((_WORD *)a1 + 39) = v6;
  v7 = RtlpHpLfhPerfFlags;
  *(_OWORD *)(a1 + 104) = 0LL;
  v8 = (v7 >> 6) ^ a1[107];
  a1[106] = 16;
  result = v8 & 1;
  a1[107] ^= result;
  return result;
}
