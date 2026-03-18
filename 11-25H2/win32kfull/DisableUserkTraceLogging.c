/*
 * XREFs of DisableUserkTraceLogging @ 0x14028D5E0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_DialTracing__private_IsEnabledDeviceUsageNoInline @ 0x14028D6F8 (Feature_DialTracing__private_IsEnabledDeviceUsageNoInline.c)
 *     TlgUnregisterAggregateProvider @ 0x1403D3CD8 (TlgUnregisterAggregateProvider.c)
 */

NTSTATUS DisableUserkTraceLogging()
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx
  NTSTATUS result; // eax
  REGHANDLE v3; // rcx
  REGHANDLE v4; // rcx

  v0 = qword_14039BBE0;
  qword_14039BBE0 = 0LL;
  dword_14039BBC0 = 0;
  EtwUnregister(v0);
  TlgUnregisterAggregateProvider();
  v1 = RegHandle;
  RegHandle = 0LL;
  dword_14039BB50 = 0;
  EtwUnregister(v1);
  result = Feature_DialTracing__private_IsEnabledDeviceUsageNoInline();
  if ( result )
  {
    v3 = qword_14039BC18;
    qword_14039BC18 = 0LL;
    dword_14039BBF8 = 0;
    EtwUnregister(v3);
    v4 = qword_14039BC50;
    qword_14039BC50 = 0LL;
    dword_14039BC30 = 0;
    return EtwUnregister(v4);
  }
  return result;
}
