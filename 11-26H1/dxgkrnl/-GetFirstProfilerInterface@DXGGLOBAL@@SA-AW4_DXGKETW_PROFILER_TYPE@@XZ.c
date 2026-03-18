/*
 * XREFs of ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1402FE460
 * Callers:
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x14019D760 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14019F50C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z @ 0x140293FAC (-AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@_N@Z @ 0x1402FE3C4 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14030D4B0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0@Z @ 0x140423F70 (-AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 DXGGLOBAL::GetFirstProfilerInterface()
{
  unsigned int *v0; // rdi
  PVOID v2; // rax
  int v3; // eax
  __int64 v4; // rbx
  unsigned int *v5; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v5) < 0 )
    return 0xFFFFFFFFLL;
  v0 = v5;
  if ( !v5 )
  {
    v2 = ExAllocateFromLookasideListEx(&g_DxgkThreadLookasideList);
    v0 = (unsigned int *)v2;
    if ( v2 )
    {
      *((_QWORD *)v2 + 3) = 0LL;
      *(_QWORD *)v2 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
      *((_DWORD *)v2 + 2) = 1;
      *(_QWORD *)v2 = &DXGTHREAD::`vftable';
      *((_QWORD *)v2 + 5) = &DXGTHREAD::m_LockOrderTrackerUpperBound;
      strcpy((char *)v2 + 32, "DxgT");
      *((_QWORD *)v2 + 6) = 0LL;
      *((_DWORD *)v2 + 14) = -1;
      *((_QWORD *)v2 + 2) = KeGetCurrentThread();
      v3 = PsTlsSetValue(g_DxgkThreadTlsId, v2);
      v4 = v3;
      if ( v3 >= 0 )
      {
        ++dword_140168C48;
        ++dword_140168C40;
        goto LABEL_8;
      }
      ReferenceCounted::Release((ReferenceCounted *)v0);
      WdLogSingleEntry2(2LL, v0, v4);
      WdLogGlobalForLineNumber = 531;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to set thread PsTls for DXGTHREAD 0xI64x (Status = 0xI64x).",
        (__int64)v0,
        v4,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 514;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate DXGTHREAD for thread 0xI64x.",
        (__int64)KeGetCurrentThread(),
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v0 = 0LL;
LABEL_8:
    v5 = v0;
    if ( !v0 )
      return 0xFFFFFFFFLL;
  }
  return v0[14];
}
