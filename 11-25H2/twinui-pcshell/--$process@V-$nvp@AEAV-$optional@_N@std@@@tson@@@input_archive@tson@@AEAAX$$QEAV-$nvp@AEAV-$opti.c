/*
 * XREFs of ??$process@V?$nvp@AEAV?$optional@_N@std@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@@Z @ 0x1805A2C08
 * Callers:
 *     ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V?$nvp@AEAV?$optional@_N@std@@@2@V32@V32@V?$nvp@AEA_N@2@V32@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@11$$QEAV?$nvp@AEA_N@1@111@Z @ 0x1805A29C8 (--$process@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_ea_1805A29C8.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V?$nvp@AEAV?$optional@_N@std@@@2@V?$nvp@AEA_N@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x1805A2AA0 (--$process@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_ea_1805A2AA0.c)
 *     ??$process@V?$nvp@AEAV?$optional@_N@std@@@tson@@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@00@Z @ 0x1805A2CB4 (--$process@V-$nvp@AEAV-$optional@_N@std@@@tson@@V12@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@AE.c)
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1801852A0 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$load_nothrow@_N@tson@@YAXAEAVinput_archive@0@AEAV?$optional@_N@std@@@Z @ 0x1805A1AD4 (--$load_nothrow@_N@tson@@YAXAEAVinput_archive@0@AEAV-$optional@_N@std@@@Z.c)
 */

void __fastcall tson::input_archive::process<tson::nvp<std::optional<bool> &>>(tson::input_archive *this, __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx

  v2 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v2;
  v4 = *(_QWORD *)(a2 + 16);
  tson::input_archive::startNode(this);
  tson::load_nothrow<bool>(this, v4);
  tson::input_archive::finishNode(this);
}
