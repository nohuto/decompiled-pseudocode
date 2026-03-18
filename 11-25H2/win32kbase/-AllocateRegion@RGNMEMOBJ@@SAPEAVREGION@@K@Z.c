/*
 * XREFs of ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x14000F490
 * Callers:
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x140095344 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400963B0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x14000B1B8 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D230 (-LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14000F9B0 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x14000FE30 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x140010B30 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140011330 (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64_&_ @ 0x1400BF974 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1401567DC (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ACBC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019FD90 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

struct REGION *__fastcall RGNMEMOBJ::AllocateRegion(unsigned int a1)
{
  unsigned __int64 v1; // r15
  __int64 v2; // rax
  struct REGION_CORE *v3; // rdx
  REGION *v4; // rdi
  struct REGION_CORE *v5; // rsi
  Win32kRS *v6; // r14
  char *v7; // rbx
  __int64 v8; // rsi
  int v9; // r15d
  unsigned __int8 *v10; // rsi
  __int64 UserSessionState; // rax
  void *v12; // rdx
  struct _PAGED_LOOKASIDE_LIST *v13; // rcx
  __int64 v14; // rbx
  PVOID v15; // rax
  struct SCAN *pScan_mut; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // rbx
  int v21; // eax
  __int64 Pool2; // rsi
  _QWORD *v23; // r15
  _QWORD *v24; // rax
  void *v25; // r8
  unsigned int v26; // edx
  char v27; // r15
  unsigned __int64 v28; // [rsp+50h] [rbp-198h] BYREF
  _QWORD v29[2]; // [rsp+60h] [rbp-188h] BYREF
  PVOID v30[20]; // [rsp+70h] [rbp-178h] BYREF
  PVOID BackTrace[20]; // [rsp+110h] [rbp-D8h] BYREF
  unsigned int v32; // [rsp+1F8h] [rbp+10h] BYREF
  unsigned __int64 v33; // [rsp+200h] [rbp+18h] BYREF
  __int64 v34; // [rsp+208h] [rbp+20h] BYREF

  v1 = a1;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState() + 88) + 4272LL) + 56LL) )
    return 0LL;
  v2 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
  v4 = (REGION *)v2;
  if ( !v2 )
    return v4;
  v5 = qword_1402A10B0;
  v6 = (Win32kRS *)(v2 + 24);
  if ( qword_1402A10B0 )
  {
    v7 = (char *)qword_1402A10B0 + 8;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v5 + 8, 2LL);
    v8 = *(_QWORD *)v5;
    v9 = (*(__int64 (__fastcall **)(Win32kRS *, _QWORD))(v8 + 144))(v6, (unsigned int)v1);
    if ( !(*(unsigned int (__fastcall **)(Win32kRS *))(v8 + 216))(v6) )
      DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v6, 0LL, 0LL, 0LL, 0LL, 0);
    ExReleasePushLockSharedEx(v7, 2LL);
    KeLeaveCriticalRegion();
    if ( !v9 )
    {
      REGION::vDeleteREGION(v4);
      return 0LL;
    }
    return v4;
  }
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 32) = v1;
  if ( v1 < *(_QWORD *)(v2 + 40) )
  {
    *(_QWORD *)(v2 + 40) = v1;
    RustOnZeroSizedScanCallback();
    v5 = qword_1402A10B0;
  }
  if ( (_DWORD)v1 == 112 )
  {
    v10 = *(unsigned __int8 **)(*(_QWORD *)(W32GetSessionState() + 88) + 4136LL);
    UserSessionState = W32GetUserSessionState();
    v13 = (struct _PAGED_LOOKASIDE_LIST *)(v10 + 16);
    v14 = UserSessionState + 72032;
    if ( v10[5] )
    {
      v23 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v13, v12);
      if ( v23 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v14 + 128));
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v14,
                                v23,
                                v10[4],
                                BackTrace) )
          goto LABEL_31;
        _InterlockedIncrement64((volatile signed __int64 *)(v14 + 136));
        NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(v10 + 16), v23, v25);
      }
    }
    else
    {
      if ( (*(_DWORD *)v14 & 0xFFFFFFFD) == 0 )
      {
        v15 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v13, v12);
        if ( v15 )
          _InterlockedIncrement64((volatile signed __int64 *)(v14 + 112));
        goto LABEL_15;
      }
      v23 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v13, v12);
      if ( v23 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v14 + 112));
        NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
          *(NSInstrumentation::CPointerHashTable **)(v14 + 8),
          *(unsigned int *)v10);
        *v23 = *(unsigned int *)v10;
LABEL_31:
        v15 = v23 + 2;
LABEL_15:
        *(_QWORD *)v6 = v15;
LABEL_16:
        v5 = qword_1402A10B0;
        goto LABEL_17;
      }
    }
    v15 = 0LL;
    goto LABEL_15;
  }
  if ( (unsigned int)v1 > 0x70 )
  {
    v18 = W32GetUserSessionState();
    v32 = 1852011335;
    v19 = v1;
    v34 = 256LL;
    v28 = v1;
    v20 = v18 + 72032;
    v21 = *(_DWORD *)(v18 + 72032);
    switch ( v21 )
    {
      case 0:
        Pool2 = ExAllocatePool2(258LL, v1, 1852011335LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)(v20 + 112));
        goto LABEL_28;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
               (NSInstrumentation::CLeakTrackingAllocator *)v20,
               0x6E637347u)
          && v1 + 16 > v1 )
        {
          v24 = (_QWORD *)ExAllocatePool2(v34 | 2, v1 + 16, v32);
          Pool2 = (__int64)v24;
          if ( !v24
            || (_InterlockedIncrement64((volatile signed __int64 *)(v20 + 112)),
                *v24 = 1852011335LL,
                Pool2 = (__int64)(v24 + 2),
                v24 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *(NSInstrumentation::CPointerHashTable **)(v20 + 8),
              0x6E637347uLL);
          }
          goto LABEL_28;
        }
        break;
      case 2:
        v33 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                (NSInstrumentation::CLeakTrackingAllocator *)v20,
                0x6E637347u,
                &v33) )
        {
          v29[0] = &v34;
          v29[1] = &v32;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64___(
                    v20,
                    v29,
                    &v28);
LABEL_28:
          *(_QWORD *)v6 = Pool2;
          goto LABEL_16;
        }
        v27 = 0;
        if ( v19 < 0x1000 || (v19 & 0xFFF) != 0 )
        {
          v19 += 16LL;
          v27 = 1;
          v28 = v19;
        }
        Pool2 = ExAllocatePool2(258LL, v19, v26);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v20 + 128));
          memset(v30, 0, sizeof(v30));
          RtlCaptureStackBackTrace(0, 0x14u, v30, 0LL);
          if ( v27 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v20,
                                    Pool2,
                                    v33,
                                    v30) )
            {
              Pool2 += 16LL;
              goto LABEL_28;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v20,
                                       Pool2,
                                       v33,
                                       v30) )
          {
            goto LABEL_28;
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v20 + 136));
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
        break;
    }
    Pool2 = 0LL;
    goto LABEL_28;
  }
LABEL_17:
  if ( v5 )
    pScan_mut = Win32kRS::RegionCore_get_pScan_mut(v6, v3);
  else
    pScan_mut = *(struct SCAN **)v6;
  if ( !pScan_mut )
  {
    REGION::vDeleteREGION(v4);
    return 0LL;
  }
  return v4;
}
