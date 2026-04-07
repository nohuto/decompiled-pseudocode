/*
 * XREFs of ??$IntersectRectT@UD2D_POINTANDSIZE_L@@@@YAHPEAUD2D_POINTANDSIZE_L@@PEBU0@1@Z @ 0x180082408
 * Callers:
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800133E8 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x18007EB30 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntersectRectT<D2D_POINTANDSIZE_L>(_DWORD *a1, int *a2, int *a3)
{
  int v5; // r11d
  int v6; // r10d
  int v7; // eax
  int v8; // eax
  __int64 result; // rax
  int v10; // ecx
  int v11; // edx
  int v12; // r8d
  int v13; // edx
  int v14; // r9d
  int v15; // r9d

  v5 = *a2;
  v6 = *a3 + a3[2];
  v7 = *a2 + a2[2];
  if ( *a2 <= *a3 )
    v5 = *a3;
  *a1 = v5;
  if ( v7 >= v6 )
    v7 = v6;
  v8 = v7 - v5;
  a1[2] = v8;
  if ( v8 > 0 )
  {
    v10 = a3[1];
    v11 = a3[3];
    v12 = a2[1];
    v13 = v10 + v11;
    v14 = v12 + a2[3];
    if ( v12 <= v10 )
      v12 = v10;
    a1[1] = v12;
    if ( v14 >= v13 )
      v14 = v13;
    v15 = v14 - v12;
    a1[3] = v15;
    if ( v15 > 0 )
      return 1LL;
  }
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  return result;
}
