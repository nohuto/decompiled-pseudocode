/*
 * XREFs of ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x18028C144
 * Callers:
 *     ?evaluate_and_report@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x180331510 (-evaluate_and_report@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 *     ?evaluate@stored_flag_requirements@details@tip2@@QEAA_NAEBVtest_state@3@@Z @ 0x1803BC844 (-evaluate@stored_flag_requirements@details@tip2@@QEAA_NAEBVtest_state@3@@Z.c)
 *     ?evaluate_and_report@?$shared_data@$00$00$00@details@tip2@@AEAAX_J@Z @ 0x1803BCA58 (-evaluate_and_report@-$shared_data@$00$00$00@details@tip2@@AEAAX_J@Z.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x1803BCCC4 (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAX_J@Z @ 0x18069A814 (-evaluate_and_report@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAX_J@Z.c)
 * Callees:
 *     ?find_flags_match@details@tip2@@YAPEBUtest_requirement@2@AEBVtest_state@2@PEBU32@_N@Z @ 0x18028C1E8 (-find_flags_match@details@tip2@@YAPEBUtest_requirement@2@AEBVtest_state@2@PEBU32@_N@Z.c)
 */

char __fastcall tip2::details::evaluate_flags(
        tip2::details *this,
        const struct tip2::test_state *a2,
        const struct tip2::test_requirement *a3,
        const struct tip2::test_requirement *a4)
{
  const struct tip2::test_state *v4; // r11
  const struct tip2::test_state *v5; // rbx
  const struct tip2::test_requirement *flags_match; // rax
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // rax

  v4 = a4;
  v5 = a3;
  if ( a2 && (flags_match = tip2::details::find_flags_match(this, a2, 0LL, (bool)a4)) != 0LL
    || v5 && (LOBYTE(a3) = 1, (flags_match = tip2::details::find_flags_match(this, v5, a3, (bool)a4)) != 0LL) )
  {
    v7 = *((_QWORD *)flags_match + 1);
    if ( !*((_BYTE *)this + 152) )
    {
      *((_WORD *)this + 77) = *(_WORD *)flags_match;
      *((_QWORD *)this + 20) = v7;
LABEL_11:
      *((_BYTE *)this + 152) = 3;
    }
    return 0;
  }
  if ( v4 )
  {
    LOBYTE(a3) = 1;
    if ( !tip2::details::find_flags_match(this, v4, a3, (bool)a4) )
    {
      v9 = *(_QWORD *)(v8 + 8);
      if ( !*((_BYTE *)this + 152) )
      {
        *((_WORD *)this + 77) = *(_WORD *)v8;
        *((_QWORD *)this + 20) = v9;
        goto LABEL_11;
      }
      return 0;
    }
  }
  return 1;
}
