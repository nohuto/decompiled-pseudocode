/*
 * XREFs of HsaDismissPageFault @ 0x1405ABCF0
 * Callers:
 *     <none>
 * Callees:
 *     HsaIommuSendCommand @ 0x140478008 (HsaIommuSendCommand.c)
 */

unsigned __int64 __fastcall HsaDismissPageFault(
        unsigned __int64 *a1,
        unsigned int a2,
        __int16 a3,
        unsigned __int16 a4,
        int a5)
{
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v9 = 0LL;
  LOWORD(v9[0]) = a3;
  v6 = 0LL;
  if ( a2 == -1 )
  {
    v7 = v9[0];
  }
  else
  {
    v6 = 4LL;
    v7 = ((unsigned __int64)a2 << 32) ^ (v9[0] ^ ((unsigned __int64)a2 << 32)) & 0xFFF00000FFFFFFFFuLL;
  }
  v9[0] = v7 & 0xFFFFFFFFFFFFFFFLL | 0x7000000000000000LL;
  v9[1] = ((unsigned __int64)a4 << 32) ^ (v6 ^ ((unsigned __int64)a4 << 32)) & 0xFFFFFE00FFFFFFFFuLL;
  if ( a5 < 0 )
    v9[1] = (((unsigned __int64)a4 << 32) ^ (v6 ^ ((unsigned __int64)a4 << 32)) & 0xFFFFFE00FFFFFFFFuLL) & 0xFFFF0FFFFFFFFFFFuLL | 0x100000000000LL;
  return HsaIommuSendCommand(a1, v9, 0LL);
}
