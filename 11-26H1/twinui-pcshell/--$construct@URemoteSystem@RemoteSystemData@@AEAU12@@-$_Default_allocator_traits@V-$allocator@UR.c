/*
 * XREFs of ??$construct@URemoteSystem@RemoteSystemData@@AEAU12@@?$_Default_allocator_traits@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@SAXAEAV?$allocator@URemoteSystem@RemoteSystemData@@@1@QEAURemoteSystem@RemoteSystemData@@AEAU34@@Z @ 0x180645D4C
 * Callers:
 *     ??$_Emplace_reallocate@AEAURemoteSystem@RemoteSystemData@@@?$vector@URemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@AEAAPEAURemoteSystem@RemoteSystemData@@QEAU23@AEAU23@@Z @ 0x180644B14 (--$_Emplace_reallocate@AEAURemoteSystem@RemoteSystemData@@@-$vector@URemoteSystem@RemoteSystemDa.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x180650708 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<RemoteSystemData::RemoteSystem>>::construct<RemoteSystemData::RemoteSystem,RemoteSystemData::RemoteSystem &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  winrt::hstring::hstring((winrt::hstring *)a2, (const struct winrt::hstring *)a3, a3);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a3 + 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a3 + 16);
  result = *(unsigned __int16 *)(a3 + 24);
  *(_WORD *)(a2 + 24) = result;
  return result;
}
