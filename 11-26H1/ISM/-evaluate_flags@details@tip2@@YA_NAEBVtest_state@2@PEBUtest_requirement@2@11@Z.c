/*
 * XREFs of ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x1800A3C44
 * Callers:
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x1800A3A10 (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAX_J@Z @ 0x18010A5B0 (-evaluate_and_report@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAX_J@Z.c)
 * Callees:
 *     ?find_flags_match@details@tip2@@YAPEBUtest_requirement@2@AEBVtest_state@2@PEBU32@_N@Z @ 0x1800A3D04 (-find_flags_match@details@tip2@@YAPEBUtest_requirement@2@AEBVtest_state@2@PEBU32@_N@Z.c)
 */

char __fastcall tip2::details::evaluate_flags(
        tip2::details *this,
        const struct tip2::test_state *a2,
        const struct tip2::test_requirement *a3,
        const struct tip2::test_requirement *a4)
{
  const struct tip2::test_state *v5; // rdi
  tip2::details *v6; // r11
  const struct tip2::test_requirement *flags_match; // rax
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rax

  v5 = a3;
  v6 = this;
  if ( a2 )
  {
    flags_match = tip2::details::find_flags_match(this, a2, 0LL, (bool)a4);
    if ( flags_match )
    {
      v8 = *((_BYTE *)v6 + 152) == (unsigned __int8)a3;
      goto LABEL_4;
    }
  }
  if ( v5 )
  {
    LOBYTE(a3) = 1;
    flags_match = tip2::details::find_flags_match(v6, v5, a3, (bool)a4);
    if ( flags_match )
    {
      v8 = *((_BYTE *)v6 + 152) == 0;
LABEL_4:
      v9 = *((_QWORD *)flags_match + 1);
      if ( v8 )
      {
        *((_WORD *)v6 + 77) = *(_WORD *)flags_match;
        *((_QWORD *)v6 + 20) = v9;
LABEL_13:
        *((_BYTE *)v6 + 152) = 3;
        return 0;
      }
      return 0;
    }
  }
  if ( a4 )
  {
    LOBYTE(a3) = 1;
    if ( !tip2::details::find_flags_match(v6, a4, a3, (bool)a4) )
    {
      v10 = *((_QWORD *)a4 + 1);
      if ( !*((_BYTE *)v6 + 152) )
      {
        *((_WORD *)v6 + 77) = *(_WORD *)a4;
        *((_QWORD *)v6 + 20) = v10;
        goto LABEL_13;
      }
      return 0;
    }
  }
  return 1;
}
