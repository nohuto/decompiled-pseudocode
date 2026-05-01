/*
 * XREFs of ?serialize@?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1806374F0
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800E00F0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800E0448 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$serialize_helper@Voutput_archive@tson@@@_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@AEAAXAEAVoutput_archive@tson@@@Z @ 0x180622080 (--$serialize_helper@Voutput_archive@tson@@@_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@AE.c)
 */

void __fastcall tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  __int64 v3; // rdi

  v3 = a1 + 256;
  if ( (a3 & 2) != 0 )
  {
    *((_BYTE *)a2 + 8) = 7;
    *(_QWORD *)a2 = "metrics";
    tson::output_archive::startNode(a2);
    _tip_CopilotHardwareKeyExtendedSignalsInvokedTest::serialize_helper<tson::output_archive>(
      v3 & -(__int64)(a1 != 0),
      a2);
    *(_DWORD *)(a1 + 184) = 0;
    tson::output_archive::finishNode(a2);
  }
  if ( (a3 & 1) != 0 )
  {
    *((_BYTE *)a2 + 8) = 4;
    *(_QWORD *)a2 = "test";
    tson::output_archive::startNode(a2);
    _tip_CopilotHardwareKeyExtendedSignalsInvokedTest::serialize_helper<tson::output_archive>(
      v3 & -(__int64)(a1 != 0),
      a2);
    tson::output_archive::finishNode(a2);
  }
}
