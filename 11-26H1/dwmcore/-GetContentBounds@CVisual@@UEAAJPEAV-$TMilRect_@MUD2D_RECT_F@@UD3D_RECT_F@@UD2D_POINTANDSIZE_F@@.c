/*
 * XREFs of ?GetContentBounds@CVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016A0B0
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180169910 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180169C10 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::GetContentBounds(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // rax
  int v9; // edx
  int *v10; // rcx
  __m128 v11; // xmm1
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  __int128 v15; // [rsp+30h] [rbp-28h]

  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)a2 = 0LL;
  v4 = 0;
  v5 = a1[31];
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 192LL))(v5, (__int64)a1 + 140, a2);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xD76u, 0LL);
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 296LL))(a1) )
    return v4;
  v8 = a1[27];
  if ( (*(_DWORD *)(v8 + 4) & 0x100000) == 0 )
    return v4;
  v9 = *(_DWORD *)(v8 + 12);
  v10 = (int *)(v8 + 12);
  if ( (v9 & 0x7F000000) != 0xC000000 )
  {
    do
    {
      v10 = (int *)((char *)v10 + (v9 & 0xFFFFFF) + 4);
      v9 = *v10;
    }
    while ( (*v10 & 0x7F000000) != 0xC000000 );
  }
  v11 = *(__m128 *)(v10 + 1);
  LODWORD(v15) = v11.m128_i32[0];
  v12 = _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
  LODWORD(v13) = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
  LODWORD(v14) = _mm_shuffle_ps(v11, v11, 255).m128_u32[0];
  *((float *)&v15 + 1) = v13;
  *((_QWORD *)&v15 + 1) = __PAIR64__(LODWORD(v14), LODWORD(v12));
  if ( v12 <= v11.m128_f32[0] || v14 <= v13 )
    return v4;
  if ( *(float *)(a2 + 8) <= *(float *)a2 || *(float *)(a2 + 12) <= *(float *)(a2 + 4) )
  {
    result = v4;
    *(_OWORD *)a2 = v15;
  }
  else
  {
    if ( *(float *)a2 > v11.m128_f32[0] )
      *(_DWORD *)a2 = v11.m128_i32[0];
    if ( *(float *)(a2 + 4) > v13 )
      *(float *)(a2 + 4) = v13;
    if ( v12 > *(float *)(a2 + 8) )
      *(float *)(a2 + 8) = v12;
    result = v4;
    if ( v14 > *(float *)(a2 + 12) )
      *(float *)(a2 + 12) = v14;
  }
  return result;
}
