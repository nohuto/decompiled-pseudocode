/*
 * XREFs of ?evaluate@test_data_dynamic@tip2@@IEAAXXZ @ 0x1803BC97C
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@EEAAXXZ @ 0x1803BBFC0 (-evaluate@-$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@ti.c)
 * Callees:
 *     ?evaluate@stored_flag_requirements@details@tip2@@QEAA_NAEBVtest_state@3@@Z @ 0x1803BC844 (-evaluate@stored_flag_requirements@details@tip2@@QEAA_NAEBVtest_state@3@@Z.c)
 *     ?evaluate@test_data_basic@tip2@@IEAAXXZ @ 0x1803BC930 (-evaluate@test_data_basic@tip2@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall tip2::test_data_dynamic::evaluate(tip2::test_data_dynamic *this)
{
  __int64 v1; // rdx
  int v3; // edi
  int v4; // eax
  int v5; // edi
  void (__fastcall ***v6)(_QWORD, __int64, _QWORD *); // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)this;
  v3 = *(_DWORD *)(*(_QWORD *)this + 12LL);
  v4 = v3 & 0x60000;
  v5 = v3 & 0x10000;
  if ( !v5 && v4 != 393216 )
  {
    if ( !*(_BYTE *)(v1 + 152) )
    {
      *(_BYTE *)(v1 + 152) = 3;
      *(_WORD *)(v1 + 154) = 16421;
      *(_QWORD *)(v1 + 160) = 0LL;
    }
    return;
  }
  if ( !tip2::details::stored_flag_requirements::evaluate(
          (tip2::test_data_dynamic *)((char *)this + 8),
          (const struct tip2::test_state *)v1) )
    return;
  if ( !v5 )
  {
LABEL_9:
    tip2::test_data_basic::evaluate(this);
    return;
  }
  v6 = (void (__fastcall ***)(_QWORD, __int64, _QWORD *))*((_QWORD *)this + 11);
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 10);
    v9[0] = *(_QWORD *)this;
    v9[1] = (char *)this + 96;
    (**v6)(v6, v7, v9);
    goto LABEL_9;
  }
  if ( !*((_BYTE *)this + 184) )
    goto LABEL_9;
  v8 = *(_QWORD *)this;
  if ( !*(_BYTE *)(*(_QWORD *)this + 152LL) )
  {
    *(_BYTE *)(v8 + 152) = 3;
    *(_WORD *)(v8 + 154) = 16418;
    *(_QWORD *)(v8 + 160) = 0LL;
  }
}
