/*
 * XREFs of ?GetDriverWhiteboxDiagData@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX_INFO@@I@Z @ 0x1401CAD7C
 * Callers:
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1401CA340 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z.c)
 * Callees:
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1400761DC (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?GetDriverWhiteboxDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x140076254 (-GetDriverWhiteboxDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::GetDriverWhiteboxDiagData(
        DISPLAYSTATECHECKER *this,
        struct _DXGK_DIAG_BLACK_SCREEN_DRIVER_WHITEBOX_INFO *a2,
        unsigned int a3)
{
  unsigned int v6; // ebp
  unsigned int v7; // edi
  __int64 v8; // r15
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  __m128i *v10; // r12
  char *v11; // rbx
  struct DISPLAYDIAGNOSTICADAPTERDATA *v12; // rax
  unsigned int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // eax
  char *v19; // r9
  __int64 v20; // r8
  __int64 v21; // r10
  char *v22; // rdx
  __int64 v23; // rcx
  int v24; // eax

  if ( a3 < (unsigned int)DISPLAYSTATECHECKER::GetDriverWhiteboxDiagDataSize(this) )
    return 3221225507LL;
  v6 = *((_DWORD *)this + 3522);
  v7 = 0;
  *(_DWORD *)a2 = v6;
  *((_QWORD *)a2 + 1) = (char *)a2 + 16;
  if ( v6 )
  {
    v8 = 0LL;
    do
    {
      DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, v7);
      v10 = (__m128i *)(v8 + *((_QWORD *)a2 + 1));
      v11 = (char *)DisplayAdapterDiagData + 1960;
      v12 = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, v7);
      v13 = 0;
      v10->m128i_i64[0] = *((_QWORD *)v12 + 1);
      v14 = *((unsigned int *)v11 + 56);
      v10->m128i_i32[2] = v14;
      v10->m128i_i32[3] = *((_DWORD *)v11 + 321);
      for ( v10[1] = _mm_add_epi64(
                       _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)((unsigned __int64)v10 + 28 * v14)),
                       (__m128i)_xmm);
            v13 < *((_DWORD *)v11 + 56);
            *(_DWORD *)(v17 + v15 + 24) = *(_DWORD *)&v11[28 * v16 + 24] )
      {
        v15 = v10[1].m128i_i64[0];
        v16 = v13++;
        v17 = 28 * v16;
        *(_DWORD *)(v17 + v15) = *(_DWORD *)&v11[28 * v16];
        *(_DWORD *)(v17 + v15 + 4) = *(_DWORD *)&v11[28 * v16 + 4];
        *(_DWORD *)(v17 + v15 + 8) = *(_DWORD *)&v11[28 * v16 + 8];
        *(_DWORD *)(v17 + v15 + 12) = *(_DWORD *)&v11[28 * v16 + 12];
        *(_DWORD *)(v17 + v15 + 16) = *(_DWORD *)&v11[28 * v16 + 16];
        *(_DWORD *)(v17 + v15 + 20) = *(_DWORD *)&v11[28 * v16 + 20];
      }
      v18 = *((_DWORD *)v11 + 321);
      if ( v18 )
      {
        v19 = v11 + 232;
        v20 = -232LL - (_QWORD)v11;
        v21 = v18;
        do
        {
          v22 = &v19[v10[1].m128i_i64[1]];
          *(_DWORD *)&v22[v20] = *((_DWORD *)v19 - 1);
          v23 = (__int64)&v22[v20 + 140];
          *(_DWORD *)&v22[v20 + 4] = *(_DWORD *)v19;
          *(_DWORD *)&v22[v20 + 8] = *((_DWORD *)v19 + 1);
          *(_OWORD *)(v23 - 128) = *(_OWORD *)(v19 + 8);
          *(_OWORD *)(v23 - 112) = *(_OWORD *)(v19 + 24);
          *(_OWORD *)(v23 - 96) = *(_OWORD *)(v19 + 40);
          *(_OWORD *)(v23 - 80) = *(_OWORD *)(v19 + 56);
          *(_OWORD *)(v23 - 64) = *(_OWORD *)(v19 + 72);
          *(_OWORD *)(v23 - 48) = *(_OWORD *)(v19 + 88);
          *(_OWORD *)(v23 - 32) = *(_OWORD *)(v19 + 104);
          *(_OWORD *)(v23 - 16) = *(_OWORD *)(v19 + 120);
          *(_OWORD *)v23 = *(_OWORD *)(v19 + 136);
          *(_OWORD *)(v23 + 16) = *(_OWORD *)(v19 + 152);
          *(_OWORD *)(v23 + 32) = *(_OWORD *)(v19 + 168);
          *(_OWORD *)(v23 + 48) = *(_OWORD *)(v19 + 184);
          *(_OWORD *)(v23 + 64) = *(_OWORD *)(v19 + 200);
          *(_OWORD *)(v23 + 80) = *(_OWORD *)(v19 + 216);
          *(_DWORD *)(v23 + 96) = *((_DWORD *)v19 + 58);
          *(_DWORD *)&v22[v20 + 240] = *((_DWORD *)v19 + 59);
          *(_DWORD *)&v22[v20 + 244] = *((_DWORD *)v19 + 60);
          *(_DWORD *)&v22[v20 + 248] = *((_DWORD *)v19 + 61);
          *(_DWORD *)&v22[v20 + 252] = *((_DWORD *)v19 + 62);
          *(_DWORD *)&v22[v20 + 256] = *((_DWORD *)v19 + 63);
          v24 = *((_DWORD *)v19 + 64);
          v19 += 264;
          *(_DWORD *)&v22[v20 + 260] = v24;
          --v21;
        }
        while ( v21 );
      }
      ++v7;
      v8 += 32LL;
    }
    while ( v7 < v6 );
  }
  return 0LL;
}
