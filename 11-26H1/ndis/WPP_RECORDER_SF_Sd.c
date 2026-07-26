/*
 * XREFs of WPP_RECORDER_SF_Sd @ 0x140070010
 * Callers:
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x14006C250 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x14014B540 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x14014B680 (ndisBindReadFilterDriverFromV3Registry.c)
 *     _lambda_3ed15a572a362cb111cc1d3010d8268d_::operator() @ 0x14014C6EC (_lambda_3ed15a572a362cb111cc1d3010d8268d_--operator().c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x14015F2A0 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x140163860 (-ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Sd(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        const wchar_t *a6,
        ...)
{
  __int64 v6; // rsi
  const wchar_t *v7; // rdi
  unsigned __int64 v9; // r14
  unsigned int v10; // r15d
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r9
  const wchar_t *v16; // r8
  bool v17; // zf
  int v19; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = 10LL;
  v7 = a6;
  v9 = (unsigned __int64)a3 >> 16;
  v10 = a2;
  v12 = -1LL;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v9 + 41) >= a2 )
  {
    if ( a6 )
    {
      v14 = -1LL;
      do
        v17 = a6[++v14] == 0;
      while ( !v17 );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = a6;
    if ( !a6 )
      v16 = L"NULL";
    ndisWppFastTraceMessage(a5, a4, v16, v15, va, 4LL, 0LL);
  }
  v17 = a6 == 0LL;
  if ( a6 )
  {
    do
      v17 = a6[++v12] == 0;
    while ( !v17 );
    v6 = 2 * v12 + 2;
    v17 = a6 == 0LL;
  }
  if ( v17 )
    v7 = L"NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, v10, a3, a5, v19, v7, v6, va);
}
