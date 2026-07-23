/*
 * XREFs of RtlSetFeatureConfigurations @ 0x18010E590
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     ZwSetSystemInformation @ 0x1801625D0 (ZwSetSystemInformation.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlSetFeatureConfigurations(
        PRTL_FEATURE_CHANGE_STAMP PreviousChangeStamp,
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CONFIGURATION_UPDATE ConfigurationUpdates,
        SIZE_T ConfigurationUpdateCount)
{
  NTSTATUS v7; // ebx
  unsigned __int64 v8; // rbx
  int v9; // ebp
  char *Heap_0; // rax
  void *v11; // rdi
  NTSTATUS v12; // eax
  struct _PEB *v13; // rcx

  if ( ConfigurationUpdateCount > 0xFFFFFFFF )
    return -1073741811;
  v8 = 32LL * (unsigned int)ConfigurationUpdateCount;
  v9 = ConfigurationUpdateCount;
  if ( v8 > 0xFFFFFFFF )
    return -1073741675;
  Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v8 + 24));
  v11 = Heap_0;
  if ( !Heap_0 )
    return -1073741670;
  *(_DWORD *)Heap_0 = 0;
  *((_DWORD *)Heap_0 + 4) = ConfigurationType;
  if ( PreviousChangeStamp )
    *((_QWORD *)Heap_0 + 1) = *PreviousChangeStamp;
  *((_DWORD *)Heap_0 + 5) = v9;
  memmove(Heap_0 + 24, ConfigurationUpdates, (unsigned int)v8);
  v12 = ZwSetSystemInformation(SystemFeatureConfigurationInformation, v11, v8 + 24);
  v13 = NtCurrentPeb();
  v7 = v12;
  if ( v12 >= 0 )
    v7 = 0;
  RtlFreeHeap_0(v13->ProcessHeap, 0, v11);
  return v7;
}
