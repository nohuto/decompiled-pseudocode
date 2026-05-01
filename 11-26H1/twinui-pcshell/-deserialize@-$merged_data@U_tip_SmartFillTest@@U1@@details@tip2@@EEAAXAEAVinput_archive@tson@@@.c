/*
 * XREFs of ?deserialize@?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805AD7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall tip2::details::merged_data<_tip_SmartFillTest,_tip_SmartFillTest>::deserialize(__int64 a1, __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::process<_tip_SmartFillTest &>((tson::input_archive *)a2, (a1 + 256) & -(__int64)(a1 != 0));
}
