/*
 * XREFs of ??$process@V?$nvp@AEAV?$optional@_N@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@@Z @ 0x1805A2C50
 * Callers:
 *     ??$process@V?$nvp@AEAG@tson@@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$nvp@AEAV?$optional@_N@std@@@2@V?$nvp@AEA_N@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@0000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x1805A1FC4 (--$process@V-$nvp@AEAG@tson@@V12@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??$process@V?$nvp@AEAG@tson@@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAV?$optional@_N@std@@@2@V42@V42@V?$nvp@AEA_N@2@V42@V42@V42@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@0000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@22$$QEAV?$nvp@AEA_N@1@222@Z @ 0x1805A2198 (--$process@V-$nvp@AEAG@tson@@V12@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_tra_ea_1805A2198.c)
 *     ??$process@V?$nvp@AEAV?$optional@_N@std@@@tson@@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@_N@std@@@1@00@Z @ 0x1805A2CFC (--$process@V-$nvp@AEAV-$optional@_N@std@@@tson@@V12@V12@@output_archive@tson@@AEAAX$$QEAV-$nvp@A.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800DD26C (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x1800DD6C4 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DDF6C (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?value@?$optional@_N@std@@QEGAAAEA_NXZ @ 0x1802CF7AC (-value@-$optional@_N@std@@QEGAAAEA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall tson::output_archive::process<tson::nvp<std::optional<bool> &>>(tson::output_archive *this, __int64 a2)
{
  char v3; // r8
  __int64 v4; // rdi
  char *v5; // rax

  v3 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v3;
  v4 = *(_QWORD *)(a2 + 16);
  tson::output_archive::startNode(this);
  tson::output_archive::saveValue(this, *(_BYTE *)(v4 + 1));
  if ( *(_BYTE *)(v4 + 1) )
  {
    v5 = (char *)std::optional<bool>::value(v4);
    tson::output_archive::operator()<bool &>((__int64)this, v5);
  }
  tson::output_archive::finishNode(this);
}
