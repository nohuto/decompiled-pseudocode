/*
 * XREFs of ?bRectl@RGNOBJ@@QEBAHXZ @ 0x14000E41C
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x14000E530 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___ @ 0x1401C40E4 (RGNCOREOBJ--iCombine_RGNOBJ__RGNOBJ--iCombine_--_2_--_lambda_1___.c)
 * Callees:
 *     ?RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z @ 0x14000E4A0 (-RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z.c)
 */

__int64 __fastcall RGNOBJ::bRectl(RGNOBJ *this, const struct REGION_CORE *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1402A10B0 )
    LOBYTE(v2) = (unsigned int)Win32kRS::RegionCore_is_rect(
                                 (Win32kRS *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)),
                                 a2) != 0;
  else
    LOBYTE(v2) = *(_DWORD *)(((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)) + 0x10) == 56;
  return v2;
}
