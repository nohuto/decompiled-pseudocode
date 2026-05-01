/*
 * XREFs of ?evaluate@_tip_WinXMenuEnumerationTest@@QEAAXXZ @ 0x1805DF9D4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@EEAAXXZ @ 0x1805DF9C0 (-evaluate@-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_WinXMenuEnumerationTest::evaluate(_tip_WinXMenuEnumerationTest *this, const char *a2)
{
  __int64 v2; // r9
  const char *v3; // rax
  __int64 v4; // r9
  char v5; // r10
  char v6; // r10
  char v7; // r10

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    *(_WORD *)(v2 + 154) = 16385;
    goto LABEL_20;
  }
  if ( *(_QWORD *)(v2 + 80) )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_BYTE *)(v2 + 152) = 3;
    *(_WORD *)(v2 + 154) = 0x4000;
    goto LABEL_20;
  }
  if ( !*((_BYTE *)this + 17) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::links_missing", a2);
    if ( *(_BYTE *)(v4 + 152) != v5 )
      return;
    *(_WORD *)(v4 + 154) = 1;
LABEL_10:
    *(_BYTE *)(v4 + 152) = 3;
    goto LABEL_11;
  }
  if ( *((int *)this + 12) < 0 )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::enumeration_failed", a2);
    if ( *(_BYTE *)(v4 + 152) != v6 )
      return;
    *(_WORD *)(v4 + 154) = 2;
    goto LABEL_10;
  }
  if ( *((_BYTE *)this + 52) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::obsolete_link_found", a2);
    if ( *(_BYTE *)(v4 + 152) != v7 )
      return;
    *(_BYTE *)(v4 + 152) = 2;
    *(_WORD *)(v4 + 154) = 3;
LABEL_11:
    *(_QWORD *)(v4 + 160) = v3;
    return;
  }
  if ( *(_BYTE *)(v2 + 152) )
    return;
  *(_BYTE *)(v2 + 152) = 1;
  *(_WORD *)(v2 + 154) = 0x8000;
LABEL_20:
  *(_QWORD *)(v2 + 160) = 0LL;
}
