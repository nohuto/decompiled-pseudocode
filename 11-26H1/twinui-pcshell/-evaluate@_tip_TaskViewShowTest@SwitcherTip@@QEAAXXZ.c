/*
 * XREFs of ?evaluate@_tip_TaskViewShowTest@SwitcherTip@@QEAAXXZ @ 0x1806A81A4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXXZ @ 0x1806A8190 (-evaluate@-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x18028A280 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?__fail_if_complete_not_called@?$test_data_base@U_tip_CopilotHardwareKeyInvokedTest_id@@@tip2@@IEBA_NXZ @ 0x1802C12C0 (-__fail_if_complete_not_called@-$test_data_base@U_tip_CopilotHardwareKeyInvokedTest_id@@@tip2@@I.c)
 */

void __fastcall SwitcherTip::_tip_TaskViewShowTest::evaluate(SwitcherTip::_tip_TaskViewShowTest *this, const char *a2)
{
  tip2::details *v2; // rax
  __int16 v3; // r10
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  tip2::details *v7; // rax
  __int64 v8; // r8
  char v9; // r10
  const char *v10; // rdx
  __int64 v11; // rcx
  char v12; // r10
  tip2::details *v13; // rax
  __int64 v14; // r9
  __int64 v15; // rcx
  char v16; // r10
  __int64 v17; // rcx
  __int64 v18; // r10
  __int64 v19; // rax

  if ( *((_BYTE *)this + 16) )
  {
    v2 = tip2::details::reason_string((tip2::details *)"reason::shown", a2);
    v5 = *(_QWORD *)(v4 + 8);
    if ( *(_BYTE *)(v5 + 152) == (_BYTE)v3 )
    {
      *(_QWORD *)(v5 + 160) = v2;
      *(_BYTE *)(v5 + 152) = v3 + 1;
      *(_WORD *)(v5 + 154) = v3 + 1;
    }
  }
  else
  {
    v6 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(v6 + 80) )
    {
      if ( !*(_BYTE *)(v6 + 152) )
      {
        *(_BYTE *)(v6 + 152) = 3;
        *(_WORD *)(v6 + 154) = 0x4000;
        *(_QWORD *)(v6 + 160) = 0LL;
      }
    }
    else if ( *((_BYTE *)this + 17) )
    {
      v7 = tip2::details::reason_string((tip2::details *)"reason::cancelled", a2);
      if ( *(_BYTE *)(v8 + 152) == v9 )
      {
        *(_BYTE *)(v8 + 152) = 2;
        *(_WORD *)(v8 + 154) = 3;
        *(_QWORD *)(v8 + 160) = v7;
      }
    }
    else if ( !tip2::test_data_base<_tip_CopilotHardwareKeyInvokedTest_id>::__fail_if_complete_not_called((__int64)this) )
    {
      if ( *(_BYTE *)(v11 + 16) == v12 )
      {
        v13 = tip2::details::reason_string((tip2::details *)"reason::not_shown", v10);
        v15 = *(_QWORD *)(v14 + 8);
        if ( *(_BYTE *)(v15 + 152) == v16 )
        {
          *(_BYTE *)(v15 + 152) = 3;
          *(_WORD *)(v15 + 154) = 2;
          *(_QWORD *)(v15 + 160) = v13;
        }
      }
      else if ( !tip2::test_data_base<_tip_CopilotHardwareKeyInvokedTest_id>::__fail_if_complete_not_called(v11) )
      {
        v19 = *(_QWORD *)(v17 + 8);
        if ( *(_BYTE *)(v19 + 152) == (_BYTE)v18 )
        {
          *(_BYTE *)(v19 + 152) = 1;
          *(_WORD *)(v19 + 154) = 0x8000;
          *(_QWORD *)(v19 + 160) = v18;
        }
      }
    }
  }
}
