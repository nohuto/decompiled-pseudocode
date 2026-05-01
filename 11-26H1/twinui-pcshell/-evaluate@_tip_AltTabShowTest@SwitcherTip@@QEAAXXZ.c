/*
 * XREFs of ?evaluate@_tip_AltTabShowTest@SwitcherTip@@QEAAXXZ @ 0x180202708
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXXZ @ 0x1802B0050 (-evaluate@-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall SwitcherTip::_tip_AltTabShowTest::evaluate(SwitcherTip::_tip_AltTabShowTest *this, const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rcx
  char v5; // r10
  const char *v6; // rax
  char v7; // dl
  const char *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax

  if ( *((_BYTE *)this + 17) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::cancelled", a2);
    v4 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(v4 + 152) == v5 )
    {
      *(_BYTE *)(v4 + 152) = 4;
      *(_WORD *)(v4 + 154) = 2;
      *(_QWORD *)(v4 + 160) = v2;
    }
    return;
  }
  if ( *((_BYTE *)this + 16) )
  {
    v6 = "reason::shown";
    v7 = 114;
    v8 = "reason::shown";
    do
    {
      ++v6;
      if ( v7 == 58 )
        v8 = v6;
      v7 = *v6;
    }
    while ( *v6 );
    v9 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v9 + 152) )
    {
      *(_BYTE *)(v9 + 152) = 1;
      *(_WORD *)(v9 + 154) = 1;
      *(_QWORD *)(v9 + 160) = v8;
    }
    return;
  }
  v10 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v10 + 80) )
  {
    if ( *(_BYTE *)(v10 + 152) )
      return;
    *(_WORD *)(v10 + 154) = 0x4000;
    goto LABEL_19;
  }
  if ( (*(_DWORD *)(v10 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v10 + 152) )
      return;
    *(_WORD *)(v10 + 154) = 16385;
LABEL_19:
    *(_QWORD *)(v10 + 160) = 0LL;
    *(_BYTE *)(v10 + 152) = 3;
    return;
  }
  if ( !*(_BYTE *)(v10 + 152) )
  {
    *(_BYTE *)(v10 + 152) = 1;
    *(_WORD *)(v10 + 154) = 0x8000;
    *(_QWORD *)(v10 + 160) = 0LL;
  }
}
