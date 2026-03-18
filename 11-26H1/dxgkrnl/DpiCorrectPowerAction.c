/*
 * XREFs of DpiCorrectPowerAction @ 0x140058344
 * Callers:
 *     DpiPdoDispatchPower @ 0x1400581A0 (DpiPdoDispatchPower.c)
 *     DpiFdoHandleSystemPower @ 0x1403BA2FC (DpiFdoHandleSystemPower.c)
 *     DpiFdoSetAdapterPowerState @ 0x14042D4FC (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCorrectPowerAction(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v5; // edx
  int v6; // edx
  int v7; // edx

  v3 = a3;
  if ( a3 == 3 )
  {
    v5 = a2 - 2;
    if ( v5 && (v6 = v5 - 1) != 0 && (v7 = v6 - 1) != 0 )
    {
      if ( v7 == 1 )
      {
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 6698;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 6707;
      }
    }
    else
    {
      v3 = 2;
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 6689;
    }
  }
  return v3;
}
