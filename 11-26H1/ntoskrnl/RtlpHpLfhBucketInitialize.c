/*
 * XREFs of RtlpHpLfhBucketInitialize @ 0x140347FF0
 * Callers:
 *     RtlpHpLfhBucketActivate @ 0x140347E74 (RtlpHpLfhBucketActivate.c)
 * Callees:
 *     RtlpHpLfhOwnerInitialize @ 0x140348510 (RtlpHpLfhOwnerInitialize.c)
 *     RtlpHpInitializeLock @ 0x14034D510 (RtlpHpInitializeLock.c)
 */

unsigned __int8 __fastcall RtlpHpLfhBucketInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r11
  __int64 v4; // r9
  unsigned __int8 *v5; // r11
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rax
  __int16 v8; // cx
  unsigned int v9; // edx
  unsigned __int8 result; // al

  RtlpHpLfhOwnerInitialize(a1, a2, 1LL, a3);
  *(_DWORD *)(v3 + 88) = 0;
  RtlpHpInitializeLock(v3 + 80, *(unsigned __int8 *)(v4 + 73));
  v6 = (unsigned __int16)RtlpBucketBlockSizes[(*v5 >> 1) + 1];
  *((_DWORD *)v5 + 18) = (v6 + 0xFFFFFFFF) / v6;
  v7 = ((unsigned int)(v6 - 16)
      * (unsigned __int64)(unsigned int)((0x80000 << (((unsigned int)RtlpHpLfhPerfFlags >> 14) & 3)) - 0x10000)
      / 0x3FF0
      + 0x10000)
     / v6;
  if ( (unsigned int)v7 >= 0xFFFF )
  {
    LOWORD(v7) = -1;
    goto LABEL_5;
  }
  v8 = 4 * v7;
  if ( (unsigned int)(4 * v7) >= 0xFFFF )
LABEL_5:
    v8 = -1;
  *((_WORD *)v5 + 39) = v8;
  *((_WORD *)v5 + 38) = v7;
  v9 = RtlpHpLfhPerfFlags;
  *(_OWORD *)(v5 + 104) = 0LL;
  result = v5[107];
  v5[106] = 16;
  v5[107] = result ^ ((v9 >> 6) ^ result) & 1;
  return result;
}
