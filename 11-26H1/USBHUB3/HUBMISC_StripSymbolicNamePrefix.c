/*
 * XREFs of HUBMISC_StripSymbolicNamePrefix @ 0x140033D50
 * Callers:
 *     HUBPDO_GetHubName @ 0x140018C90 (HUBPDO_GetHubName.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x14007E6C0 (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x14007F1A8 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     WMI_AcquireHubName @ 0x14008F8EC (WMI_AcquireHubName.c)
 *     WMI_FireNotification @ 0x14008FAC0 (WMI_FireNotification.c)
 *     WMI_FireNotificationOld @ 0x140090190 (WMI_FireNotificationOld.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall HUBMISC_StripSymbolicNamePrefix(unsigned __int16 *a1, _QWORD *a2)
{
  _WORD *result; // rax
  __int64 v3; // r8
  __int64 v4; // rcx

  result = (_WORD *)*((_QWORD *)a1 + 1);
  v3 = *a1;
  v4 = 0LL;
  if ( result )
  {
    if ( *result == 92 )
    {
      do
      {
        ++result;
        v3 -= 2LL;
      }
      while ( *result && *result != 92 );
      if ( *result == 92 )
      {
        ++result;
        v3 -= 2LL;
      }
    }
    v4 = v3;
  }
  *a2 = v4;
  return result;
}
