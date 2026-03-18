/*
 * XREFs of ?iCombine@RGNOBJ@@QEAAJAEBVRustAutoHotpatchLockSH@@AEAV1@1J@Z @ 0x1401C4890
 * Callers:
 *     <none>
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012320 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___ @ 0x1401C40E4 (RGNCOREOBJ--iCombine_RGNOBJ__RGNOBJ--iCombine_--_2_--_lambda_1___.c)
 */

__int64 __fastcall RGNOBJ::iCombine(
        RGNOBJ *this,
        const struct RustAutoHotpatchLockSH *a2,
        struct RGNOBJ *a3,
        struct RGNOBJ *a4,
        unsigned int a5)
{
  const struct REGION_CORE *v8; // rdx
  __int64 v9; // rcx

  v8 = *(const struct REGION_CORE **)(W32GetSessionState(this) + 88);
  if ( *(_QWORD *)this == *((_QWORD *)v8 + 520) )
    return RGNOBJ::iComplexity(this, v8);
  else
    return RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___(v9, this, a3, a4, a5, this);
}
