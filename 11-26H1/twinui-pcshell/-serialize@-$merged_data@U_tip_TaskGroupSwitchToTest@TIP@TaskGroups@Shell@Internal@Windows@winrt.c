/*
 * XREFs of ?serialize@?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x18058A4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DF188 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800DF434 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800E00F0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800E0448 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  _BYTE *v3; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx

  v3 = (char *)a2 + 8;
  if ( (a3 & 2) != 0 )
  {
    *v3 = 7;
    *(_QWORD *)a2 = "metrics";
    tson::output_archive::startNode(a2);
    *(_DWORD *)(a1 + 184) = 0;
    tson::output_archive::finishNode(a2);
  }
  if ( (a3 & 1) != 0 )
  {
    *v3 = 4;
    *(_QWORD *)a2 = "test";
    tson::output_archive::startNode(a2);
    *v3 = 7;
    *(_QWORD *)a2 = "groupId";
    v8 = a1 + 272;
    if ( !a1 )
      v8 = 16LL;
    tson::save_nothrow((__int64)a2, (const void **)v8, v7);
    *v3 = 15;
    *(_QWORD *)a2 = "switcherSurface";
    v10 = a1 + 304;
    if ( !a1 )
      v10 = 48LL;
    tson::output_archive::saveValue(a2, *(unsigned int *)v10, v9);
    tson::output_archive::finishNode(a2);
  }
}
