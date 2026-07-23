/*
 * XREFs of XmGetStringAddress @ 0x1405B11B8
 * Callers:
 *     XmStosOp @ 0x1404A1400 (XmStosOp.c)
 *     XmInsOp @ 0x1405AFF00 (XmInsOp.c)
 *     XmOutsOp @ 0x1405AFF90 (XmOutsOp.c)
 *     XmCmpsOp @ 0x1405B02E0 (XmCmpsOp.c)
 *     XmLodsOp @ 0x1405B04F0 (XmLodsOp.c)
 *     XmMovsOp @ 0x1405B0570 (XmMovsOp.c)
 *     XmScasOp @ 0x1405B0600 (XmScasOp.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1404A21B0 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x140535DC0 (longjmp.c)
 */

int *__fastcall XmGetStringAddress(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v3; // r10d
  __int64 v4; // r11
  int v5; // eax
  int v6; // r10d
  unsigned int v7; // edx
  unsigned int v8; // r9d

  v3 = *(_DWORD *)(a1 + 120);
  v4 = a2;
  v5 = v3 + 1;
  v6 = ~v3;
  if ( (*(_DWORD *)(a1 + 16) & 0x400) == 0 )
    v6 = v5;
  if ( *(_BYTE *)(a1 + 137) )
  {
    v7 = *(_DWORD *)(a1 + 4LL * a3 + 24);
    *(_DWORD *)(a1 + 4LL * a3 + 24) = v6 + v7;
  }
  else
  {
    v7 = *(unsigned __int16 *)(a1 + 4LL * a3 + 24);
    *(_WORD *)(a1 + 4LL * a3 + 24) = v6 + v7;
  }
  v8 = *(unsigned __int16 *)(a1 + 2 * v4 + 68);
  if ( v7 > v8 || v7 + *(_DWORD *)(a1 + 120) > v8 )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  return x86BiosTranslateAddress(*(_WORD *)(a1 + 2 * v4 + 56), v7);
}
