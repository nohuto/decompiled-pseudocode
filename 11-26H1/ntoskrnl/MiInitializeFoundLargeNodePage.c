/*
 * XREFs of MiInitializeFoundLargeNodePage @ 0x1406EF99C
 * Callers:
 *     MiFindContiguousPagesLarge @ 0x1403D366C (MiFindContiguousPagesLarge.c)
 * Callees:
 *     MiConvertActiveLargePageToSmall @ 0x140206C98 (MiConvertActiveLargePageToSmall.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiSetPfnOwnedAndActive @ 0x14033D0DC (MiSetPfnOwnedAndActive.c)
 */

__int64 __fastcall MiInitializeFoundLargeNodePage(__int64 a1, int a2, char a3)
{
  __int64 v5; // rbx
  int PfnPageSizeIndex; // r14d
  __int64 result; // rax
  unsigned int v8; // esi
  __int64 v9; // r14
  unsigned __int16 v10; // di
  char v11; // bp

  v5 = a1;
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(a1);
  result = MiConvertActiveLargePageToSmall(v5, 1);
  if ( (a2 & 0x40000000) == 0 )
  {
    v8 = (*(_DWORD *)(v5 + 32) >> 22) & 3;
    v9 = MiPageSizes[PfnPageSizeIndex];
    v10 = ((a2 & 0x100000) != 0) + 1;
    v11 = a3 | 8;
    do
    {
      result = MiSetPfnOwnedAndActive(v5, v11, -8LL, v8, v10);
      v5 += 48LL;
      --v9;
    }
    while ( v9 );
  }
  return result;
}
