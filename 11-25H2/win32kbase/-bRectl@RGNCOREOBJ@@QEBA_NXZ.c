/*
 * XREFs of ?bRectl@RGNCOREOBJ@@QEBA_NXZ @ 0x14000E468
 * Callers:
 *     RGNCOREOBJ::iCombine_RGNCOREOBJ__RGNCOREOBJ::iCombine_::_2_::_lambda_1___ @ 0x1400F310C (RGNCOREOBJ--iCombine_RGNCOREOBJ__RGNCOREOBJ--iCombine_--_2_--_lambda_1___.c)
 * Callees:
 *     ?RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z @ 0x14000E4A0 (-RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z.c)
 */

bool __fastcall RGNCOREOBJ::bRectl(Win32kRS **this, const struct REGION_CORE *a2)
{
  Win32kRS *v2; // rax

  v2 = *this;
  if ( qword_1402A10B0 )
    return (unsigned int)Win32kRS::RegionCore_is_rect(v2, a2) != 0;
  else
    return *((_DWORD *)v2 + 4) == 56;
}
