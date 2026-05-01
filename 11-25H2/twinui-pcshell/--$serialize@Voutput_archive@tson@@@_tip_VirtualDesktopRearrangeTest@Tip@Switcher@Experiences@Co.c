/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180480864
 * Callers:
 *     ?serialize@?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180483070 (-serialize@-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableSh.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDAAC (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DE4B8 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1800DE920 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 */

void __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  const char *v6; // [rsp+20h] [rbp-29h] BYREF
  char v7; // [rsp+28h] [rbp-21h]
  __int64 v8; // [rsp+30h] [rbp-19h]
  const char *v9; // [rsp+38h] [rbp-11h] BYREF
  char v10; // [rsp+40h] [rbp-9h]
  __int64 v11; // [rsp+48h] [rbp-1h]
  const char *v12; // [rsp+50h] [rbp+7h] BYREF
  char v13; // [rsp+58h] [rbp+Fh]
  __int64 v14; // [rsp+60h] [rbp+17h]
  const char *v15; // [rsp+68h] [rbp+1Fh] BYREF
  char v16; // [rsp+70h] [rbp+27h]
  __int64 v17; // [rsp+78h] [rbp+2Fh]
  const char *v18; // [rsp+80h] [rbp+37h] BYREF
  char v19; // [rsp+88h] [rbp+3Fh]
  __int64 v20; // [rsp+90h] [rbp+47h]

  *((_BYTE *)a2 + 8) = 16;
  v18 = "areModificationsSuspended";
  v19 = 25;
  v20 = a1 + 28;
  v16 = 18;
  v15 = "isUIAlreadyUpdated";
  v17 = a1 + 31;
  v12 = "didVirtualDesktopDisappear";
  v14 = a1 + 30;
  v9 = "isRequestingSameIndex";
  v11 = a1 + 29;
  v6 = "destinationIndex";
  v8 = a1 + 24;
  *(_QWORD *)a2 = "activationMethod";
  v5 = *(unsigned int *)(a1 + 16);
  v13 = 26;
  v10 = 21;
  v7 = 16;
  tson::output_archive::saveValue(a2, v5, a3);
  tson::output_archive::process<tson::nvp<unsigned int &>>((__int64)a2, (__int64 *)&v6);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v9);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v12);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v15);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v18);
  *((_BYTE *)a2 + 8) = 12;
  *(_QWORD *)a2 = "switcherType";
  tson::output_archive::saveValue(a2, *(_BYTE *)(a1 + 20));
}
