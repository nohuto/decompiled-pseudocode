/*
 * XREFs of RtlpHpSegSuballocatorDecommit @ 0x180106AE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x180089CA0 (RtlpHpSegPageRangeCommit.c)
 */

__int64 __fastcall RtlpHpSegSuballocatorDecommit(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r11
  __int64 v6; // r9
  char v8; // cl
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx

  v3 = *(_QWORD *)a1;
  v6 = a2 & *(_QWORD *)a1;
  if ( (RtlpHpHeapGlobals ^ *(_QWORD *)(v6 + 0x10) ^ v6) != a1
    || (v8 = *(_BYTE *)(a1 + 8),
        v9 = v6 + 32 * ((unsigned __int64)(unsigned int)(a2 - v6) >> v8),
        v10 = v9 - 32LL * *(unsigned __int8 *)(v9 + 26),
        (*(_BYTE *)(v10 + 24) & 3) != 3)
    || v6 + ((unsigned int)((v10 - v6) >> 5) << v8) != a2 && (*(_BYTE *)(v10 + 24) & 0x1Cu) < 8 )
  {
    v10 = 0LL;
  }
  return RtlpHpSegPageRangeCommit(
           a1,
           v10,
           ((_DWORD)a2
          - ((unsigned int)((v10 - (v10 & v3)) >> 5) << *(_BYTE *)(a1 + 8))
          - ((unsigned int)v10 & (unsigned int)v3)) >> 12,
           -(a3 >> 12),
           0,
           0LL);
}
