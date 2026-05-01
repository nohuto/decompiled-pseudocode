/*
 * XREFs of ??$?RV?$nvp@_N@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@_N@1@@Z @ 0x180325840
 * Callers:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x180333024 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ??$process@V?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$nvp@AEA_N@2@V42@V42@V?$nvp@AEAJ@2@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEA_N@1@22$$QEAV?$nvp@AEAJ@1@1@Z @ 0x1805C6AE4 (--$process@V-$nvp@AEAV-$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std.c)
 * Callees:
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x1800DF860 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 */

__int64 __fastcall tson::output_archive::operator()<tson::nvp<bool>>(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 8) = v2;
  tson::output_archive::operator()<bool &>(a1, (char *)(a2 + 9));
  return a1;
}
