/*
 * XREFs of DumpUninitialize @ 0x140018E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DumpUninitialize()
{
  __int64 result; // rax

  if ( qword_140042330 )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    qword_140042330 = 0LL;
  }
  if ( qword_140042088 )
  {
    result = RtlUnregisterFeatureUsageProvider();
    qword_140042088 = 0LL;
  }
  dword_1400423B0 = 0;
  return result;
}
