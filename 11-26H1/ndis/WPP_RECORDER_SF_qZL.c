/*
 * XREFs of WPP_RECORDER_SF_qZL @ 0x14005BBC0
 * Callers:
 *     NdisQueryAdapterInstanceName @ 0x14005BA70 (NdisQueryAdapterInstanceName.c)
 *     NdisIMCancelInitializeDeviceInstance @ 0x14009B660 (NdisIMCancelInitializeDeviceInstance.c)
 *     NdisRegisterProtocol @ 0x1400BBFE0 (NdisRegisterProtocol.c)
 *     NdisRegisterProtocolDriver @ 0x1400BC420 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qZL(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        unsigned __int16 *a7,
        ...)
{
  const wchar_t *v7; // rbx
  unsigned __int64 v10; // rdi
  int v12; // eax
  __int64 v13; // rcx
  const wchar_t *v14; // rdx
  const wchar_t *v15; // rax
  int v17; // [rsp+20h] [rbp-78h]
  va_list va; // [rsp+D8h] [rbp+40h] BYREF

  va_start(va, a7);
  v7 = a7;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( !_bittest(&v12, ((_BYTE)a3 - 1) & 0x1F) || *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) < 4u )
    goto LABEL_9;
  if ( !a7 )
  {
    v13 = 8LL;
    goto LABEL_13;
  }
  v13 = *a7;
  if ( !(_WORD)v13 )
  {
LABEL_13:
    v14 = L"NULL";
    goto LABEL_6;
  }
  v14 = (const wchar_t *)*((_QWORD *)a7 + 1);
LABEL_6:
  v15 = a7;
  if ( !a7 )
    v15 = L"\b";
  ndisWppFastTraceMessage(a5, a4, &a6, 8LL, v15, 2LL, v14, v13, va, 4LL, 0LL);
LABEL_9:
  if ( !v7 )
    v7 = L"\b";
  LOWORD(v17) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v17, &a6, 8LL, v7);
}
