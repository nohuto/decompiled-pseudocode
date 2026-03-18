/*
 * XREFs of rimQueueApiSetHidRawInputAsyncWorkItem @ 0x140045CC8
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1400477E4 (RIMProcessAnyPointerDeviceInput.c)
 *     rimProcessHidInput @ 0x1400A19E0 (rimProcessHidInput.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     RIMQueueAndSignalAsyncWorkItem @ 0x1400460CC (RIMQueueAndSignalAsyncWorkItem.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x140205800 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

_UNKNOWN **__fastcall rimQueueApiSetHidRawInputAsyncWorkItem(void *a1, __int64 a2, int a3)
{
  unsigned __int64 *v3; // r13
  __int64 v4; // rdi
  int v5; // r8d
  int v6; // eax
  __int64 v7; // rax
  char v8; // r14
  __int64 v9; // rbx
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rcx
  unsigned int v15; // eax
  _UNKNOWN **result; // rax
  _QWORD *Pool2; // rax
  _DWORD *v18; // rax
  unsigned __int64 i; // rbp
  bool v20; // r12
  __int64 UserSessionState; // rax
  int v22; // r8d
  int v23; // edx
  char *v24; // rcx
  PVOID BackTrace[27]; // [rsp+70h] [rbp-D8h] BYREF

  v3 = *(unsigned __int64 **)(a2 + 32);
  v4 = W32GetUserSessionState((_DWORD)a1, a2, a3) + 72016;
  v6 = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 )
  {
    v8 = 1;
    if ( v6 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
              (NSInstrumentation::CLeakTrackingAllocator *)v4,
              0x70707352u) )
        goto LABEL_31;
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, 136LL, 1886417746LL);
      v9 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedAdd64((volatile signed __int64 *)(v4 + 112), 1uLL),
            *Pool2 = 1886417746LL,
            v9 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *(NSInstrumentation::CPointerHashTable **)(v4 + 8),
          (const void *)0x70707352);
      }
      goto LABEL_5;
    }
    if ( v6 != 2 )
      goto LABEL_31;
    if ( (*(_DWORD *)(v4 + 80) & 0x70707352) == 0x70707352 )
    {
      v18 = (_DWORD *)(v4 + 48);
      for ( i = 0LL; i < *(unsigned int *)(v4 + 84); ++i )
      {
        if ( *v18 == 1886417746 )
        {
          v9 = ExAllocatePool2(256LL, 136LL, 1886417746LL);
          if ( !v9 )
            goto LABEL_31;
          _InterlockedAdd64((volatile signed __int64 *)(v4 + 128), 1uLL);
          memset(BackTrace, 0, 0xA0uLL);
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( (unsigned __int64)(v9 & 0xFFF) + 16 >= 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                    v4,
                                    v9,
                                    i,
                                    BackTrace) )
              goto LABEL_6;
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                       v4,
                                       v9,
                                       i,
                                       BackTrace) )
          {
            v9 += 16LL;
            goto LABEL_5;
          }
          _InterlockedAdd64((volatile signed __int64 *)(v4 + 136), 1uLL);
          _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)v9);
          goto LABEL_31;
        }
        ++v18;
      }
    }
    v7 = ExAllocatePool2(256LL, 120LL, 1886417746LL);
  }
  else
  {
    v7 = ExAllocatePool2(256LL, 120LL, 1886417746LL);
    v8 = 1;
  }
  v9 = v7;
  if ( v7 )
    _InterlockedAdd64((volatile signed __int64 *)(v4 + 112), 1uLL);
LABEL_5:
  if ( v9 )
  {
LABEL_6:
    v10 = Win32AllocPoolZInitImpl(0x100uLL, v3[40], 0x75625252u);
    *(_QWORD *)(v9 + 104) = v10;
    v14 = v10;
    if ( v10 )
    {
      v15 = *((_DWORD *)v3 + 80);
      *(_DWORD *)(v9 + 100) = v15;
      memmove(v14, *(const void **)(v3[64] + 24), v15);
      *(_QWORD *)(v9 + 8) = v9;
      *(_QWORD *)v9 = v9;
      if ( ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0) < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 77LL);
      *(_QWORD *)(v9 + 24) = a1;
      if ( ObReferenceObjectByPointer(v3, 3u, ExRawInputManagerObjectType, 0) < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 92LL);
      *(_QWORD *)(v9 + 56) = v3;
      *(_DWORD *)(v9 + 96) = 0;
      *(_DWORD *)(v9 + 32) = 0;
      *(_DWORD *)(v9 + 16) = 3;
      *(_DWORD *)(v9 + 112) = 0;
      return (_UNKNOWN **)RIMQueueAndSignalAsyncWorkItem((struct RawInputManagerObject *)a1, (PVOID)v9);
    }
    v24 = *(char **)(v9 + 48);
    if ( v24 )
    {
      GreDeleteFastMutex(v24, v11, v12, v13);
      *(_QWORD *)(v9 + 48) = 0LL;
    }
    GreDeleteFastMutex((char *)v9, v11, v12, v13);
  }
LABEL_31:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v8 = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 2, v5);
    LOBYTE(v22) = v20;
    LOBYTE(v23) = v8;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qqqDSd(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v23,
                          v22,
                          *(_QWORD *)(UserSessionState + 19368),
                          2);
  }
  return result;
}
