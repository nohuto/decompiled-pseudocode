/*
 * XREFs of PopGetIoLocation @ 0x140BEF524
 * Callers:
 *     PopRequestRead @ 0x140C013E8 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140C01804 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140C02C1C (PopWriteHiberPages.c)
 *     PopHiberReadChecksums @ 0x140C0F654 (PopHiberReadChecksums.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PopGetIoLocation(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // r9
  __int64 *v4; // r10
  __int64 v5; // r11
  unsigned __int64 v6; // rdx
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 16);
  if ( a2 < v3 )
  {
    v4 = *(__int64 **)a1;
    v3 = 0LL;
    goto LABEL_6;
  }
  v4 = *(__int64 **)(a1 + 8);
  v5 = *v4;
  if ( a2 >= *v4 + v3 )
  {
    while ( 1 )
    {
      v5 = *v4;
      if ( a2 < *v4 + v3 )
        break;
      v3 += v5;
      v4 += 2;
LABEL_6:
      *(_QWORD *)(a1 + 8) = v4;
      *(_QWORD *)(a1 + 16) = v3;
    }
  }
  v6 = a2 - v3;
  result = v6 + v4[1];
  *a3 = v5 - v6;
  return result;
}
