/*
 * XREFs of SmBinaryArrayGrow @ 0x1404D236C
 * Callers:
 *     SmHpBufferAlloc @ 0x14024F2BC (SmHpBufferAlloc.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

char *__fastcall SmBinaryArrayGrow(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  unsigned int v4; // ecx
  unsigned int v5; // ebp
  char *v6; // rdi
  __int64 v7; // rsi
  __int64 v9; // r15
  char *Pool3; // rax

  v2 = 0LL;
  v3 = a1;
  _BitScanReverse((unsigned int *)&a1, a2);
  v5 = a2 ^ (1 << v4);
  if ( v4 < 0x20 )
  {
    v6 = *(char **)(v3 + 8 * a1);
    v7 = (unsigned int)a1;
    if ( !v6 )
    {
      v9 = (unsigned int)(16 * (1 << a1));
      Pool3 = (char *)ExAllocatePool3(64LL, v9, 1094872435LL, &stru_140E27C48.Header.WaitListHead.Blink, 1);
      v6 = Pool3;
      if ( !Pool3 )
        return (char *)v2;
      memset_0(Pool3, 0, (unsigned int)v9);
      *(_QWORD *)(v3 + 8 * v7) = v6;
    }
    return &v6[16 * v5];
  }
  return (char *)v2;
}
