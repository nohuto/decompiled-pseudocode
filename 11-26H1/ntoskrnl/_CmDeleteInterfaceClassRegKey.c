/*
 * XREFs of _CmDeleteInterfaceClassRegKey @ 0x14089D360
 * Callers:
 *     _CmDeleteInterfaceClassWorker @ 0x14089D38C (_CmDeleteInterfaceClassWorker.c)
 * Callees:
 *     _CmDeleteCommonClassRegKey @ 0x14089C8F8 (_CmDeleteCommonClassRegKey.c)
 */

__int64 __fastcall CmDeleteInterfaceClassRegKey(__int64 a1, __int64 a2, int a3)
{
  if ( !a3 || (a3 & 0xFFFFFCBF) != 0 )
    return 3221225485LL;
  else
    return CmDeleteCommonClassRegKey(a1, a2, a3);
}
