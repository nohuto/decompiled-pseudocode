/*
 * XREFs of ?GetBounds@CClipBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802893B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CClipBrush::GetBounds(__int64 a1, __int64 a2, struct D2D_RECT_F *a3)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  int v7; // eax
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm1_4

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 192LL))(v5);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x34u, 0LL);
    }
    else
    {
      v8 = *(float *)(a1 + 112);
      if ( v8 > a3->left )
        a3->left = v8;
      v9 = *(float *)(a1 + 116);
      if ( v9 > a3->top )
        a3->top = v9;
      v10 = *(float *)(a1 + 120);
      if ( a3->right > v10 )
        a3->right = v10;
      v11 = *(float *)(a1 + 124);
      if ( a3->bottom > v11 )
        a3->bottom = v11;
      if ( IsEmpty(a3) )
      {
        *(_QWORD *)&a3->right = 0LL;
        *(_QWORD *)&a3->left = 0LL;
      }
    }
  }
  else
  {
    *(_QWORD *)&a3->right = 0LL;
    *(_QWORD *)&a3->left = 0LL;
  }
  return v4;
}
