/*
 * XREFs of ?TransformPointWithUniformSpaceMapping@@YAHPEAU_MDEV@@PEAH1H@Z @ 0x14011D798
 * Callers:
 *     DrvPixelSpaceToUniformSpacePoint @ 0x14011D750 (DrvPixelSpaceToUniformSpacePoint.c)
 * Callees:
 *     PtInRect @ 0x14010DA60 (PtInRect.c)
 *     DrvIsUniformSpaceMapping @ 0x14011D8F0 (DrvIsUniformSpaceMapping.c)
 */

__int64 __fastcall TransformPointWithUniformSpaceMapping(struct _MDEV *a1, int *a2, int *a3, int a4)
{
  unsigned int v8; // ebx
  unsigned int v10; // r8d
  unsigned int v11; // ebp
  _DWORD *v12; // rsi
  int v13; // r8d
  __int64 v14; // r9
  int v15; // r10d
  int v16; // r11d
  unsigned __int64 v17; // r8
  float v18; // xmm3_4
  unsigned __int64 v19; // [rsp+20h] [rbp-28h]

  v8 = 0;
  if ( (unsigned int)DrvIsUniformSpaceMapping(a1) )
  {
    v10 = 0;
    v11 = *((_DWORD *)a1 + 5);
    LODWORD(v19) = *a2;
    HIDWORD(v19) = *a3;
    while ( v10 < v11 )
    {
      v12 = (_DWORD *)((char *)a1 + 56 * v10 + (a4 != 0 ? 76LL : 56LL));
      if ( PtInRect(v12, v19) )
      {
        v8 = 1;
        v17 = -(__int64)(a4 != 0) & 0xFFFFFFFFFFFFFFECuLL;
        v18 = (float)((float)((float)(*(_DWORD *)(v17 + v14 + 88) - *(_DWORD *)(v17 + v14 + 80))
                            / (float)(v12[3] - v12[1]))
                    * (float)(v15 - v12[1]))
            + 0.5;
        *a2 = *(_DWORD *)(v17 + v14 + 76)
            + (int)(float)((float)((float)((float)(*(_DWORD *)(v17 + v14 + 84) - *(_DWORD *)(v17 + v14 + 76))
                                         / (float)(v12[2] - *v12))
                                 * (float)(v16 - *v12))
                         + 0.5);
        *a3 = *(_DWORD *)(v17 + v14 + 80) + (int)v18;
        return v8;
      }
      v10 = v13 + 1;
    }
  }
  return v8;
}
