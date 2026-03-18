/*
 * XREFs of ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x140092338
 * Callers:
 *     _lambda_f6639040149d830ab05feaa79928b51c_::operator() @ 0x140090498 (_lambda_f6639040149d830ab05feaa79928b51c_--operator().c)
 * Callees:
 *     ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x140081338 (-TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z.c)
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1400D4970 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 */

void __fastcall CPTPProcessor::TraceEnvironment(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rbx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 i; // rdi
  struct CPTPProcessor *Processor; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 16832)
    && *(_BYTE *)(W32GetUserSessionState(v4, v3, v5) + 3080)
    && dword_1402A9E78
    && (unsigned __int8)tlgKeywordOn(&dword_1402A9E78, 1LL) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 16832) + 1232LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v9, 0LL);
    for ( i = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v11, v10, v12) + 16832) + 1240LL); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 && *(_DWORD *)(*(_QWORD *)(i + 456) + 24LL) == 7 )
      {
        Processor = CPTPProcessorFactory::GetProcessor((struct DEVICEINFO *)i);
        PTPEngineTraceProducer::TraceEnvironment(
          *((PTPEngineTraceProducer **)Processor + 69),
          (const struct PTPEnvironment *)(*((_QWORD *)Processor + 69) + 40LL));
      }
    }
    ExReleasePushLockSharedEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
}
