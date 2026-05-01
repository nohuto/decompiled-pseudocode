/*
 * XREFs of ?evaluate@_tip_SearchHomeRenderTest@@QEAAXXZ @ 0x1803BC448
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@EEAAXXZ @ 0x1803BBF60 (-evaluate@-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_SearchHomeRenderTest::evaluate(_tip_SearchHomeRenderTest *this, const char *a2)
{
  __int64 v2; // r8
  tip2::details *v3; // rax
  __int64 v4; // r8
  char v5; // r9
  char v6; // r9
  __int16 v7; // r9

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) != 0 )
  {
    if ( *((_BYTE *)this + 17) )
    {
      v3 = tip2::details::reason_string((tip2::details *)"Reason::hidden", a2);
      if ( *(_BYTE *)(v4 + 152) != v5 )
        return;
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = 2;
    }
    else if ( *((_BYTE *)this + 16) )
    {
      v3 = tip2::details::reason_string((tip2::details *)"Reason::activated_again_before_render", a2);
      if ( *(_BYTE *)(v4 + 152) != v6 )
        return;
      *(_BYTE *)(v4 + 152) = 4;
      *(_WORD *)(v4 + 154) = 1;
    }
    else
    {
      v3 = tip2::details::reason_string((tip2::details *)"Reason::success", a2);
      if ( *(_BYTE *)(v4 + 152) != (_BYTE)v7 )
        return;
      *(_BYTE *)(v4 + 152) = 1;
      *(_WORD *)(v4 + 154) = v7;
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
