/*
 * XREFs of ?FindBestMandatoryMergePair@?$CRectangleCollection@$07@@QEAAXPEAI0@Z @ 0x180057B80
 * Callers:
 *     ?Add@?$CMergedRectBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057AB0 (-Add@-$CMergedRectBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 * Callees:
 *     ?EnsureWeights@?$CRectangleCollection@$07@@AEAAXXZ @ 0x18008D530 (-EnsureWeights@-$CRectangleCollection@$07@@AEAAXXZ.c)
 */

__int64 __fastcall CRectangleCollection<8>::FindBestMandatoryMergePair(__int64 a1, _DWORD *a2, int *a3)
{
  __int64 result; // rax
  float v7; // xmm0_4
  int v8; // edi
  int v9; // r9d
  float *v10; // rbx
  int v11; // r11d
  int v12; // r10d
  unsigned int i; // ecx
  int v14; // edx

  result = CRectangleCollection<8>::EnsureWeights();
  v7 = *(float *)(a1 + 148);
  v8 = 0;
  v9 = 0;
  v10 = (float *)(a1 + 156);
  v11 = 1;
  v12 = 1;
  for ( i = 1; i < 0x24; ++i )
  {
    if ( v7 == 0.0 )
      break;
    result = (unsigned int)(v8 + 1);
    v14 = v11 + 1;
    if ( (_DWORD)result != v11 )
      v14 = v11;
    v8 = 0;
    if ( (_DWORD)result != v11 )
      v8 = result;
    if ( v7 > *v10 )
    {
      v7 = *v10;
      v9 = v8;
      v12 = v14;
    }
    v10 += 2;
    v11 = v14;
  }
  *a3 = v12;
  *a2 = v9;
  return result;
}
