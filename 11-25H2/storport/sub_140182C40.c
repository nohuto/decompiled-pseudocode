/*
 * XREFs of sub_140182C40 @ 0x140182C40
 * Callers:
 *     DllUnload @ 0x1400A5240 (DllUnload.c)
 * Callees:
 *     <none>
 */

__int64 sub_140182C40()
{
  __int64 result; // rax

  if ( qword_1401695D0 )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    qword_1401695D0 = 0LL;
  }
  if ( qword_140168530 )
  {
    result = RtlUnregisterFeatureUsageProvider();
    qword_140168530 = 0LL;
  }
  dword_140169680 = 0;
  return result;
}
