/*
 * XREFs of RIMIsTestSigningOn @ 0x1401C0140
 * Callers:
 *     rimOnPnpArrived @ 0x140093AC0 (rimOnPnpArrived.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1401B671C (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsCheckForObservationPermissions @ 0x14020EE9C (rimObsCheckForObservationPermissions.c)
 * Callees:
 *     <none>
 */

__int64 RIMIsTestSigningOn()
{
  unsigned int v0; // ebx
  ULONG v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v3 = 8LL;
  v2 = 0;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &v3, 8u, &v2) >= 0 )
    return (BYTE4(v3) >> 1) & 1;
  return v0;
}
