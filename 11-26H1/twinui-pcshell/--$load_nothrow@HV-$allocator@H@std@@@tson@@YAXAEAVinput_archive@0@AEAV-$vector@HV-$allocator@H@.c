/*
 * XREFs of ??$load_nothrow@HV?$allocator@H@std@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1805C5C5C
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAJ@2@V?$nvp@AEA_K@2@V42@V?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_K@1@2$$QEAV?$nvp@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805C83CC (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAJ@2@V-$nvp@AEA_K@2@V42@V-$nvp@AEAV-$vector@HV-$allocator.c)
 * Callees:
 *     ??$?RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z @ 0x18020A8D4 (--$-RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$?RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x180463EC4 (--$-RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@HV?$allocator@H@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1805C4B98 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@HV-$allocator@H@std@@@std@@AEAAX_KAEBU_Val.c)
 */

void __fastcall tson::load_nothrow<int,std::allocator<int>>(tson::input_archive *a1, const void **a2)
{
  char *v4; // r8
  char *v5; // rsi
  unsigned __int64 v6; // rdx
  size_t v7; // rbx
  char *v8; // rsi
  char *i; // rbx
  unsigned __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  tson::input_archive::operator()<tson::size_tag &>((__int64)a1, &v11);
  try
  {
    v4 = (char *)*a2;
    v5 = (char *)a2[1];
    v6 = (v5 - (_BYTE *)*a2) >> 2;
    if ( v11 >= v6 )
    {
      if ( v11 > v6 )
      {
        if ( v11 <= ((_BYTE *)a2[2] - v4) >> 2 )
        {
          v7 = 4 * (v11 - v6);
          memset_0((void *)a2[1], 0, v7);
          a2[1] = &v5[v7];
        }
        else
        {
          std::vector<int>::_Resize_reallocate<std::_Value_init_tag>(a2, v11);
        }
      }
    }
    else
    {
      a2[1] = &v4[4 * v11];
    }
    v8 = (char *)a2[1];
    for ( i = (char *)*a2; i != v8; i += 4 )
      tson::input_archive::operator()<int &>(a1, i);
  }
  catch ( ... )
  {
    if ( *((int *)a1 + 2) >= 0 )
      *((_DWORD *)a1 + 2) = -2147024882;
  }
}
