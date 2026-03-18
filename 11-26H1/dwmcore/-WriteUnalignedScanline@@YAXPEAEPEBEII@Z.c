/*
 * XREFs of ?WriteUnalignedScanline@@YAXPEAEPEBEII@Z @ 0x1802256B8
 * Callers:
 *     ?UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ @ 0x180225624 (-UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall WriteUnalignedScanline(
        unsigned __int8 *a1,
        const unsigned __int8 *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned __int8 *i; // r11
  int v6; // r8d
  unsigned int v7; // esi
  const unsigned __int8 *v8; // rbx
  char v9; // dl
  char v10; // al
  char v11; // dl
  unsigned int v12; // r10d
  unsigned int v13; // ebp
  unsigned __int8 v14; // dl
  char v15; // al
  unsigned int v16; // r10d
  int v17; // edi
  char v18; // dl

  i = a1;
  v6 = 255 >> a4;
  v7 = 8 - a4;
  v8 = a2;
  if ( a3 < 8 - a4 )
  {
    v9 = v6 ^ ((unsigned __int8)v6 >> a3);
    v10 = v9 & (*v8 >> a4);
    v11 = *a1 & ~v9;
LABEL_9:
    *i = v11 | v10;
    return;
  }
  v12 = a3 - v7;
  v13 = v12 >> 3;
  *a1 = (*a2 >> a4) | *a1 & ~(_BYTE)v6;
  for ( i = a1 + 1; v13; --v13 )
  {
    v14 = v8[1];
    v15 = *v8++;
    *i++ = (v15 << v7) | (v14 >> a4);
  }
  v16 = v12 & 7;
  if ( v16 )
  {
    v17 = 255 >> v16;
    v18 = *v8 << v7;
    if ( v16 > a4 )
      v18 |= v8[1] >> a4;
    v10 = v17 & *i;
    v11 = ~(_BYTE)v17 & v18;
    goto LABEL_9;
  }
}
