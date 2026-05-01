/*
 * XREFs of ??1?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@QEAA@XZ @ 0x180197950
 * Callers:
 *     ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1800EFF70 (-GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ??1CQueryKnownGameList@@UEAA@XZ @ 0x1801978CC (--1CQueryKnownGameList@@UEAA@XZ.c)
 *     ?IsXusbDevicePresent@GamingOverlayExperienceManager@@AEAA_NUwrite_lock_required@wil@@@Z @ 0x180244C40 (-IsXusbDevicePresent@GamingOverlayExperienceManager@@AEAA_NUwrite_lock_required@wil@@@Z.c)
 *     ?TryGetValue@InProcPropertyStore@Util@@UEAA?AUhstring@winrt@@_KAEBU34@@Z @ 0x18062BA40 (-TryGetValue@InProcPropertyStore@Util@@UEAA-AUhstring@winrt@@_KAEBU34@@Z.c)
 *     ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1806564DC (-GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1806568E0 (-GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180656BB4 (-GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     _CQueryKnownGameList::GetProcessWorkingDirectoryByPID_::_1_::dtor$2 @ 0x1806AB903 (_CQueryKnownGameList--GetProcessWorkingDirectoryByPID_--_1_--dtor$2.c)
 *     _Util::InProcPropertyStore::TryGetValue_::_1_::dtor$1 @ 0x1806DB195 (_Util--InProcPropertyStore--TryGetValue_--_1_--dtor$1.c)
 * Callees:
 *     ??$?RG$0A@@?$default_delete@$$BY0A@G@std@@QEBAXPEAG@Z @ 0x180197970 (--$-RG$0A@@-$default_delete@$$BY0A@G@std@@QEBAXPEAG@Z.c)
 */

__int64 __fastcall std::unique_ptr<unsigned short [0]>::~unique_ptr<unsigned short [0]>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<unsigned short [0]>::operator()<unsigned short,0>(a1, *a1);
  return result;
}
