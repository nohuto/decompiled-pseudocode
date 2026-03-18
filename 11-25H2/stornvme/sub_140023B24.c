/*
 * XREFs of sub_140023B24 @ 0x140023B24
 * Callers:
 *     sub_140019450 @ 0x140019450 (sub_140019450.c)
 * Callees:
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140023B24(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rbx
  unsigned int v4; // esi
  char v5; // al

  sub_140032C80(a1 + 1408, 0LL, 128LL);
  v2 = sub_140006100(a1, 0x3000u);
  v3 = *(_QWORD *)(a1 + 1536);
  v4 = v2;
  if ( v3 )
  {
    sub_140032C80(v3, 0LL, 4232LL);
    v5 = *(_BYTE *)(a1 + 1409) | 2;
    *(_BYTE *)(a1 + 1419) = 0;
    *(_BYTE *)(a1 + 1409) = v5;
    *(_QWORD *)(a1 + 1512) = *(_QWORD *)(a1 + 1544);
    *(_DWORD *)(a1 + 1428) = 251658240;
    *(_QWORD *)(a1 + 1504) = v3;
    *(_QWORD *)(a1 + 1472) = v3;
  }
  else
  {
    return (unsigned int)-1056964605;
  }
  return v4;
}
