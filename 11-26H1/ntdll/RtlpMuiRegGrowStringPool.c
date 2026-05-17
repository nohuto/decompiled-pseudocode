/*
 * XREFs of RtlpMuiRegGrowStringPool @ 0x1801225B0
 * Callers:
 *     RtlpMuiRegGetOrAddString @ 0x180002080 (RtlpMuiRegGetOrAddString.c)
 * Callees:
 *     RtlpMuiRegResizeStringPool @ 0x18014DA6C (RtlpMuiRegResizeStringPool.c)
 */

__int64 __fastcall RtlpMuiRegGrowStringPool(unsigned __int16 *a1, __int64 a2, int a3, char a4)
{
  unsigned __int16 *v4; // r11
  int v5; // eax
  int v6; // r10d
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // r10d
  int v11; // eax
  __int64 v12; // r8

  v4 = a1;
  if ( a1 )
  {
    v5 = a1[5];
    v6 = 16;
    v7 = a1[2];
    v8 = a1[2];
    v9 = a1[3] + 1;
    if ( a3 >= 0 )
      v6 = a3;
    v10 = v5 + v6;
    v11 = v4[4];
    v12 = v4[4];
    if ( v9 >= v7 )
      v8 = v9;
    if ( (int)v10 >= v11 )
      v12 = v10;
    if ( a4 || (_DWORD)v8 != v7 || (_DWORD)v12 != v11 )
      return RtlpMuiRegResizeStringPool(v4, v8, v12);
  }
  return (__int64)v4;
}
