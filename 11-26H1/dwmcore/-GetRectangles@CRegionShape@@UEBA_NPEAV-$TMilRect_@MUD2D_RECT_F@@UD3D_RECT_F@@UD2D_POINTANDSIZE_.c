/*
 * XREFs of ?GetRectangles@CRegionShape@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180035E90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180035FC0 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180035FFC (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 */

char __fastcall CRegionShape::GetRectangles(__int64 a1, __int64 a2, int a3)
{
  char v3; // bl
  unsigned int RectangleCount; // eax
  __int64 v6; // r10
  int v7; // r9d
  unsigned int v8; // r15d
  __int64 v9; // r10
  int *v10; // r11
  unsigned __int64 v11; // rsi
  int v12; // edi
  char *v13; // rbp
  int v14; // eax
  int v15; // r9d
  __int64 v16; // rcx
  __int64 v17; // r8
  float v18; // xmm1_4
  int v19; // eax
  int *v20; // rcx
  int *v21; // rdx
  char v23[8]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]
  int *v25; // [rsp+30h] [rbp-38h]
  char *v26; // [rsp+38h] [rbp-30h]
  int v27; // [rsp+40h] [rbp-28h]
  int v28; // [rsp+44h] [rbp-24h]

  v3 = 0;
  if ( a3 )
  {
    RectangleCount = FastRegion::CRegion::GetRectangleCount((FastRegion::CRegion *)(a1 + 16));
    if ( v7 == RectangleCount )
    {
      v8 = 0;
      FastRegion::CRegion::BeginIterator(v6, v23);
      LODWORD(v9) = v28;
      v10 = v25;
      v11 = v24;
      v12 = v27;
      v13 = v26;
LABEL_4:
      while ( (unsigned __int64)v10 < v11 )
      {
        v14 = 2 * v12;
        v15 = v10[2];
        ++v12;
        v16 = v14;
        v17 = v8++;
        v17 *= 2LL;
        v18 = (float)*v10;
        v19 = *(_DWORD *)&v13[4 * v14 + 4];
        *(float *)(a2 + 8 * v17) = (float)*(int *)&v13[4 * v16];
        *(float *)(a2 + 8 * v17 + 4) = v18;
        *(float *)(a2 + 8 * v17 + 8) = (float)v19;
        *(float *)(a2 + 8 * v17 + 12) = (float)v15;
        if ( v12 >= (int)v9 )
        {
          v20 = v10 + 2;
          while ( 1 )
          {
            v13 = (char *)v20 + v20[1];
            v21 = v20;
            v10 = v20;
            v9 = (v20[3] - (__int64)v20[1] + 8) >> 3;
            v20 += 2;
            if ( (_DWORD)v9 )
              break;
            if ( (unsigned __int64)v21 >= v11 )
              goto LABEL_4;
          }
          v12 = 0;
        }
      }
      return 1;
    }
  }
  return v3;
}
