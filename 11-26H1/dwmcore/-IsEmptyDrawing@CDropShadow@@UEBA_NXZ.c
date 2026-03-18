/*
 * XREFs of ?IsEmptyDrawing@CDropShadow@@UEBA_NXZ @ 0x180079830
 * Callers:
 *     ?GetBounds@CDropShadow@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800798A0 (-GetBounds@CDropShadow@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CDropShadow::IsEmptyDrawing(CDropShadow *this)
{
  char v1; // bl
  float v2; // xmm1_4
  char v3; // al
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  LODWORD(v2) = *((_DWORD *)this + 23) & _xmm;
  v3 = 0;
  v6 = 0;
  if ( v2 < 0.0000011920929 )
    return 1;
  if ( *((_DWORD *)this + 31) != 1 )
  {
    v4 = *((_QWORD *)this + 22);
    if ( !v4 )
      goto LABEL_4;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v4 + 320LL))(v4, 0LL, &v6) )
    {
      v3 = v6;
LABEL_4:
      if ( !v3 )
        return v1;
    }
    return 1;
  }
  return v1;
}
