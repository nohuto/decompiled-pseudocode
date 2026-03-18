/*
 * XREFs of ?OnAsyncWorkItemNotification@CBaseInput@@AEAAJXZ @ 0x140128850
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14009DF14 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401288B4 (RIMOnAsyncWorkItemNotification.c)
 */

__int64 __fastcall CBaseInput::OnAsyncWorkItemNotification(CBaseInput *this)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  void **v5; // rbx
  unsigned int v6; // edi
  int v7; // edx
  int v8; // r8d
  void **v10; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v10, "OnAsyncWorkItemNotification", 0LL);
  v2 = RIMOnAsyncWorkItemNotification(*((_QWORD *)this + 1));
  v5 = v10;
  v6 = v2;
  if ( v10 )
  {
    *((_QWORD *)PtiCurrent(v4, v3) + 47) = v5[6];
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup(&v10, v7, v8);
  }
  return v6;
}
