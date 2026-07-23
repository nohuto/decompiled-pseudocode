/*
 * XREFs of EtwpTiClearBloomFilter @ 0x14025A220
 * Callers:
 *     EtwpTiVadQueryEventWriteCallback @ 0x140A88B10 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     EtwpTiGetHashedBitNumbers @ 0x14025A714 (EtwpTiGetHashedBitNumbers.c)
 */

int __fastcall EtwpTiClearBloomFilter(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  unsigned __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  int result; // eax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+28h] [rbp-10h]

  v8 = 0LL;
  v9 = 0;
  EtwpTiGetHashedBitNumbers(&v8, a2, a2);
  v2 = HIDWORD(v8);
  *(_BYTE *)(((unsigned __int64)(unsigned int)v8 >> 3) + ExpSysDbgLock.Padding[0]) &= ~(1 << (v8 & 7));
  v3 = (unsigned __int64)v2 >> 3;
  v4 = *(char *)(v3 + ExpSysDbgLock.Padding[0]) & ~(1 << (v2 & 7));
  v5 = v9;
  *(_BYTE *)(v3 + ExpSysDbgLock.Padding[0]) = v4;
  v6 = (unsigned __int64)v5 >> 3;
  result = *(char *)(v6 + ExpSysDbgLock.Padding[0]) & ~(1 << (v5 & 7));
  *(_BYTE *)(v6 + ExpSysDbgLock.Padding[0]) = result;
  return result;
}
