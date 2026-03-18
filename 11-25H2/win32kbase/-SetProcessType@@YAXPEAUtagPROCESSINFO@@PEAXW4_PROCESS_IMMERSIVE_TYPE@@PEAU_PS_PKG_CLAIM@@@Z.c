/*
 * XREFs of ?SetProcessType@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@PEAU_PS_PKG_CLAIM@@@Z @ 0x1401A6CE0
 * Callers:
 *     xxxInitProcessInfo @ 0x140165DD4 (xxxInitProcessInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x1401A7290 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 */

unsigned __int64 __fastcall SetProcessType(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int8 v9; // al
  unsigned __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  v5 = 0LL;
  if ( a3 >= 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4005);
  *(_QWORD *)(a1 + 808) = (16 * v4) ^ (*(_QWORD *)(a1 + 808) ^ (16 * v4)) & 0xFFFFFFFFFFFFFFCFuLL;
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() && (*a4 & 0x1000) != 0 )
    *(_QWORD *)(a1 + 808) |= 0x18000000000uLL;
  if ( (_DWORD)v4 == 1 )
  {
    if ( (unsigned __int8)ExQueryFastCacheDevLicense() && (unsigned int)(unsigned __int8)a4[1] - 4 <= 1 )
      v5 = 512LL;
    *(_QWORD *)(a1 + 808) = v5 | *(_QWORD *)(a1 + 808) & 0xFFFFFFFFFFFFFDFFuLL | 0xC;
    *(_DWORD *)(a1 + 276) = *(_DWORD *)(a1 + 276) & 0xFFFFFF3F | 0x80;
  }
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"WIN://DESIGN_MODE");
  v9 = SeSecurityAttributePresent(a2, &DestinationString);
  result = ((unsigned __int64)v9 << 13) ^ (*(_QWORD *)(a1 + 808) ^ ((unsigned __int64)v9 << 13)) & 0xFFFFFFFFFFFFDFFFuLL;
  *(_QWORD *)(a1 + 808) = result;
  return result;
}
