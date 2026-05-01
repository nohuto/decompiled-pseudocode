/*
 * XREFs of ??$load_nothrow@HV?$allocator@H@std@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1805A1988
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAJ@2@V?$nvp@AEA_K@2@V42@V?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_K@1@2$$QEAV?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805A444C (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAJ@2@V-$nvp@AEA_K@2@V42@V-$nvp@AEAV-$vector@HV-$allocator.c)
 * Callees:
 *     ??$?RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z @ 0x18021954C (--$-RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??$?RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x1804577F8 (--$-RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@HV?$allocator@H@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1805A0954 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@HV-$allocator@H@std@@@std@@AEAAX_KAEBU_Val.c)
 */

__int64 __fastcall tson::load_nothrow<int,std::allocator<int>>(tson::input_archive *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r14
  void *v6; // rdx
  unsigned __int64 v7; // rcx
  size_t v8; // rbx
  _DWORD *v9; // r14
  _DWORD *i; // rbx
  unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  result = tson::input_archive::operator()<tson::size_tag &>((__int64)a1, &v12);
  try
  {
    v5 = *(_QWORD *)(a2 + 8);
    v6 = *(void **)a2;
    v7 = (v5 - *(_QWORD *)a2) >> 2;
    if ( v12 >= v7 )
    {
      if ( v12 <= v7 )
        goto LABEL_9;
      if ( v12 > (__int64)(*(_QWORD *)(a2 + 16) - (_QWORD)v6) >> 2 )
      {
        result = std::vector<int>::_Resize_reallocate<std::_Value_init_tag>((void **)a2, v12);
        goto LABEL_9;
      }
      v8 = 4 * (v12 - v7);
      memset_0(*(void **)(a2 + 8), 0, v8);
      result = v8 + v5;
    }
    else
    {
      result = (__int64)v6 + 4 * v12;
    }
    *(_QWORD *)(a2 + 8) = result;
LABEL_9:
    v9 = *(_DWORD **)(a2 + 8);
    for ( i = *(_DWORD **)a2; i != v9; ++i )
      result = (__int64)tson::input_archive::operator()<int &>(a1, i);
  }
  catch ( ... )
  {
    result = (__int64)a1;
    if ( *((int *)a1 + 2) >= 0 )
      *((_DWORD *)a1 + 2) = -2147024882;
  }
  return result;
}
