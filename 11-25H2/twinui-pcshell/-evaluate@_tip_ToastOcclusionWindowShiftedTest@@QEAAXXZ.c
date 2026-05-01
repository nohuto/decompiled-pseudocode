/*
 * XREFs of ?evaluate@_tip_ToastOcclusionWindowShiftedTest@@QEAAXXZ @ 0x1803779C4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@EEAAXXZ @ 0x1803779B0 (-evaluate@-$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x180293A64 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_ToastOcclusionWindowShiftedTest::evaluate(
        _tip_ToastOcclusionWindowShiftedTest *this,
        const char *a2)
{
  __int64 v2; // r9
  const char *v3; // rax
  __int64 v4; // r9
  char v5; // r10
  char v6; // r10

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) != 0 )
  {
    if ( *((_BYTE *)this + 16) )
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::shifted", a2);
      if ( *(_BYTE *)(v4 + 152) != v5 )
        return;
      *(_BYTE *)(v4 + 152) = 1;
      *(_WORD *)(v4 + 154) = 1;
    }
    else
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::no_margin_set", a2);
      if ( *(_BYTE *)(v4 + 152) != v6 )
        return;
      *(_BYTE *)(v4 + 152) = 1;
      *(_WORD *)(v4 + 154) = 3;
    }
    *(_QWORD *)(v4 + 160) = v3;
  }
  else if ( !*(_BYTE *)(v2 + 152) )
  {
    *(_BYTE *)(v2 + 152) = 3;
    *(_WORD *)(v2 + 154) = 16385;
    *(_QWORD *)(v2 + 160) = 0LL;
  }
}
