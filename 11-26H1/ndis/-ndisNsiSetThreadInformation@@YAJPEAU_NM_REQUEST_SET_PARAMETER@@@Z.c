/*
 * XREFs of ?ndisNsiSetThreadInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1400892B0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledDeviceUsageNoInline @ 0x1400CDBD0 (Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     NdisSetThreadObjectCompartmentScope @ 0x140164930 (NdisSetThreadObjectCompartmentScope.c)
 *     NdisSetThreadObjectCompartmentId @ 0x14016A420 (NdisSetThreadObjectCompartmentId.c)
 */

__int64 __fastcall ndisNsiSetThreadInformation(struct _NM_REQUEST_SET_PARAMETER *a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  _QWORD *v4; // rdx
  int v5; // eax

  if ( *((_DWORD *)a1 + 15) )
    return 3221225474LL;
  if ( !*((_DWORD *)a1 + 14) )
  {
    IsEnabledDeviceUsageNoInline = Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledDeviceUsageNoInline();
    v4 = (_QWORD *)((char *)a1 + 40);
    if ( !IsEnabledDeviceUsageNoInline || *v4 )
    {
      v5 = *((_DWORD *)a1 + 13);
      if ( !v5 )
        return NdisSetThreadObjectCompartmentId(KeGetCurrentThread(), *(unsigned int *)*v4);
      if ( v5 == 4 )
        return NdisSetThreadObjectCompartmentScope(KeGetCurrentThread(), *(unsigned int *)*v4);
    }
  }
  return 3221225485LL;
}
