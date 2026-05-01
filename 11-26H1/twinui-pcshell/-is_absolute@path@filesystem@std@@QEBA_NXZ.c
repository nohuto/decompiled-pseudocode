/*
 * XREFs of ?is_absolute@path@filesystem@std@@QEBA_NXZ @ 0x18013CFE0
 * Callers:
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18013CE90 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 * Callees:
 *     ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x18003250C (-_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z.c)
 *     ?_Is_drive_prefix@filesystem@std@@YA_NQEBG@Z @ 0x180032624 (-_Is_drive_prefix@filesystem@std@@YA_NQEBG@Z.c)
 *     ??R_Is_slash_oper@filesystem@std@@SA_NG@Z @ 0x180289AC8 (--R_Is_slash_oper@filesystem@std@@SA_NG@Z.c)
 */

char __fastcall std::filesystem::path::is_absolute(std::filesystem::path *this, const unsigned __int16 *a2)
{
  unsigned __int16 *v2; // r11
  __int64 v3; // r9
  __int64 v4; // r8
  bool Is_drive_prefix; // al
  char v6; // dl
  const unsigned __int16 *root_name_end; // rax
  const unsigned __int16 *v8; // r11

  v2 = (unsigned __int16 *)this;
  if ( *((_QWORD *)this + 3) > 7uLL )
    v2 = *(unsigned __int16 **)this;
  v3 = 2LL * *((_QWORD *)this + 2);
  v4 = v3 >> 1;
  if ( v3 >> 1 >= 2
    && (Is_drive_prefix = std::filesystem::_Is_drive_prefix((std::filesystem *)v2, a2), v6 = 0, Is_drive_prefix) )
  {
    if ( v4 >= 3 )
      return (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v2[2]) != 0;
    return v6;
  }
  else
  {
    root_name_end = std::filesystem::_Find_root_name_end(
                      (std::filesystem *)v2,
                      (char *)&v2[(unsigned __int64)v3 / 2],
                      (const unsigned __int16 *const)v4);
    return v8 != root_name_end;
  }
}
