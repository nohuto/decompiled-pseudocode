/*
 * XREFs of ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x14000EE20
 * Callers:
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x14000DC40 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     GreCombineRgn @ 0x14000DFC0 (GreCombineRgn.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x14000E8F4 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14000EAFC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x140013C70 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x140013CA0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400963B0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x140096D00 (GreExtCreateRegion.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x140097160 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x140098C8C (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x140098DA0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x140177110 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140177330 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 * Callees:
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x14000B1B8 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D230 (-LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ @ 0x14000F9B0 (-Allocate@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x14000FE30 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x140010B30 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140010BD4 (-RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
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

void __fastcall RGNMEMOBJ::vInitialize(RGNMEMOBJ *this, unsigned int a2)
{
  __int64 v2; // r15
  struct REGION_CORE *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rsi
  struct REGION_CORE *v7; // r14
  Win32kRS *v8; // rbx
  __int64 v9; // r12
  char *v10; // rbx
  __int64 v11; // rdi
  int v12; // r14d
  bool v13; // zf
  struct REGION_CORE *v14; // r14
  struct SCAN **v15; // rbx
  __int64 v16; // rsi
  _QWORD *v17; // rax
  unsigned __int8 *v18; // r14
  __int64 v19; // rax
  void *v20; // rdx
  struct _PAGED_LOOKASIDE_LIST *v21; // rcx
  __int64 v22; // rdi
  PVOID v23; // rax
  struct SCAN *pScan_mut; // rax
  unsigned __int64 v25; // rax
  struct SCAN *v26; // rax
  __int64 UserSessionState; // rax
  unsigned __int64 v28; // rdi
  __int64 v29; // r14
  int v30; // eax
  __int64 Pool2; // rdi
  _QWORD *v32; // r15
  _QWORD *v33; // rax
  void *v34; // r8
  unsigned int v35; // r10d
  char v36; // r15
  _QWORD v37[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v38[20]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BackTrace[28]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v40; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned int v41; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v42; // [rsp+200h] [rbp+100h] BYREF
  unsigned __int64 v43; // [rsp+208h] [rbp+108h] BYREF

  v2 = 112LL;
  if ( a2 >= 0x70 )
    v2 = a2;
  v4 = *(struct REGION_CORE **)(W32GetSessionState() + 88);
  if ( !*(_QWORD *)(*((_QWORD *)v4 + 534) + 56LL) )
    goto LABEL_11;
  v5 = NSInstrumentation::CTypeIsolation<28672,112>::Allocate();
  v6 = v5;
  if ( !v5 )
    goto LABEL_12;
  v7 = qword_1402A10B0;
  v8 = (Win32kRS *)(v5 + 24);
  if ( qword_1402A10B0 )
  {
    v9 = (unsigned __int64)v8 & -(__int64)(v5 != 0);
    v10 = (char *)qword_1402A10B0 + 8;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v7 + 8, 2LL);
    v11 = *(_QWORD *)v7;
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 144LL))(v9, (unsigned int)v2);
    if ( !(*(unsigned int (__fastcall **)(__int64))(v11 + 216))(v9) )
      DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v9, 0LL, 0LL, 0LL, 0LL, 0);
    ExReleasePushLockSharedEx(v10, 2LL);
    KeLeaveCriticalRegion();
    v13 = v12 == 0;
    goto LABEL_9;
  }
  *(_QWORD *)(v5 + 40) = 0LL;
  if ( !qword_1402A10B0 )
  {
    *(_QWORD *)(v5 + 32) = (unsigned int)v2;
    if ( (unsigned __int64)(unsigned int)v2 < *(_QWORD *)(v5 + 40) )
    {
      *(_QWORD *)(v5 + 40) = (unsigned int)v2;
      RustOnZeroSizedScanCallback();
    }
  }
  if ( (_DWORD)v2 != 112 )
  {
    UserSessionState = W32GetUserSessionState();
    v28 = (unsigned int)v2;
    v41 = 1852011335;
    v42 = 256LL;
    v29 = UserSessionState + 72032;
    v43 = (unsigned int)v2;
    v30 = *(_DWORD *)(UserSessionState + 72032);
    switch ( v30 )
    {
      case 0:
        Pool2 = ExAllocatePool2(258LL, (unsigned int)v2, 1852011335LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)(v29 + 112));
        goto LABEL_41;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
               (NSInstrumentation::CLeakTrackingAllocator *)v29,
               0x6E637347u)
          && v2 + 16 > (unsigned __int64)(unsigned int)v2 )
        {
          v33 = (_QWORD *)ExAllocatePool2(v42 | 2, v2 + 16, v41);
          Pool2 = (__int64)v33;
          if ( !v33
            || (_InterlockedIncrement64((volatile signed __int64 *)(v29 + 112)),
                *v33 = 1852011335LL,
                Pool2 = (__int64)(v33 + 2),
                v33 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *(NSInstrumentation::CPointerHashTable **)(v29 + 8),
              0x6E637347uLL);
          }
          goto LABEL_41;
        }
        break;
      case 2:
        v40 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                (NSInstrumentation::CLeakTrackingAllocator *)v29,
                0x6E637347u,
                &v40) )
        {
          v37[0] = &v42;
          v37[1] = &v41;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64___(
                    v29,
                    v37,
                    &v43);
LABEL_41:
          *(_QWORD *)v8 = Pool2;
          goto LABEL_28;
        }
        v36 = 0;
        if ( v28 < 0x1000 || (v28 & 0xFFF) != 0 )
        {
          v28 += 16LL;
          v36 = 1;
          v43 = v28;
        }
        Pool2 = ExAllocatePool2(258LL, v28, v35);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v29 + 128));
          memset(v38, 0, sizeof(v38));
          RtlCaptureStackBackTrace(0, 0x14u, v38, 0LL);
          if ( v36 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v29,
                                    Pool2,
                                    v40,
                                    v38) )
            {
              Pool2 += 16LL;
              goto LABEL_41;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v29,
                                       Pool2,
                                       v40,
                                       v38) )
          {
            goto LABEL_41;
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v29 + 136));
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
        break;
    }
    Pool2 = 0LL;
    goto LABEL_41;
  }
  v18 = *(unsigned __int8 **)(*(_QWORD *)(W32GetSessionState() + 88) + 4136LL);
  v19 = W32GetUserSessionState();
  v21 = (struct _PAGED_LOOKASIDE_LIST *)(v18 + 16);
  v22 = v19 + 72032;
  if ( v18[5] )
  {
    v32 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v21, v20);
    if ( v32 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v22 + 128));
      memset(BackTrace, 0, 0xA0uLL);
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v22,
                              v32,
                              v18[4],
                              BackTrace) )
        goto LABEL_44;
      _InterlockedIncrement64((volatile signed __int64 *)(v22 + 136));
      NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(v18 + 16), v32, v34);
    }
LABEL_54:
    v23 = 0LL;
    goto LABEL_27;
  }
  if ( (*(_DWORD *)v22 & 0xFFFFFFFD) == 0 )
  {
    v23 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v21, v20);
    if ( v23 )
      _InterlockedIncrement64((volatile signed __int64 *)(v22 + 112));
    goto LABEL_27;
  }
  v32 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v21, v20);
  if ( !v32 )
    goto LABEL_54;
  _InterlockedIncrement64((volatile signed __int64 *)(v22 + 112));
  NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
    *(NSInstrumentation::CPointerHashTable **)(v22 + 8),
    *(unsigned int *)v18);
  *v32 = *(unsigned int *)v18;
LABEL_44:
  v23 = v32 + 2;
LABEL_27:
  *(_QWORD *)v8 = v23;
LABEL_28:
  if ( qword_1402A10B0 )
    pScan_mut = Win32kRS::RegionCore_get_pScan_mut(v8, v4);
  else
    pScan_mut = *(struct SCAN **)v8;
  v13 = pScan_mut == 0LL;
LABEL_9:
  if ( !v13 )
    goto LABEL_12;
  REGION::vDeleteREGION((REGION *)v6);
LABEL_11:
  v6 = 0LL;
LABEL_12:
  *(_QWORD *)this = v6;
  if ( v6 )
  {
    v14 = qword_1402A10B0;
    v15 = (struct SCAN **)(v6 + 24);
    if ( qword_1402A10B0 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)v14 + 8, 2LL);
      v16 = *(_QWORD *)v14;
      (*(void (__fastcall **)(struct SCAN **))(*(_QWORD *)v14 + 160LL))(v15);
      if ( !(*(unsigned int (__fastcall **)(struct SCAN **))(v16 + 216))(v15) )
        DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v15, 0LL, 0LL, 0LL, 0LL, 0);
      ExReleasePushLockSharedEx((char *)v14 + 8, 2LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      v25 = *(_QWORD *)(v6 + 32);
      *(_QWORD *)(v6 + 40) = 16LL;
      if ( v25 < 0x10 )
      {
        *(_QWORD *)(v6 + 40) = v25;
        RustOnZeroSizedScanCallback();
      }
      v13 = qword_1402A10B0 == 0LL;
      *(_OWORD *)(v6 + 52) = 0LL;
      *(_DWORD *)(v6 + 48) = 1;
      if ( v13 )
        v26 = *v15;
      else
        v26 = Win32kRS::RegionCore_get_pScan_mut((Win32kRS *)(v6 + 24), v4);
      *(_DWORD *)v26 = 0;
      *((_DWORD *)v26 + 1) = 0x80000000;
      *((_QWORD *)v26 + 1) = 0x7FFFFFFFLL;
    }
    *(_DWORD *)(*(_QWORD *)this + 76LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 72LL) = 0;
    v17 = (_QWORD *)(*(_QWORD *)this + 80LL);
    v17[1] = v17;
    *v17 = v17;
  }
}
