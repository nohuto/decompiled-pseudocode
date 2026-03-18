/*
 * XREFs of ?SetFontAsUnreliable@UmfdReliabilityManager@@YAXUUMFD_RELIABILITY_KEY@@@Z @ 0x140340C5C
 * Callers:
 *     ?RecordUnhandledException@UmfdHostLifeTimeManager@@SAXPEBVFontDriverDdiRequest@@@Z @ 0x140338544 (-RecordUnhandledException@UmfdHostLifeTimeManager@@SAXPEBVFontDriverDdiRequest@@@Z.c)
 * Callees:
 *     ?LookUp@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@QEAA_NAEBKPEAUSFontReliabilityInfo@UmfdReliabilityManager@@@Z @ 0x1401CC5CC (-LookUp@-$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@QEAA_.c)
 *     ?Insert@?$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@QEAA_NAEBKAEBUSFontReliabilityInfo@UmfdReliabilityManager@@@Z @ 0x140340A18 (-Insert@-$CSortedVector@KUSFontReliabilityInfo@UmfdReliabilityManager@@@NSInstrumentation@@QEAA_.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14034207C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

char __fastcall UmfdReliabilityManager::SetFontAsUnreliable(int a1, __int64 a2)
{
  __int64 SessionState; // rax
  NSInstrumentation::CPrioritizedWriterLock *v4; // rdi
  char result; // al
  char v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h] BYREF

  SessionState = W32GetSessionState(a1, a2);
  v6 = 0;
  v7 = a1;
  v4 = *(NSInstrumentation::CPrioritizedWriterLock **)(*(_QWORD *)(SessionState + 96) + 24296LL);
  if ( NSInstrumentation::CSortedVector<unsigned long,UmfdReliabilityManager::SFontReliabilityInfo>::LookUp(
         v4,
         &v7,
         &v6)
    && v6 )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM("Repeated fault in the same font file");
  }
  v6 = 1;
  v7 = a1;
  result = NSInstrumentation::CSortedVector<unsigned long,UmfdReliabilityManager::SFontReliabilityInfo>::Insert(
             v4,
             &v7,
             &v6);
  if ( !result )
    return MicrosoftTelemetryAssertTriggeredMsgKM("Unable to record font fault");
  return result;
}
