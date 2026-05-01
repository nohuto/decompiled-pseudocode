/*
 * XREFs of ??$process@V?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@@Z @ 0x180689120
 * Callers:
 *     ??$?RV?$nvp@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@1@@Z @ 0x18068A460 (--$-RV-$nvp@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Wind.c)
 *     ?serialize@?$merged_data@U_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1806940C0 (-serialize@-$merged_data@U_tip_TaskGroupMoveToVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@W.c)
 * Callees:
 *     ??$write_string@Ustring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Ustring_tag@1@@Z @ 0x1800DEC24 (--$write_string@Ustring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Ustring_.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<std::wstring &>>(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int128 v3; // rax
  __int128 v5; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 8) = v2;
  *(_QWORD *)&v3 = *(_QWORD *)(a2 + 16);
  *((_QWORD *)&v3 + 1) = *(_QWORD *)(v3 + 16);
  if ( *((_QWORD *)&v3 + 1) )
  {
    if ( *(_QWORD *)(v3 + 24) > 7uLL )
      *(_QWORD *)&v3 = *(_QWORD *)v3;
  }
  else
  {
    *(_QWORD *)&v3 = 0LL;
  }
  v6 = 0LL;
  v5 = v3;
  return tson::output_archive::write_string<tson::string_tag>(a1, SBYTE8(v3), (const void **)&v5);
}
