/*
 * XREFs of ?evaluate@_tip_EduThemeInstalled@@QEAAXXZ @ 0x1805E2F14
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@EEAAXXZ @ 0x1805E2E40 (-evaluate@-$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_EduThemeInstalled::evaluate(_tip_EduThemeInstalled *this, const char *a2)
{
  __int64 v2; // r9
  const char *v3; // rax
  __int64 v4; // r9
  char v5; // r10

  v2 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v2 + 80) )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    *(_WORD *)(v2 + 154) = 0x4000;
LABEL_12:
    *(_QWORD *)(v2 + 160) = 0LL;
    return;
  }
  if ( *((_BYTE *)this + 16) )
  {
    if ( (*(_DWORD *)(v2 + 56) & 0x200) != 0 )
    {
      if ( *(_BYTE *)(v2 + 152) )
        return;
      *(_BYTE *)(v2 + 152) = 1;
      *(_WORD *)(v2 + 154) = 0x8000;
    }
    else
    {
      if ( *(_BYTE *)(v2 + 152) )
        return;
      *(_BYTE *)(v2 + 152) = 3;
      *(_WORD *)(v2 + 154) = 16385;
    }
    goto LABEL_12;
  }
  v3 = tip2::details::reason_string((tip2::details *)"reason::failure_edu_theme_failed_to_install", a2);
  if ( *(_BYTE *)(v4 + 152) == v5 )
  {
    *(_BYTE *)(v4 + 152) = 3;
    *(_WORD *)(v4 + 154) = 1;
    *(_QWORD *)(v4 + 160) = v3;
  }
}
