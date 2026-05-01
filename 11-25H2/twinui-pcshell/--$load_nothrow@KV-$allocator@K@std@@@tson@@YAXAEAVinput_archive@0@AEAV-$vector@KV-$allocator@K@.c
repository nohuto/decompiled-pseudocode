/*
 * XREFs of ??$load_nothrow@KV?$allocator@K@std@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector@KV?$allocator@K@std@@@std@@@Z @ 0x1805DB27C
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@2@V?$nvp@AEAJ@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@$$QEAV?$nvp@AEAJ@1@0@Z @ 0x1805DB4CC (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$vector@KV-$allocator@K@std@@@std@@@2@V-$nvp@AEAJ@2@V1.c)
 * Callees:
 *     ??$?RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z @ 0x18021954C (--$-RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??$?RAEAK@input_archive@tson@@QEAAAEAV01@AEAK@Z @ 0x180328B30 (--$-RAEAK@input_archive@tson@@QEAAAEAV01@AEAK@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@KV?$allocator@K@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1805DAB74 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@KV-$allocator@K@std@@@std@@AEAAX_KAEBU_Val.c)
 */

__int64 __fastcall tson::load_nothrow<unsigned long,std::allocator<unsigned long>>(tson::input_archive *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r14
  const void *v6; // rdx
  unsigned __int64 v7; // rcx
  size_t v8; // rbx
  _DWORD *v9; // r14
  _DWORD *i; // rbx
  unsigned __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  result = tson::input_archive::operator()<tson::size_tag &>((__int64)a1, &v11);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(const void **)a2;
  v7 = (v5 - *(_QWORD *)a2) >> 2;
  if ( v11 < v7 )
  {
    result = (__int64)v6 + 4 * v11;
LABEL_7:
    *(_QWORD *)(a2 + 8) = result;
    goto LABEL_8;
  }
  if ( v11 > v7 )
  {
    if ( v11 <= (__int64)(*(_QWORD *)(a2 + 16) - (_QWORD)v6) >> 2 )
    {
      v8 = 4 * (v11 - v7);
      memset_0(*(void **)(a2 + 8), 0, v8);
      result = v8 + v5;
      goto LABEL_7;
    }
    result = std::vector<unsigned long>::_Resize_reallocate<std::_Value_init_tag>((const void **)a2, v11);
  }
LABEL_8:
  v9 = *(_DWORD **)(a2 + 8);
  for ( i = *(_DWORD **)a2; i != v9; ++i )
    result = (__int64)tson::input_archive::operator()<unsigned long &>(a1, i);
  return result;
}
