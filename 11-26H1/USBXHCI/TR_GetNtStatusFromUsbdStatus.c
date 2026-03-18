/*
 * XREFs of TR_GetNtStatusFromUsbdStatus @ 0x140013EC4
 * Callers:
 *     Isoch_PrepareStage @ 0x140011770 (Isoch_PrepareStage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_GetNtStatusFromUsbdStatus(int a1)
{
  __int64 result; // rax

  if ( a1 <= -1073737728 )
  {
    switch ( a1 )
    {
      case -1073737728:
        return 3221225626LL;
      case -1073739264:
      case -2147483136:
      case -2147482880:
      case -2147482112:
        return 3221225485LL;
      case -1073738240:
        return 3221225659LL;
    }
    return 3221225473LL;
  }
  if ( a1 == -1073676288 )
    return 3221225760LL;
  if ( a1 == -1073713152 )
    return 3221225486LL;
  result = 0LL;
  if ( (unsigned int)a1 > 1 )
    return 3221225473LL;
  return result;
}
