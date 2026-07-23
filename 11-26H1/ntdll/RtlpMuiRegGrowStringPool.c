/*
 * XREFs of RtlpMuiRegGrowStringPool @ 0x180122350
 * Callers:
 *     RtlpMuiRegGetOrAddString @ 0x18004D7B0 (RtlpMuiRegGetOrAddString.c)
 * Callees:
 *     RtlpMuiRegResizeStringPool @ 0x18014D91C (RtlpMuiRegResizeStringPool.c)
 */

unsigned __int16 *__fastcall RtlpMuiRegGrowStringPool(unsigned __int16 *BaseAddress, __int64 a2, int a3, char a4)
{
  unsigned __int16 *v4; // r11
  int v5; // eax
  int v6; // r10d
  unsigned int v7; // ebx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  int v10; // r10d
  int v11; // eax
  int v12; // r8d

  v4 = BaseAddress;
  if ( BaseAddress )
  {
    v5 = BaseAddress[5];
    v6 = 16;
    v7 = BaseAddress[2];
    v8 = v7;
    v9 = BaseAddress[3] + 1;
    if ( a3 >= 0 )
      v6 = a3;
    v10 = v5 + v6;
    v11 = v4[4];
    v12 = v11;
    if ( v9 >= v7 )
      v8 = v9;
    if ( v10 >= v11 )
      v12 = v10;
    if ( a4 || v8 != v7 || v12 != v11 )
      return (unsigned __int16 *)RtlpMuiRegResizeStringPool(v4);
  }
  return v4;
}
