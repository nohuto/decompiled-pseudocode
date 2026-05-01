/*
 * XREFs of ??$serialize_metrics@Voutput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAIAEAVoutput_archive@tson@@@Z @ 0x1805E2644
 * Callers:
 *     ?serialize@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1805ED1D0 (-serialize@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@EEAAXAEA.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DF434 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$?RV?$nvp@AEAK@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAK@1@@Z @ 0x180325608 (--$-RV-$nvp@AEAK@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAK@1@@Z.c)
 */

__int64 __fastcall PinManagerTipTests::_tip_PinManagerPinTest::serialize_metrics<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2,
        __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // r8
  const char *v8; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  *((_BYTE *)a2 + 8) = 7;
  *(_QWORD *)a2 = "apiType";
  tson::output_archive::saveValue(a2, *(unsigned int *)(a1 + 16), a3);
  *((_BYTE *)a2 + 8) = 11;
  *(_QWORD *)a2 = "consentType";
  tson::output_archive::saveValue(a2, *(unsigned int *)(a1 + 1060), v5);
  v9 = 6;
  v8 = "caller";
  v10 = a1 + 1068;
  tson::output_archive::operator()<tson::nvp<unsigned long &>>(a2, (__int64)&v8, v6);
  return *(_DWORD *)(a1 + 16) & 0xF | (16
                                     * (*(_DWORD *)(a1 + 1060) & 7 | (8 * (unsigned int)*(unsigned __int8 *)(a1 + 1068))));
}
