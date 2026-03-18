/*
 * XREFs of ?AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z @ 0x14002011C
 * Callers:
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x14001FD84 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ??0RGNCOREMEMOBJ@@QEAA@XZ @ 0x140020078 (--0RGNCOREMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x1400113E4 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x14001E180 (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ACBC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019FD90 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

struct REGION_CORE *__fastcall RGNCOREMEMOBJ::AllocateRegionCore()
{
  __int64 v0; // rbx
  int v1; // eax
  __int64 Pool2; // rsi
  __int64 v3; // rbp
  struct REGION_CORE *v4; // rdi
  struct REGION_CORE *v5; // rdx
  __int64 v6; // r14
  int v7; // eax
  __int64 pScan_mut; // rdi
  Win32kRS *v9; // rbx
  struct REGION_CORE *v10; // rax
  char *v12; // rbx
  __int64 v13; // rdi
  int v14; // r14d
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _DWORD *v17; // rax
  unsigned __int64 i; // rbp
  _DWORD *v19; // rax
  unsigned __int64 j; // r13
  PVOID BackTrace[20]; // [rsp+50h] [rbp-168h] BYREF
  PVOID v22[20]; // [rsp+F0h] [rbp-C8h] BYREF
  Win32kRS *v23; // [rsp+1C8h] [rbp+10h] BYREF

  v0 = W32GetUserSessionState() + 72032;
  v1 = *(_DWORD *)v0;
  if ( !*(_DWORD *)v0 )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(256LL, 48LL, 1852273223LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)(v0 + 112));
    goto LABEL_4;
  }
  if ( v1 != 1 )
  {
    if ( v1 != 2 )
      return 0LL;
    if ( (*(_DWORD *)(v0 + 80) & 0x6E677247) == 0x6E677247 )
    {
      v17 = (_DWORD *)(v0 + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v0 + 84) )
          goto LABEL_2;
        if ( *v17 == 1852273223 )
          break;
        ++v17;
      }
      Pool2 = ExAllocatePool2(256LL, 64LL, 1852273223LL);
      if ( !Pool2 )
        return 0LL;
      _InterlockedIncrement64((volatile signed __int64 *)(v0 + 128));
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                v0,
                                Pool2,
                                i,
                                BackTrace) )
        {
          v3 = Pool2;
          goto LABEL_5;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                   v0,
                                   Pool2,
                                   i,
                                   BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_4;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v0 + 136));
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      return 0LL;
    }
    goto LABEL_2;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
          (NSInstrumentation::CLeakTrackingAllocator *)v0,
          0x6E677247u) )
    return 0LL;
  v15 = (_QWORD *)ExAllocatePool2(256LL, 64LL, 1852273223LL);
  Pool2 = (__int64)v15;
  if ( !v15
    || (_InterlockedIncrement64((volatile signed __int64 *)(v0 + 112)),
        *v15 = 1852273223LL,
        Pool2 = (__int64)(v15 + 2),
        v15 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *(NSInstrumentation::CPointerHashTable **)(v0 + 8),
      0x6E677247uLL);
  }
LABEL_4:
  v3 = Pool2;
  if ( !Pool2 )
    return 0LL;
LABEL_5:
  v4 = qword_1402A10B0;
  if ( !qword_1402A10B0 )
  {
    v6 = W32GetUserSessionState() + 72032;
    v7 = *(_DWORD *)v6;
    if ( !*(_DWORD *)v6 )
    {
      pScan_mut = ExAllocatePool2(256LL, 112LL, 1852011335LL);
      if ( pScan_mut )
        _InterlockedIncrement64((volatile signed __int64 *)(v6 + 112));
LABEL_9:
      v9 = (Win32kRS *)Pool2;
LABEL_10:
      v10 = qword_1402A10B0;
      *(_QWORD *)v9 = pScan_mut;
      if ( v10 )
      {
        pScan_mut = (__int64)Win32kRS::RegionCore_get_pScan_mut(v9, v5);
        v10 = qword_1402A10B0;
      }
      if ( pScan_mut )
      {
        if ( !v10 )
        {
          *((_QWORD *)v9 + 1) = 112LL;
          if ( *((_QWORD *)v9 + 2) > 0x70uLL )
          {
            *((_QWORD *)v9 + 2) = 112LL;
            RustOnZeroSizedScanCallback();
          }
        }
        return v9;
      }
      v23 = v9;
      RGNCOREOBJ::vDeleteRGNCOREOBJ(&v23, v5);
      return 0LL;
    }
    if ( v7 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
             (NSInstrumentation::CLeakTrackingAllocator *)v6,
             0x6E637347u) )
      {
        v16 = (_QWORD *)ExAllocatePool2(256LL, 128LL, 1852011335LL);
        pScan_mut = (__int64)v16;
        if ( !v16
          || (_InterlockedIncrement64((volatile signed __int64 *)(v6 + 112)),
              *v16 = 1852011335LL,
              pScan_mut = (__int64)(v16 + 2),
              v16 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *(NSInstrumentation::CPointerHashTable **)(v6 + 8),
            0x6E637347uLL);
        }
        goto LABEL_9;
      }
      v9 = (Win32kRS *)Pool2;
    }
    else
    {
      v9 = (Win32kRS *)Pool2;
      if ( v7 == 2 )
      {
        if ( (*(_DWORD *)(v6 + 80) & 0x6E637347) == 0x6E637347 )
        {
          v19 = (_DWORD *)(v6 + 48);
          for ( j = 0LL; j < *(unsigned int *)(v6 + 84); ++j )
          {
            if ( *v19 == 1852011335 )
            {
              pScan_mut = ExAllocatePool2(256LL, 128LL, 1852011335LL);
              if ( !pScan_mut )
                goto LABEL_36;
              _InterlockedIncrement64((volatile signed __int64 *)(v6 + 128));
              memset(v22, 0, sizeof(v22));
              RtlCaptureStackBackTrace(0, 0x14u, v22, 0LL);
              if ( (unsigned __int64)(pScan_mut & 0xFFF) + 16 >= 0x1000 )
              {
                if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                        v6,
                                        pScan_mut,
                                        j,
                                        v22) )
                  goto LABEL_10;
              }
              else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                           v6,
                                           pScan_mut,
                                           j,
                                           v22) )
              {
                pScan_mut += 16LL;
                goto LABEL_10;
              }
              _InterlockedIncrement64((volatile signed __int64 *)(v6 + 136));
              _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)pScan_mut);
              goto LABEL_36;
            }
            ++v19;
          }
        }
        pScan_mut = ExAllocatePool2(256LL, 112LL, 1852011335LL);
        if ( pScan_mut )
          _InterlockedIncrement64((volatile signed __int64 *)(v6 + 112));
        goto LABEL_10;
      }
    }
LABEL_36:
    pScan_mut = 0LL;
    goto LABEL_10;
  }
  v12 = (char *)qword_1402A10B0 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v4 + 8, 2LL);
  v13 = *(_QWORD *)v4;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64))(v13 + 144))(Pool2, 112LL);
  if ( !(*(unsigned int (__fastcall **)(__int64))(v13 + 216))(Pool2) )
    DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, Pool2, 0LL, 0LL, 0LL, 0LL, 0);
  ExReleasePushLockSharedEx(v12, 2LL);
  KeLeaveCriticalRegion();
  if ( !v14 )
  {
    GreDeleteFastMutex((char *)Pool2);
    return 0LL;
  }
  return (struct REGION_CORE *)v3;
}
