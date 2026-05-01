/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$nvp@AEAW4InvokeType@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAW4InvokeType@@@1@@Z @ 0x1806195CC
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$nvp@AEAW4InvokeType@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAW4InvokeType@@@1@@Z @ 0x180619518 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits_ea_180619518.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1801770A8 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1801771BC (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<enum InvokeType &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3)
{
  char v3; // r10
  bool *v6; // rsi
  __int64 v7; // rdx
  char *v8; // rax
  char v9; // cl
  bool v10; // al
  __int64 v11; // rax
  bool *v12; // rdi
  __int64 v13; // rdx
  char *v14; // rax
  char v15; // cl
  bool v16; // al

  v3 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v3;
  v6 = *(bool **)(a2 + 16);
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker(this, 10, -2147023267);
    v7 = *(_QWORD *)this;
    v8 = *(char **)(*(_QWORD *)this + 8LL);
    if ( (unsigned __int64)v8 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    {
      *(_BYTE *)(v7 + 24) = 1;
      goto LABEL_7;
    }
    v9 = *v8;
    *(_QWORD *)(v7 + 8) = v8 + 1;
    v10 = v9 != 0;
  }
  else
  {
    v10 = 0;
  }
  *v6 = v10;
LABEL_7:
  v11 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v11;
  v12 = (bool *)a3[2];
  if ( !tson::input_archive::search(this) )
  {
    v16 = 0;
    goto LABEL_12;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v13 = *(_QWORD *)this;
  v14 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v14 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v15 = *v14;
    *(_QWORD *)(v13 + 8) = v14 + 1;
    v16 = v15 != 0;
LABEL_12:
    *v12 = v16;
    return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<enum InvokeType &>>(this);
  }
  *(_BYTE *)(v13 + 24) = 1;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<enum InvokeType &>>(this);
}
