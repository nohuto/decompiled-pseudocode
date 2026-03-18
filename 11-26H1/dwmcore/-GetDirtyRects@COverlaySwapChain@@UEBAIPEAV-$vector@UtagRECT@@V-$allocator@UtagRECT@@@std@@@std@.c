/*
 * XREFs of ?GetDirtyRects@COverlaySwapChain@@UEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180056520
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Reallocate@$0A@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800568E0 (--$_Reallocate@$0A@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXAEA_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$emplace_back@AEAUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAAEAUtagRECT@@AEAU2@@Z @ 0x1802346E0 (--$emplace_back@AEAUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAAAEAUtagR.c)
 */

__int64 __fastcall COverlaySwapChain::GetDirtyRects(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // r8
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  int *v9; // rdi
  int v10; // eax
  __int64 v11; // r14
  _DWORD *v12; // rdi
  char *v13; // r14
  int v14; // esi
  _DWORD *v15; // r12
  _DWORD *v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rax
  _DWORD *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rax
  _DWORD v23[14]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_DWORD **)(a1 + 160);
  if ( *v2 )
  {
    v5 = (__int64)&v2[2 * *v2 + 1];
    v6 = (v5 + *(int *)(v5 + 4) - (__int64)(int)v2[4] - (__int64)(v2 + 3)) >> 3;
    if ( (_DWORD)v6 )
    {
      v7 = (unsigned int)v6 + ((__int64)(a2[1] - *a2) >> 4);
      v8 = (__int64)(a2[2] - *a2) >> 4;
      v24 = v7;
      if ( v7 > v8 )
      {
        if ( v7 > 0xFFFFFFFFFFFFFFFLL )
          std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
        std::vector<tagRECT>::_Reallocate<0>(a2, &v24);
      }
      v9 = *(int **)(a1 + 160);
      v10 = *v9;
      if ( *v9 )
      {
        v11 = v9[4];
        v12 = v9 + 3;
        v13 = (char *)v12 + v11;
        v14 = 0;
        v15 = &v12[2 * v10 - 2];
        v16 = v12 + 2;
        v17 = ((__int64)v12 + (int)v12[3] - (_QWORD)v13 + 8) >> 3;
        if ( (int)v17 <= 0 )
        {
          v14 = 1;
          do
          {
            v12 = v16;
            v18 = (int)v16[3];
            v13 = (char *)v16 + (int)v16[1];
            v16 += 2;
            LODWORD(v17) = ((__int64)v16 + v18 - (__int64)v13) >> 3;
            if ( (_DWORD)v17 )
              goto LABEL_16;
          }
          while ( v12 < v15 );
        }
      }
      else
      {
        v13 = (char *)v24;
        v15 = 0LL;
        v14 = v24;
        v12 = 0LL;
        LODWORD(v17) = v24;
      }
LABEL_13:
      while ( v12 < v15 )
      {
        v19 = v12 + 2;
        v23[1] = *v12;
        v23[3] = v12[2];
        v20 = 2 * v14;
        v23[0] = *(_DWORD *)&v13[4 * v20];
        v23[2] = *(_DWORD *)&v13[4 * v20 + 4];
        std::vector<tagRECT>::emplace_back<tagRECT &>(a2, v23);
        if ( ++v14 >= (int)v17 )
        {
          while ( 1 )
          {
            v12 = v19;
            v21 = (int)v19[3];
            v13 = (char *)v19 + (int)v19[1];
            v19 += 2;
            LODWORD(v17) = ((__int64)v19 + v21 - (__int64)v13) >> 3;
            if ( (_DWORD)v17 )
              break;
            if ( v12 >= v15 )
              goto LABEL_13;
          }
LABEL_16:
          v14 = 0;
        }
      }
    }
  }
  else
  {
    LODWORD(v6) = 0;
  }
  return (unsigned int)v6;
}
