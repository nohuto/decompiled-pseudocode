/*
 * XREFs of ?OnAsyncWorkItemNotification@CBaseInput@@AEAAJXZ @ 0x140199850
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14003B058 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401998B4 (RIMOnAsyncWorkItemNotification.c)
 */

__int64 __fastcall CBaseInput::OnAsyncWorkItemNotification(CBaseInput *this)
{
  unsigned int v2; // eax
  __int64 *v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 *v7; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v7, "OnAsyncWorkItemNotification", 0LL);
  v2 = RIMOnAsyncWorkItemNotification(*((_QWORD *)this + 1));
  v3 = v7;
  v4 = v2;
  if ( v7 )
  {
    *((_QWORD *)PtiCurrent() + 48) = v3[6];
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup((char **)&v7, v5);
  }
  return v4;
}
