/*
 * XREFs of _CmDeleteInstallerClassRegKey @ 0x140808C44
 * Callers:
 *     _CmDeleteInstallerClassWorker @ 0x140808C70 (_CmDeleteInstallerClassWorker.c)
 * Callees:
 *     _CmDeleteCommonClassRegKey @ 0x140807F8C (_CmDeleteCommonClassRegKey.c)
 */

__int64 __fastcall CmDeleteInstallerClassRegKey(__int64 a1, int a2, int a3)
{
  if ( !a3 || (a3 & 0xFFFFFCDF) != 0 )
    return 3221225485LL;
  else
    return CmDeleteCommonClassRegKey(a1, a2, a3);
}
