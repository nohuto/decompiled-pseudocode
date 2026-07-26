/*
 * XREFs of NdisIfRegisterProvider @ 0x1400CEC10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z @ 0x1400760C0 (-ndisIfRegisterProviderInternal@@YAHPEAU_NDIS_IF_PROVIDER_CHARACTERISTICS@@PEAXPEAPEAX@Z.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x14016A550 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 */

NDIS_STATUS __stdcall NdisIfRegisterProvider(
        PNDIS_IF_PROVIDER_CHARACTERISTICS ProviderCharacteristics,
        NDIS_HANDLE IfProviderContext,
        PNDIS_HANDLE pNdisIfProviderHandle)
{
  NDIS_HANDLE v4; // rdi
  NDIS_STATUS v6; // eax
  NDIS_STATUS v7; // ebx
  char v9; // [rsp+28h] [rbp-20h]
  char v10[4]; // [rsp+38h] [rbp-10h]

  v4 = IfProviderContext;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = (char)IfProviderContext;
    LOBYTE(IfProviderContext) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)IfProviderContext,
      22,
      10,
      (struct _GUID *)&WPP_05716c62bb2536c54c77dd3b41b95439_Traceguids,
      v9);
  }
  ndisIfEnsureNsiInitialized();
  v6 = ndisIfRegisterProviderInternal(ProviderCharacteristics, v4, pNdisIfProviderHandle);
  v7 = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v6;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xBu,
      (struct _GUID *)&WPP_05716c62bb2536c54c77dd3b41b95439_Traceguids,
      (char)v4,
      (char)pNdisIfProviderHandle,
      *(_DWORD *)v10);
  }
  return v7;
}
