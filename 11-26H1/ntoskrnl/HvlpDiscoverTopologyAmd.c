/*
 * XREFs of HvlpDiscoverTopologyAmd @ 0x140CBF41C
 * Callers:
 *     HvlpDiscoverTopologyWorker @ 0x140794718 (HvlpDiscoverTopologyWorker.c)
 * Callees:
 *     HvlpLpCpuid @ 0x140794834 (HvlpLpCpuid.c)
 */

__int64 __fastcall HvlpDiscoverTopologyAmd(int a1, unsigned int a2, unsigned int *a3, _DWORD *a4)
{
  unsigned int v7; // ebx
  unsigned int v8; // esi
  unsigned int v10; // ebp
  int v11; // ecx
  __int64 result; // rax
  _OWORD v13[3]; // [rsp+20h] [rbp-38h] BYREF

  v7 = 1;
  v13[0] = 0LL;
  v8 = 1;
  HvlpLpCpuid(a1, 0x80000000, 0, v13);
  v10 = v13[0];
  if ( LODWORD(v13[0]) >= 0x80000008 )
  {
    HvlpLpCpuid(a1, 0x80000008, 0, v13);
    LOWORD(v11) = WORD4(v13[0]) >> 12;
    if ( !(WORD4(v13[0]) >> 12) )
      _BitScanReverse((unsigned int *)&v11, 2 * BYTE8(v13[0]) + 1);
    v7 = 1 << v11;
    if ( v10 >= 0x8000001E )
    {
      HvlpLpCpuid(a1, 0x80000001, 0, v13);
      if ( (DWORD2(v13[0]) & 0x400000) != 0 )
      {
        HvlpLpCpuid(a1, 0x8000001E, 0, v13);
        v8 = BYTE5(v13[0]) + 1;
        v7 /= v8;
      }
    }
  }
  *a3 = a2 / (v7 * v8);
  result = a2 / v8;
  *a4 = result;
  return result;
}
