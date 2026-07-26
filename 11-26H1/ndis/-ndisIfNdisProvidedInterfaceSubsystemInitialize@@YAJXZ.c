/*
 * XREFs of ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x140147A38
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x140191604 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     NdisConvertNdisStatusToNtStatus @ 0x14005A5E0 (NdisConvertNdisStatusToNtStatus.c)
 *     ?ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z @ 0x1400760C0 (-ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z.c)
 *     NdisIfDeregisterProvider @ 0x1400CEAF0 (NdisIfDeregisterProvider.c)
 */

__int64 ndisIfNdisProvidedInterfaceSubsystemInitialize(void)
{
  int v0; // eax
  int v1; // ecx
  int v3; // ebx
  struct _NDIS_IF_PROVIDER_CHARACTERISTICS Src; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)&Src.Header.Type = 2621824LL;
  *(_OWORD *)&Src.Reserved1 = 0LL;
  Src.QueryObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int *, void *))ndisIfQueryObject;
  Src.SetObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int, void *))NetSetupKnobCollection::SetKnobInStore;
  v0 = ndisIfRegisterProviderInternal(&Src, &qword_14011F670, &qword_14011F670);
  if ( v0 )
  {
    v1 = v0;
    return NdisConvertNdisStatusToNtStatus(v1);
  }
  Src.QueryObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int *, void *))ndisIfQueryLoopbackObject;
  Src.SetObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int, void *))NetSetupKnobCollection::SetKnobInStore;
  v3 = ndisIfRegisterProviderInternal(&Src, &qword_14011F668, &qword_14011F668);
  if ( v3 )
  {
    NdisIfDeregisterProvider(&qword_14011F670);
    v1 = v3;
    qword_14011F670 = 0LL;
    return NdisConvertNdisStatusToNtStatus(v1);
  }
  return 0LL;
}
