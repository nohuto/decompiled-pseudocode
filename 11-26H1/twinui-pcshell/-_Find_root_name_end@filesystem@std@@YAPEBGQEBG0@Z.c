/*
 * XREFs of ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x18003250C
 * Callers:
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18013CE90 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?is_absolute@path@filesystem@std@@QEBA_NXZ @ 0x18013CFE0 (-is_absolute@path@filesystem@std@@QEBA_NXZ.c)
 * Callees:
 *     ?_Is_drive_prefix@filesystem@std@@YA_NQEBG@Z @ 0x180032624 (-_Is_drive_prefix@filesystem@std@@YA_NQEBG@Z.c)
 *     ??R_Is_slash_oper@filesystem@std@@SA_NG@Z @ 0x180289AC8 (--R_Is_slash_oper@filesystem@std@@SA_NG@Z.c)
 */

const unsigned __int16 *__fastcall std::filesystem::_Find_root_name_end(
        std::filesystem *this,
        char *a2,
        const unsigned __int16 *const a3)
{
  unsigned __int16 *v3; // r8
  unsigned __int16 *v4; // rcx
  const unsigned __int16 *result; // rax
  __int64 v6; // r9
  __int64 v7; // r9
  const unsigned __int16 *v8; // rdx
  __int16 v9; // cx
  unsigned __int16 *v10; // r10

  v3 = (unsigned __int16 *)this;
  if ( (a2 - (char *)this) >> 1 < 2 )
    return v3;
  if ( std::filesystem::_Is_drive_prefix(this, (const unsigned __int16 *const)a2) )
    return v4 + 2;
  if ( !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*v4) )
    return v3;
  if ( v6 < 4 )
  {
    if ( v6 < 3 )
      return v3;
LABEL_17:
    if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v3[1])
      && !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v3[2]) )
    {
      for ( v3 += 3; v3 != v10 && !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*v3); ++v3 )
        ;
    }
    return v3;
  }
  if ( !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v3[3])
    || v7 != 4 && (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v3[4]) )
  {
    goto LABEL_17;
  }
  if ( !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v3[1]) || (result = v8, v3[2] != 63) && v3[2] != 46 )
  {
    if ( v9 != 63 )
      goto LABEL_17;
    result = v8;
    if ( v3[2] != 63 )
      goto LABEL_17;
  }
  return result;
}
