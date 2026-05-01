/*
 * XREFs of ??$load_nothrow@KV?$allocator@K@std@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector@KV?$allocator@K@std@@@std@@@Z @ 0x1805FFD1C
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@2@V?$nvp@AEAJ@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@$$QEAV?$nvp@AEAJ@1@0@Z @ 0x1805FFF84 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$vector@KV-$allocator@K@std@@@std@@@2@V-$nvp@AEAJ@2@V1.c)
 * Callees:
 *     ??$?RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z @ 0x18020A8D4 (--$-RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$?RAEAK@input_archive@tson@@QEAAAEAV01@AEAK@Z @ 0x1803253E8 (--$-RAEAK@input_archive@tson@@QEAAAEAV01@AEAK@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@KV?$allocator@K@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1805FF66C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@KV-$allocator@K@std@@@std@@AEAAX_KAEBU_Val.c)
 */

void __fastcall tson::load_nothrow<unsigned long,std::allocator<unsigned long>>(tson::input_archive *a1, void **a2)
{
  char *v4; // r8
  char *v5; // rsi
  unsigned __int64 v6; // rdx
  size_t v7; // rbx
  char *v8; // rsi
  char *i; // rbx
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  tson::input_archive::operator()<tson::size_tag &>((__int64)a1, &v10);
  v4 = (char *)*a2;
  v5 = (char *)a2[1];
  v6 = (v5 - (_BYTE *)*a2) >> 2;
  if ( v10 >= v6 )
  {
    if ( v10 > v6 )
    {
      if ( v10 <= ((_BYTE *)a2[2] - v4) >> 2 )
      {
        v7 = 4 * (v10 - v6);
        memset_0(a2[1], 0, v7);
        a2[1] = &v5[v7];
      }
      else
      {
        std::vector<unsigned long>::_Resize_reallocate<std::_Value_init_tag>(a2, v10);
      }
    }
  }
  else
  {
    a2[1] = &v4[4 * v10];
  }
  v8 = (char *)a2[1];
  for ( i = (char *)*a2; i != v8; i += 4 )
    tson::input_archive::operator()<unsigned long &>(a1, i);
}
