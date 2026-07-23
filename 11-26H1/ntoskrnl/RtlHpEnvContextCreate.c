/*
 * XREFs of RtlHpEnvContextCreate @ 0x14041CB90
 * Callers:
 *     ExpPoolCreate @ 0x140780790 (ExpPoolCreate.c)
 *     ExpPoolHeapCreate @ 0x14084C84C (ExpPoolHeapCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlHpEnvContextCreate(__int64 a1, __int64 a2, int a3, char a4, char a5)
{
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 1) = a3;
  *(_BYTE *)(a1 + 2) = a4;
  result = a1;
  *(_BYTE *)a1 = ((a3 != 0) + 2) | (8 * (a5 & 1));
  return result;
}
