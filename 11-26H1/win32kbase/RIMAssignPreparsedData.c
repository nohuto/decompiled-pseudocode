/*
 * XREFs of RIMAssignPreparsedData @ 0x1401B88FC
 * Callers:
 *     RIMReleasePointerDeviceInfo @ 0x14012E9F4 (RIMReleasePointerDeviceInfo.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall RIMAssignPreparsedData(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  void *v6; // rax

  v5 = -1073741801;
  if ( *(_QWORD *)(a3 + 936) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2966);
  if ( !*(_QWORD *)(a1 + 16) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2967);
  if ( !*(_DWORD *)(a1 + 104) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2968);
  v6 = (void *)Win32AllocPoolZInitImpl(256LL, *(unsigned int *)(a1 + 104), 0x63707352u);
  *(_QWORD *)(a3 + 936) = v6;
  if ( v6 )
  {
    memmove(v6, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 104));
    return 0;
  }
  return v5;
}
