/*
 * XREFs of ?serialize@?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180493B40
 * Callers:
 *     <none>
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXE@Z @ 0x1800DED60 (-saveValue@output_archive@tson@@QEAAXE@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800E00F0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800E0448 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1804911F4 (--$serialize@Voutput_archive@tson@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Co.c)
 */

void __fastcall tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  __int64 v3; // rbp
  _BYTE *v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r8

  v3 = a1 + 256;
  v5 = (char *)a2 + 8;
  if ( (a3 & 2) != 0 )
  {
    *v5 = 7;
    *(_QWORD *)a2 = "metrics";
    tson::output_archive::startNode(a2);
    *v5 = 12;
    *(_QWORD *)a2 = "switcherType";
    LOBYTE(v8) = *(_BYTE *)((v3 & -(__int64)(a1 != 0)) + 0x14);
    tson::output_archive::saveValue(a2, v8, v9);
    *(_DWORD *)(a1 + 184) = *(unsigned __int8 *)((v3 & -(__int64)(a1 != 0)) + 0x14);
    tson::output_archive::finishNode(a2);
  }
  if ( (a3 & 1) != 0 )
  {
    *v5 = 4;
    *(_QWORD *)a2 = "test";
    tson::output_archive::startNode(a2);
    WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest::serialize<tson::output_archive>(
      v3 & -(__int64)(a1 != 0),
      a2,
      v10);
    tson::output_archive::finishNode(a2);
  }
}
