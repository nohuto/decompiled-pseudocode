/*
 * XREFs of CmShutdownCmRM @ 0x1408B5760
 * Callers:
 *     CmpTryToRundownHive @ 0x14045CB08 (CmpTryToRundownHive.c)
 *     CmShutdownSystem1 @ 0x1406E64F0 (CmShutdownSystem1.c)
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpStopRMLog @ 0x1408B2FF0 (CmpStopRMLog.c)
 *     CmpRunDownCmRM @ 0x1408B55A0 (CmpRunDownCmRM.c)
 */

void __fastcall CmShutdownCmRM(__int64 a1, char a2)
{
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 64) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 64));
      if ( !*(_DWORD *)(a1 + 64) )
        CmpStopRMLog(a1);
    }
  }
  CmpRunDownCmRM(a1, a2);
}
