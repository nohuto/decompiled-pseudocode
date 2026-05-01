/*
 * XREFs of ?evaluate@_tip_SnapAssistShowTest@SwitcherTip@@QEAAXXZ @ 0x1802A07C4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXXZ @ 0x1806AA3B0 (-evaluate@-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SwitcherTip::_tip_SnapAssistShowTest::evaluate(SwitcherTip::_tip_SnapAssistShowTest *this)
{
  const char *v1; // rax
  char v2; // r8
  const char *v3; // r9
  __int64 v4; // rax
  __int64 v5; // rax

  if ( *((_BYTE *)this + 16) )
  {
    v1 = "reason::shown";
    v2 = 114;
    v3 = "reason::shown";
    do
    {
      ++v1;
      if ( v2 == 58 )
        v3 = v1;
      v2 = *v1;
    }
    while ( *v1 );
    v4 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v4 + 152) )
    {
      *(_BYTE *)(v4 + 152) = 1;
      *(_WORD *)(v4 + 154) = 1;
      *(_QWORD *)(v4 + 160) = v3;
    }
    return;
  }
  v5 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v5 + 80) )
  {
    if ( *(_BYTE *)(v5 + 152) )
      return;
    *(_WORD *)(v5 + 154) = 0x4000;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(v5 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v5 + 152) )
      return;
    *(_WORD *)(v5 + 154) = 16385;
LABEL_16:
    *(_QWORD *)(v5 + 160) = 0LL;
    *(_BYTE *)(v5 + 152) = 3;
    return;
  }
  if ( !*(_BYTE *)(v5 + 152) )
  {
    *(_BYTE *)(v5 + 152) = 1;
    *(_WORD *)(v5 + 154) = 0x8000;
    *(_QWORD *)(v5 + 160) = 0LL;
  }
}
