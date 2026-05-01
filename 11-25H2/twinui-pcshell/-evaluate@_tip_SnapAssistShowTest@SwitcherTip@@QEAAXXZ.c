/*
 * XREFs of ?evaluate@_tip_SnapAssistShowTest@SwitcherTip@@QEAAXXZ @ 0x1802A9318
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXXZ @ 0x180681050 (-evaluate@-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SwitcherTip::_tip_SnapAssistShowTest::evaluate(SwitcherTip::_tip_SnapAssistShowTest *this)
{
  const char *v1; // r8
  char v2; // r10
  const char *v3; // r9
  const char *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  if ( *((_BYTE *)this + 16) )
  {
    v1 = "reason::shown";
    v2 = 114;
    v3 = "reason::shown";
    do
    {
      v4 = ++v1;
      if ( v2 != 58 )
        v4 = v3;
      v2 = *v1;
      v3 = v4;
    }
    while ( *v1 );
    v5 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v5 + 152) )
    {
      *(_BYTE *)(v5 + 152) = 1;
      *(_WORD *)(v5 + 154) = 1;
      *(_QWORD *)(v5 + 160) = v3;
    }
  }
  else
  {
    v6 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(v6 + 80) )
    {
      if ( *(_BYTE *)(v6 + 152) )
        return;
      *(_BYTE *)(v6 + 152) = 3;
      *(_WORD *)(v6 + 154) = 0x4000;
    }
    else if ( (*(_DWORD *)(v6 + 56) & 0x200) != 0 )
    {
      if ( *(_BYTE *)(v6 + 152) )
        return;
      *(_BYTE *)(v6 + 152) = 1;
      *(_WORD *)(v6 + 154) = 0x8000;
    }
    else
    {
      if ( *(_BYTE *)(v6 + 152) )
        return;
      *(_BYTE *)(v6 + 152) = 3;
      *(_WORD *)(v6 + 154) = 16385;
    }
    *(_QWORD *)(v6 + 160) = 0LL;
  }
}
