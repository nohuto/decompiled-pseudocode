/*
 * XREFs of WPP_RECORDER_SF_qLLd @ 0x1400A8058
 * Callers:
 *     ?NdisPDPIProviderControl@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_PROVIDER_CONTROL_CODE@@PEAXK3KPEAK@Z @ 0x14013E480 (-NdisPDPIProviderControl@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_PR.c)
 *     ?NdisPDPIQueueControl@@YAJPEAU_NDIS_PD_QUEUE@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_QUEUE_CONTROL_CODE@@PEAXK3KPEAK@Z @ 0x14013E690 (-NdisPDPIQueueControl@@YAJPEAU_NDIS_PD_QUEUE@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_QUEUE_CONTROL_CO.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qLLd(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+20h] [rbp-58h]
  __int64 v9; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  __int64 v11; // [rsp+B0h] [rbp+38h] BYREF
  va_list va1; // [rsp+B0h] [rbp+38h]
  __int64 v13; // [rsp+B8h] [rbp+40h] BYREF
  va_list va2; // [rsp+B8h] [rbp+40h]
  va_list va3; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v13 = va_arg(va3, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(
      &WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      a4,
      va,
      8LL,
      va1,
      4LL,
      va2,
      4LL,
      va3,
      4LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           29LL,
           &WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
           v8,
           (__int64 *)va,
           8LL,
           (__int64 *)va1);
}
