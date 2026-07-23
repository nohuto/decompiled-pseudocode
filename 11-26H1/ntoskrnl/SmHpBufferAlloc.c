/*
 * XREFs of SmHpBufferAlloc @ 0x14024F2BC
 * Callers:
 *     SmHpChunkAlloc @ 0x14024FF10 (SmHpChunkAlloc.c)
 * Callees:
 *     SmHpBufferUpdateFullness @ 0x14024F400 (SmHpBufferUpdateFullness.c)
 *     SmBinaryArrayGrow @ 0x1404D236C (SmBinaryArrayGrow.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmHpBufferAlloc(_DWORD *a1)
{
  unsigned __int16 v2; // di
  _QWORD *Pool3; // r14
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rsi
  _WORD *v7; // r8
  _WORD *v8; // rdx
  unsigned __int64 i; // rcx

  v2 = 0;
  Pool3 = (_QWORD *)ExAllocatePool3(64LL, 4096LL, 1111715187LL, &stru_140E27C48.Header.WaitListHead.Blink, 1);
  if ( !Pool3 )
    return 0LL;
  v4 = (unsigned int)a1[136];
  if ( (_DWORD)v4 != -1 )
  {
    _BitScanReverse((unsigned int *)&v5, v4);
    v6 = *(_QWORD *)&a1[2 * v5] + 16 * (v4 ^ (unsigned int)(1 << v5));
    a1[136] = *(_DWORD *)(v6 + 8);
    goto LABEL_4;
  }
  if ( a1[64] > a1[65] )
  {
    v6 = 0LL;
    goto LABEL_14;
  }
  v6 = SmBinaryArrayGrow(a1);
  if ( !v6 )
  {
LABEL_14:
    ExFreePoolWithTag(Pool3, 0);
    return v6;
  }
  LODWORD(v4) = a1[64];
  a1[64] = v4 + 1;
LABEL_4:
  *((_DWORD *)Pool3 + 5) = 0;
  *((_DWORD *)Pool3 + 4) = v4;
  v7 = (_WORD *)(v6 + 8);
  Pool3[1] = Pool3;
  *Pool3 = Pool3;
  *(_QWORD *)(v6 + 8) = 0LL;
  *(_QWORD *)v6 = Pool3;
  v8 = (_WORD *)((char *)Pool3 + (unsigned int)a1[70]);
  for ( i = (unsigned __int64)v8 + (unsigned int)a1[68]; i <= (unsigned __int64)(Pool3 + 512); i += (unsigned int)a1[68] )
  {
    ++v2;
    *v7 = (_WORD)v8 - (_WORD)Pool3;
    v7 = v8;
    v8 = (_WORD *)i;
  }
  *v7 = -1;
  SmHpBufferUpdateFullness(a1, v6, v2);
  return v6;
}
