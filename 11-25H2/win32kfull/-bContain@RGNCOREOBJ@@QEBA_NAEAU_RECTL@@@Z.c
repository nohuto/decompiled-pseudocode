/*
 * XREFs of ?bContain@RGNCOREOBJ@@QEBA_NAEAU_RECTL@@@Z @ 0x1401C9E6C
 * Callers:
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1401C9E38 (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 * Callees:
 *     ??$IsBaseRustExportsEnabled@$00@@YA_NXZ @ 0x14009C598 (--$IsBaseRustExportsEnabled@$00@@YA_NXZ.c)
 *     ?RegionCore_bContain_rcl@Win32kRS@@YAHPEBVREGION_CORE@@AEBU_RECTL@@@Z @ 0x1401C9ED0 (-RegionCore_bContain_rcl@Win32kRS@@YAHPEBVREGION_CORE@@AEBU_RECTL@@@Z.c)
 */

char __fastcall RGNCOREOBJ::bContain(Win32kRS **this, struct _RECTL *a2)
{
  bool v4; // al
  const struct _RECTL *v5; // r8
  Win32kRS *v6; // rcx
  char v7; // bl

  v4 = IsBaseRustExportsEnabled<1>();
  v6 = *this;
  v7 = 0;
  if ( v4 )
    return (unsigned int)Win32kRS::RegionCore_bContain_rcl(v6, (const struct REGION_CORE *)a2, v5) != 0;
  if ( *((_DWORD *)v6 + 7) <= a2->left && *((_DWORD *)v6 + 9) >= a2->right && *((_DWORD *)v6 + 8) <= a2->top )
    return *((_DWORD *)v6 + 10) >= a2->bottom;
  return v7;
}
