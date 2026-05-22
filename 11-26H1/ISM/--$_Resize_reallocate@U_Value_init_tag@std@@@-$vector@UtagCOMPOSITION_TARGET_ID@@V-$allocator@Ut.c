/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UtagCOMPOSITION_TARGET_ID@@V?$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180144334
 * Callers:
 *     ?GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z @ 0x1801452E0 (-GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009891C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@@std@@YAPEAUtagCOMPOSITION_TARGET_ID@@PEAU1@_KAEAV?$allocator@UtagCOMPOSITION_TARGET_ID@@@0@@Z @ 0x180144700 (--$_Uninitialized_value_construct_n@V-$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@@std@@YAPEAUta.c)
 *     ??1_Reallocation_guard@?$vector@UtagCOMPOSITION_TARGET_ID@@V?$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@@std@@QEAA@XZ @ 0x180144C68 (--1_Reallocation_guard@-$vector@UtagCOMPOSITION_TARGET_ID@@V-$allocator@UtagCOMPOSITION_TARGET_I.c)
 *     ?_Change_array@?$vector@UtagCOMPOSITION_TARGET_ID@@V?$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@@std@@AEAAXQEAUtagCOMPOSITION_TARGET_ID@@_K1@Z @ 0x180146C64 (-_Change_array@-$vector@UtagCOMPOSITION_TARGET_ID@@V-$allocator@UtagCOMPOSITION_TARGET_ID@@@std@.c)
 *     memmove_0 @ 0x1801D3DC0 (memmove_0.c)
 */

__int64 __fastcall std::vector<tagCOMPOSITION_TARGET_ID>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 v6; // rbp
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  char *v9; // rax
  void *v10; // rbx
  __int64 v11; // rax
  size_t v12; // r8
  const void *v13; // rdx
  _QWORD v15[3]; // [rsp+20h] [rbp-38h] BYREF
  char *v16; // [rsp+38h] [rbp-20h]
  __int64 v17; // [rsp+40h] [rbp-18h]

  if ( a2 > 0x924924924924924LL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v4 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v5 = 0x6DB6DB6DB6DB6DB7LL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2);
  v6 = 0x6DB6DB6DB6DB6DB7LL * (v4 >> 2);
  v7 = v5 >> 1;
  if ( v5 <= 0x924924924924924LL - (v5 >> 1) )
  {
    v8 = v7 + v5;
    if ( v7 + v5 >= a2 )
    {
      if ( v8 > 0x924924924924924LL )
        std::_Throw_bad_array_new_length();
    }
    else
    {
      v8 = a2;
    }
  }
  else
  {
    v8 = 0x924924924924924LL;
  }
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(28 * v8);
  v15[0] = a1;
  v15[2] = v8;
  v16 = &v9[28 * v6];
  v10 = v9;
  v11 = std::_Uninitialized_value_construct_n<std::allocator<tagCOMPOSITION_TARGET_ID>>(v16, a2 - v6);
  v12 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v13 = *a1;
  v17 = v11;
  memmove_0(v10, v13, v12);
  v15[1] = 0LL;
  std::vector<tagCOMPOSITION_TARGET_ID>::_Change_array(a1, v10, a2, v8);
  return std::vector<tagCOMPOSITION_TARGET_ID>::_Reallocation_guard::~_Reallocation_guard(v15);
}
