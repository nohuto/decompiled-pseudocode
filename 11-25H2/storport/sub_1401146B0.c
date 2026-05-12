/*
 * XREFs of sub_1401146B0 @ 0x1401146B0
 * Callers:
 *     sub_140114C80 @ 0x140114C80 (sub_140114C80.c)
 *     sub_1401155A0 @ 0x1401155A0 (sub_1401155A0.c)
 * Callees:
 *     sub_14008ADD0 @ 0x14008ADD0 (sub_14008ADD0.c)
 */

__int64 __fastcall sub_1401146B0(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  result = sub_14008ADD0(74LL, 712LL, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL), a3);
  if ( result )
  {
    *(_WORD *)(result + 124) = 584;
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 16) = result + 128;
    *(_QWORD *)(result + 24) = 0LL;
    *(_QWORD *)(result + 88) = 0LL;
    *(_BYTE *)(result + 126) = 0;
    *(_DWORD *)(result + 120) = a2;
  }
  return result;
}
