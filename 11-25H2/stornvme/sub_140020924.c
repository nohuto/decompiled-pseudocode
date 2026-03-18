/*
 * XREFs of sub_140020924 @ 0x140020924
 * Callers:
 *     sub_140027360 @ 0x140027360 (sub_140027360.c)
 *     sub_140029568 @ 0x140029568 (sub_140029568.c)
 *     sub_140029F2C @ 0x140029F2C (sub_140029F2C.c)
 *     sub_14002A02C @ 0x14002A02C (sub_14002A02C.c)
 *     sub_14002A340 @ 0x14002A340 (sub_14002A340.c)
 *     sub_14002A4A4 @ 0x14002A4A4 (sub_14002A4A4.c)
 * Callees:
 *     sub_14000D6D0 @ 0x14000D6D0 (sub_14000D6D0.c)
 *     sub_140018790 @ 0x140018790 (sub_140018790.c)
 */

char __fastcall sub_140020924(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, char a6, __int64 a7, int a8, int a9)
{
  int v10; // eax
  __int64 v11; // r9
  int v12; // r10d
  __int64 v13; // r11
  int v14; // r10d

  *(_DWORD *)(a2 + 4) = a8;
  *(_QWORD *)(a2 + 24) = a7;
  *(_BYTE *)(a2 + 47) = a6;
  *(_BYTE *)a2 = 6;
  *(_BYTE *)(a2 + 40) = a3;
  *(_DWORD *)(a2 + 42) = 0;
  LOBYTE(v10) = sub_14000D6D0(a1);
  if ( (_BYTE)v10 )
  {
    LOBYTE(v10) = a9 - 1;
    if ( (unsigned int)(a9 - 1) <= 0x7E )
    {
      if ( !v12
        || (v14 = v12 - 1) == 0
        || (unsigned int)(v14 - 4) <= 1 && (LOBYTE(v10) = sub_140018790(a1, 2LL, 0LL, v11), (_BYTE)v10) )
      {
        v10 = *(_DWORD *)(v13 + 56);
        *(_DWORD *)(v13 + 56) = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)a9) & 0x7F;
      }
    }
  }
  return v10;
}
