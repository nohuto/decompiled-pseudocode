/*
 * XREFs of EngAllocMem @ 0x140044130
 * Callers:
 *     EngCreateClip @ 0x140121DA0 (EngCreateClip.c)
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x140152360 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1401F29F0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140044440 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GrepAcquireLockValidate@$0CA@@@YAXXZ @ 0x140044478 (--$GrepAcquireLockValidate@$0CA@@@YAXXZ.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

PVOID __stdcall EngAllocMem(ULONG fl, ULONG cjMemSize, ULONG ulTag)
{
  const void *v3; // rsi
  char v4; // r15
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdi
  int v11; // r15d
  _QWORD *v12; // rbx
  struct _ERESOURCE *v13; // rsi
  _QWORD *v14; // rbx
  __int64 *v15; // rax
  struct _GRETHREAD *v17; // rax
  _QWORD *Pool2; // rax
  _DWORD *v19; // rax
  unsigned __int64 i; // r14
  char v21; // r12
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = (const void *)ulTag;
  v4 = fl;
  if ( cjMemSize - 1 > 0xFFFFFFDE )
    return 0LL;
  v5 = cjMemSize + 32;
  if ( (unsigned int)v5 >= 0x2710000 )
    return 0LL;
  v6 = (unsigned int)v5;
  if ( (fl & 2) != 0 )
  {
    v10 = (__int64)Win32AllocPoolImpl(0x40uLL, (unsigned int)v5, ulTag);
  }
  else
  {
    v8 = W32GetUserSessionState((_BYTE)fl, cjMemSize, ulTag) + 72016;
    v9 = *(_DWORD *)v8;
    if ( !*(_DWORD *)v8 )
      goto LABEL_5;
    if ( v9 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
             (NSInstrumentation::CLeakTrackingAllocator *)v8,
             (unsigned int)v3)
        && v5 + 16 > (unsigned __int64)(unsigned int)v5 )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(258LL, v5 + 16, (unsigned int)v3);
        v10 = (__int64)Pool2;
        if ( !Pool2
          || (_InterlockedIncrement64((volatile signed __int64 *)(v8 + 112)),
              *Pool2 = v3,
              v10 = (__int64)(Pool2 + 2),
              Pool2 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *(NSInstrumentation::CPointerHashTable **)(v8 + 8),
            v3);
        }
        goto LABEL_7;
      }
    }
    else if ( v9 == 2 )
    {
      if ( ((unsigned int)v3 & *(_DWORD *)(v8 + 80)) != (_DWORD)v3 )
      {
LABEL_5:
        v10 = ExAllocatePool2(258LL, (unsigned int)v5, (unsigned int)v3);
        if ( v10 )
          _InterlockedIncrement64((volatile signed __int64 *)(v8 + 112));
        goto LABEL_7;
      }
      v19 = (_DWORD *)(v8 + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v8 + 84) )
          goto LABEL_5;
        if ( *v19 == (_DWORD)v3 )
          break;
        ++v19;
      }
      v21 = 0;
      if ( (unsigned int)v5 < 0x1000uLL || (v5 & 0xFFF) != 0 )
      {
        v21 = 1;
        v6 = (unsigned int)v5 + 16LL;
      }
      v10 = ExAllocatePool2(258LL, v6, (unsigned int)v3);
      if ( v10 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v8 + 128));
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v21 && (unsigned __int64)(v10 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v8,
                                  v10,
                                  i,
                                  BackTrace) )
          {
            v10 += 16LL;
            goto LABEL_7;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v8,
                                     v10,
                                     i,
                                     BackTrace) )
        {
          goto LABEL_7;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v8 + 136));
        _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)v10);
      }
    }
    v10 = 0LL;
  }
LABEL_7:
  v11 = v4 & 1;
  if ( v10 )
  {
    if ( v11 )
      memset((void *)v10, 0, (unsigned int)v5);
    v12 = *(_QWORD **)(W32GetSessionState(v7) + 88);
    *(_DWORD *)(v10 + 16) = 0;
    v13 = (struct _ERESOURCE *)(*v12 + 1720LL);
    GreAcquireSemaphoreInternal(v13);
    GrepAcquireLockValidate<32>();
    v14 = v12 + 390;
    v15 = (__int64 *)v14[1];
    if ( (_QWORD *)*v15 != v14 )
      __fastfail(3u);
    *(_QWORD *)v10 = v14;
    *(_QWORD *)(v10 + 8) = v15;
    *v15 = v10;
    v14[1] = v10;
    if ( v13 )
    {
      EtwTraceGreLockReleaseSemaphore(L"MultiUserEngAllocListLock", v13);
      v17 = GreGetCurrentThreadCrossSessionCheck();
      if ( v17 )
        *(_QWORD *)v17 &= ~0x100000000uLL;
      GreReleaseSemaphoreSharedInternal(v13);
    }
    v10 += 32LL;
  }
  return (PVOID)v10;
}
