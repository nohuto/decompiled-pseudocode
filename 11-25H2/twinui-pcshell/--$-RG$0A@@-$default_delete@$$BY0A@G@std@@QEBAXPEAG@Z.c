/*
 * XREFs of ??$?RG$0A@@?$default_delete@$$BY0A@G@std@@QEBAXPEAG@Z @ 0x180197970
 * Callers:
 *     ?RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z @ 0x180033728 (-RuntimeClassInitialize@CQueryKnownGameList@@QEAAJPEBG@Z.c)
 *     ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1800EFF70 (-GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ??1?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@std@@QEAA@XZ @ 0x180197950 (--1-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@std@@@std@@QEAA@XZ.c)
 *     ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1806568E0 (-GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180656BB4 (-GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::default_delete<unsigned short [0]>::operator()<unsigned short,0>(__int64 a1, void *a2)
{
  operator delete(a2, (const struct std::nothrow_t *)a2);
}
