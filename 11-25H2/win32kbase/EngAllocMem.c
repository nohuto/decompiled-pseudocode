/*
 * XREFs of EngAllocMem @ 0x14001BE30
 * Callers:
 *     EngCreateClip @ 0x1401298C0 (EngCreateClip.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1401338F0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x14015BE70 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 * Callees:
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0CA@@@YAXXZ @ 0x14001C124 (--$GrepAcquireLockValidate@$0CA@@@YAXXZ.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0CA@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046B64 (--$GreReleaseSemaphoreCommon@$0CA@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64_&_ @ 0x1400BF974 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1401567DC (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ACBC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x140243000 (memset.c)
 */

PVOID __stdcall EngAllocMem(ULONG fl, ULONG cjMemSize, ULONG ulTag)
{
  unsigned __int64 v3; // rsi
  char v4; // r15
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 UserSessionState; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  __int64 Pool2; // rdi
  int v12; // r15d
  _QWORD *v13; // rbx
  struct _ERESOURCE *v14; // rsi
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  __int64 *v17; // rax
  unsigned __int64 *v19; // rax
  void *UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64; // rax
  char v21; // r12
  __int64 v22; // [rsp+20h] [rbp-89h] BYREF
  __int64 v23; // [rsp+28h] [rbp-81h] BYREF
  _QWORD v24[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[20]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v26; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned __int64 v27; // [rsp+128h] [rbp+7Fh] BYREF

  v3 = ulTag;
  v4 = fl;
  if ( cjMemSize - 1 > 0xFFFFFFDE )
    return 0LL;
  v5 = cjMemSize + 32;
  if ( (unsigned int)v5 >= 0x2710000 )
    return 0LL;
  v6 = (unsigned int)v5;
  if ( (fl & 2) == 0 )
  {
    UserSessionState = W32GetUserSessionState();
    v26 = v3;
    v22 = 256LL;
    v23 = (unsigned int)v5;
    v9 = UserSessionState + 72032;
    v10 = *(_DWORD *)(UserSessionState + 72032);
    switch ( v10 )
    {
      case 0:
        Pool2 = ExAllocatePool2(258LL, (unsigned int)v5, (unsigned int)v3);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)(v9 + 112));
        goto LABEL_7;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
               (NSInstrumentation::CLeakTrackingAllocator *)v9,
               v3)
          && v5 + 16 > (unsigned __int64)(unsigned int)v5 )
        {
          v19 = (unsigned __int64 *)ExAllocatePool2(v22 | 2, v5 + 16, v26);
          Pool2 = (__int64)v19;
          if ( !v19
            || (_InterlockedIncrement64((volatile signed __int64 *)(v9 + 112)),
                *v19 = v3,
                Pool2 = (__int64)(v19 + 2),
                v19 == (unsigned __int64 *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *(NSInstrumentation::CPointerHashTable **)(v9 + 8),
              v3);
          }
          goto LABEL_7;
        }
        break;
      case 2:
        v27 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                (NSInstrumentation::CLeakTrackingAllocator *)v9,
                v3,
                &v27) )
        {
          v24[0] = &v22;
          v24[1] = &v26;
          UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = (void *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64___(
                                                                                                     v9,
                                                                                                     v24,
                                                                                                     &v23);
          goto LABEL_24;
        }
        v21 = 0;
        if ( (unsigned int)v5 < 0x1000uLL || (v5 & 0xFFF) != 0 )
        {
          v6 = (unsigned int)v5 + 16LL;
          v21 = 1;
          v23 = v6;
        }
        Pool2 = ExAllocatePool2(258LL, v6, (unsigned int)v3);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v9 + 128));
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v21 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v9,
                                    Pool2,
                                    v27,
                                    BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_7;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v9,
                                       Pool2,
                                       v27,
                                       BackTrace) )
          {
            goto LABEL_7;
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v9 + 136));
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
        break;
    }
    Pool2 = 0LL;
    goto LABEL_7;
  }
  UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = Win32AllocPoolImpl(
                                                                                     0x40uLL,
                                                                                     (unsigned int)v5,
                                                                                     ulTag);
LABEL_24:
  Pool2 = (__int64)UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64;
LABEL_7:
  v12 = v4 & 1;
  if ( Pool2 )
  {
    if ( v12 )
      memset((void *)Pool2, 0, (unsigned int)v5);
    v13 = *(_QWORD **)(W32GetSessionState(v8) + 88);
    *(_DWORD *)(Pool2 + 16) = 0;
    v14 = (struct _ERESOURCE *)(*v13 + 1720LL);
    GreAcquireSemaphoreInternal(v14);
    GrepAcquireLockValidate<32>();
    v16 = v13 + 380;
    v17 = (__int64 *)v16[1];
    if ( (_QWORD *)*v17 != v16 )
      __fastfail(3u);
    *(_QWORD *)Pool2 = v16;
    *(_QWORD *)(Pool2 + 8) = v17;
    *v17 = Pool2;
    v16[1] = Pool2;
    if ( v14 )
      GreReleaseSemaphoreCommon<32,void (*)(HSEMAPHORE__ *)>(v15, v14);
    Pool2 += 32LL;
  }
  return (PVOID)Pool2;
}
