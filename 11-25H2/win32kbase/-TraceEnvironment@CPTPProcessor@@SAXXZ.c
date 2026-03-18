/*
 * XREFs of ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x140148878
 * Callers:
 *     _lambda_f6639040149d830ab05feaa79928b51c_::operator() @ 0x140148844 (_lambda_f6639040149d830ab05feaa79928b51c_--operator().c)
 * Callees:
 *     ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x140062A88 (-TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x140105A80 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ??9?$SGHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z @ 0x14014E678 (--9-$SGHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z.c)
 */

void __fastcall CPTPProcessor::TraceEnvironment(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct W32_PUSH_LOCK *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 i; // rdi
  struct CPTPProcessor *Processor; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  if ( (unsigned __int8)SGHIDgpHidInput<CHidInput *>::operator!=(a1, &v10)
    && *(_BYTE *)(W32GetUserSessionState(v2, v1) + 3080)
    && dword_14029EE58
    && tlgKeywordOn((__int64)&dword_14029EE58, 1LL) )
  {
    v5 = *(struct W32_PUSH_LOCK **)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 16840) + 1232LL);
    W32AcquirePushLockSharedEx(v5, 0);
    for ( i = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 16840) + 1240LL); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 && *(_DWORD *)(*(_QWORD *)(i + 456) + 24LL) == 7 )
      {
        Processor = CPTPProcessorFactory::GetProcessor((struct DEVICEINFO *)i);
        PTPEngineTraceProducer::TraceEnvironment(
          *((PTPEngineTraceProducer **)Processor + 69),
          (const struct PTPEnvironment *)(*((_QWORD *)Processor + 69) + 40LL));
      }
    }
    ExReleasePushLockSharedEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
}
