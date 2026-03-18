/*
 * XREFs of _CmDeleteInterfaceClassRegKey @ 0x140808FEC
 * Callers:
 *     _CmDeleteInterfaceClassWorker @ 0x140809018 (_CmDeleteInterfaceClassWorker.c)
 * Callees:
 *     _CmDeleteCommonClassRegKey @ 0x140807F8C (_CmDeleteCommonClassRegKey.c)
 */

__int64 __fastcall CmDeleteInterfaceClassRegKey(__int64 a1, int a2, int a3)
{
  if ( !a3 || (a3 & 0xFFFFFCBF) != 0 )
    return 3221225485LL;
  else
    return CmDeleteCommonClassRegKey(a1, a2, a3);
}
