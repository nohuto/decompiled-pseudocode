/*
 * XREFs of ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x180140CFC
 * Callers:
 *     ?UpdateClientInfo@CDesktopTree@@MEAAXXZ @ 0x180140BE0 (-UpdateClientInfo@CDesktopTree@@MEAAXXZ.c)
 *     ?UpdateClientInfo@CVisualTree@@MEAAXXZ @ 0x180140CF0 (-UpdateClientInfo@CVisualTree@@MEAAXXZ.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180022120 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180057D50 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisualTree::UpdateClientBounds(CVisualTree *this, __int64 a2, double a3)
{
  float *v3; // r15
  char v5; // r12
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // r13
  char v9; // si
  int *v10; // rax
  int v11; // ecx
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  __int128 v15; // [rsp+28h] [rbp-59h] BYREF
  int v16[4]; // [rsp+38h] [rbp-49h] BYREF
  FastRegion::CRegion *v17; // [rsp+48h] [rbp-39h] BYREF
  _DWORD v18[18]; // [rsp+50h] [rbp-31h] BYREF

  v3 = (float *)((char *)this + 2504);
  *((_QWORD *)this + 314) = 0LL;
  *((_QWORD *)this + 313) = 0LL;
  v5 = 0;
  **((_DWORD **)this + 315) = 0;
  *((_BYTE *)this + 2630) = 0;
  *((_DWORD *)this + 648) = 1065353216;
  v6 = (_QWORD *)*((_QWORD *)this + 307);
  v7 = (_QWORD *)*((_QWORD *)this + 306);
  if ( !(v6 - v7) )
    goto LABEL_11;
  while ( v7 != v6 )
  {
    v8 = *v7;
    v9 = *((_BYTE *)this + 2630);
    *((_BYTE *)this + 2630) = v9 | (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 48LL))(*v7);
    v15 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
    if ( TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite((float *)&v15) )
    {
      v5 = 1;
    }
    else
    {
      v18[0] = 0;
      v17 = (FastRegion::CRegion *)v18;
      v10 = PixelAlign(v16, (unsigned int *)&v15, a3);
      v11 = v10[2];
      v12 = *v10;
      if ( *v10 < v11 )
      {
        v13 = v10[3];
        v14 = v10[1];
        if ( v14 < v13 )
        {
          v18[0] = 2;
          v18[4] = 16;
          v18[6] = 16;
          v18[1] = v12;
          v18[2] = v11;
          v18[3] = v14;
          v18[7] = v12;
          v18[8] = v11;
          v18[5] = v13;
        }
      }
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(v3, (float *)&v15);
      CRegion::Union((const struct FastRegion::Internal::CRgnData **)this + 315, &v17);
      FastRegion::CRegion::FreeMemory(&v17);
    }
    ++v7;
    *((float *)this + 648) = fmaxf(
                               (*(float (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8),
                               *((float *)this + 648));
  }
  if ( v5 )
LABEL_11:
    *(_OWORD *)v3 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
}
