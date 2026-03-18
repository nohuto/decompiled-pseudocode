/*
 * XREFs of _CmDeleteInstallerClassRegKey @ 0x140896E08
 * Callers:
 *     _CmDeleteInstallerClassWorker @ 0x14077EB80 (_CmDeleteInstallerClassWorker.c)
 * Callees:
 *     _CmDeleteCommonClassRegKey @ 0x1408964F8 (_CmDeleteCommonClassRegKey.c)
 */

__int64 __fastcall CmDeleteInstallerClassRegKey(__int64 a1, __int64 a2, int a3)
{
  if ( !a3 || (a3 & 0xFFFFFCDF) != 0 )
    return 3221225485LL;
  else
    return CmDeleteCommonClassRegKey(a1, a2, a3);
}
