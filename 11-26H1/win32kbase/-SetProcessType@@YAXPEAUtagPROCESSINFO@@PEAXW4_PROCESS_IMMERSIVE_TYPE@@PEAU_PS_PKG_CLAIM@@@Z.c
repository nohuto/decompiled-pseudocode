/*
 * XREFs of ?SetProcessType@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@PEAU_PS_PKG_CLAIM@@@Z @ 0x1401CA0C8
 * Callers:
 *     xxxInitProcessInfo @ 0x1401CB0D4 (xxxInitProcessInfo.c)
 * Callees:
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x14019B32C (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

unsigned __int64 __fastcall SetProcessType(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 *v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // rax
  unsigned __int64 *v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  v5 = 0LL;
  if ( a3 >= 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 3977);
  v9 = (unsigned __int64 *)(a1 + 808);
  *(_QWORD *)(a1 + 808) = (16 * v4) ^ (*(_QWORD *)(a1 + 808) ^ (16 * v4)) & 0xFFFFFFFFFFFFFFCFuLL;
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() && (*a4 & 0x1000) != 0 )
    *v9 |= 0x18000000000uLL;
  if ( (_DWORD)v4 == 1 )
  {
    if ( (unsigned __int8)ExQueryFastCacheDevLicense() )
    {
      v10 = (unsigned __int8)a4[1];
      if ( v10 == 4 || v10 == 5 )
        v5 = 512LL;
    }
    v11 = v5 | *v9 & 0xFFFFFFFFFFFFFDFFuLL;
    v12 = (unsigned __int64 *)(a1 + 808);
    *v9 = v11 | 0xC;
    *(_DWORD *)(a1 + 276) = *(_DWORD *)(a1 + 276) & 0xFFFFFF3F | 0x80;
  }
  else
  {
    v12 = (unsigned __int64 *)(a1 + 808);
  }
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"WIN://DESIGN_MODE");
  v13 = (unsigned __int64)(unsigned __int8)SeSecurityAttributePresent(a2, &DestinationString) << 13;
  result = v13 ^ (*v9 ^ v13) & 0xFFFFFFFFFFFFDFFFuLL;
  *v12 = result;
  return result;
}
