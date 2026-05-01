/*
 * XREFs of ??1?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@QEAA@XZ @ 0x18018E854
 * Callers:
 *     ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180111070 (-GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ??1CQueryKnownGameList@@UEAA@XZ @ 0x18018E7AC (--1CQueryKnownGameList@@UEAA@XZ.c)
 *     ?IsXusbDevicePresent@GamingOverlayExperienceManager@@AEAA_NUwrite_lock_required@wil@@@Z @ 0x180235C5C (-IsXusbDevicePresent@GamingOverlayExperienceManager@@AEAA_NUwrite_lock_required@wil@@@Z.c)
 *     ?TryGetValue@InProcPropertyStore@Util@@UEAA?AUhstring@winrt@@_KAEBU34@@Z @ 0x1806514B0 (-TryGetValue@InProcPropertyStore@Util@@UEAA-AUhstring@winrt@@_KAEBU34@@Z.c)
 *     ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18067C520 (-GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18067C934 (-GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18067CC14 (-GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     _CQueryKnownGameList::GetProcessWorkingDirectoryByPID_::_1_::dtor$2 @ 0x1806D4899 (_CQueryKnownGameList--GetProcessWorkingDirectoryByPID_--_1_--dtor$2.c)
 *     _Util::InProcPropertyStore::TryGetValue_::_1_::dtor$1 @ 0x180703F4B (_Util--InProcPropertyStore--TryGetValue_--_1_--dtor$1.c)
 * Callees:
 *     ??$?RG$0A@@?$default_delete@$$BY0A@G@std@@QEBAXPEAG@Z @ 0x18018E874 (--$-RG$0A@@-$default_delete@$$BY0A@G@std@@QEBAXPEAG@Z.c)
 */

__int64 __fastcall std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<unsigned short [0]>::operator()<unsigned short,0>(a1, *a1);
  return result;
}
