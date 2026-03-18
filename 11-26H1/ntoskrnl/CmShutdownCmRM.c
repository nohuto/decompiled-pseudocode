/*
 * XREFs of CmShutdownCmRM @ 0x1408AF354
 * Callers:
 *     CmpTryToRundownHive @ 0x140463B48 (CmpTryToRundownHive.c)
 *     CmShutdownSystem1 @ 0x1406E2270 (CmShutdownSystem1.c)
 *     CmpPerformUnloadKey @ 0x1408AFC14 (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpStopRMLog @ 0x1408ACBAC (CmpStopRMLog.c)
 *     CmpRunDownCmRM @ 0x1408AF194 (CmpRunDownCmRM.c)
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
