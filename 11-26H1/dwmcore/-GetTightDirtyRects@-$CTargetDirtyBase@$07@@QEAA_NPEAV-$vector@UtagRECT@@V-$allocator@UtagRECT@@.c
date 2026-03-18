/*
 * XREFs of ?GetTightDirtyRects@?$CTargetDirtyBase@$07@@QEAA_NPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180056338
 * Callers:
 *     ?Present@CDDARenderTarget@@IEAAJXZ @ 0x1800560EC (-Present@CDDARenderTarget@@IEAAJXZ.c)
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x18025303C (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??$_Reallocate@$0A@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800568E0 (--$_Reallocate@$0A@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXAEA_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$emplace_back@AEAUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAAEAUtagRECT@@AEAU2@@Z @ 0x1802346E0 (--$emplace_back@AEAUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAAEAUtagR.c)
 */

char __fastcall CTargetDirtyBase<8>::GetTightDirtyRects(__int64 a1, _QWORD *a2)
{
  int **v2; // rbx
  char result; // al
  int *v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  int *v12; // rbx
  int v13; // eax
  __int64 v14; // rsi
  _DWORD *v15; // rbx
  char *v16; // rsi
  int v17; // edi
  _DWORD *v18; // r15
  _DWORD *v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rax
  _DWORD *v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rax
  _DWORD v25[14]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(int ***)(a1 + 464);
  if ( !v2 )
    return 0;
  v6 = *v2;
  v7 = **v2;
  if ( v7 )
  {
    v8 = (__int64)&v6[2 * v7 + 1];
    v9 = (v8 + *(int *)(v8 + 4) - (__int64)v6[4] - (__int64)(v6 + 3)) >> 3;
    if ( (_DWORD)v9 )
    {
      v10 = (unsigned int)v9 + ((__int64)(a2[1] - *a2) >> 4);
      v11 = (__int64)(a2[2] - *a2) >> 4;
      v26 = v10;
      if ( v10 > v11 )
      {
        if ( v10 > 0xFFFFFFFFFFFFFFFLL )
          std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
        std::vector<tagRECT>::_Reallocate<0>(a2, &v26);
      }
      v12 = *v2;
      v13 = *v12;
      if ( *v12 )
      {
        v14 = v12[4];
        v15 = v12 + 3;
        v16 = (char *)v15 + v14;
        v17 = 0;
        v18 = &v15[2 * v13 - 2];
        v19 = v15 + 2;
        v20 = ((__int64)v15 + (int)v15[3] - (_QWORD)v16 + 8) >> 3;
        if ( (int)v20 <= 0 )
        {
          v17 = 1;
          do
          {
            v15 = v19;
            v21 = (int)v19[3];
            v16 = (char *)v19 + (int)v19[1];
            v19 += 2;
            LODWORD(v20) = ((__int64)v19 + v21 - (__int64)v16) >> 3;
            if ( (_DWORD)v20 )
              goto LABEL_18;
          }
          while ( v15 < v18 );
        }
      }
      else
      {
        v16 = (char *)v26;
        v18 = 0LL;
        v17 = v26;
        v15 = 0LL;
        LODWORD(v20) = v26;
      }
LABEL_15:
      while ( v15 < v18 )
      {
        v22 = v15 + 2;
        v25[1] = *v15;
        v25[3] = v15[2];
        v23 = 2 * v17;
        v25[0] = *(_DWORD *)&v16[4 * v23];
        v25[2] = *(_DWORD *)&v16[4 * v23 + 4];
        std::vector<tagRECT>::emplace_back<tagRECT &>(a2, v25);
        if ( ++v17 >= (int)v20 )
        {
          while ( 1 )
          {
            v15 = v22;
            v24 = (int)v22[3];
            v16 = (char *)v22 + (int)v22[1];
            v22 += 2;
            LODWORD(v20) = ((__int64)v22 + v24 - (__int64)v16) >> 3;
            if ( (_DWORD)v20 )
              break;
            if ( v15 >= v18 )
              goto LABEL_15;
          }
LABEL_18:
          v17 = 0;
        }
      }
    }
  }
  result = 1;
  ***(_DWORD ***)(a1 + 464) = 0;
  return result;
}
