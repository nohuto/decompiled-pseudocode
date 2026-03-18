/*
 * XREFs of sub_140032390 @ 0x140032390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400327C0 (_guard_dispatch_icall.c)
 */

__int64 sub_140032390()
{
  __int64 result; // rax

  result = ((__int64 (*)(void))qword_140042258)();
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
