/*
 * XREFs of ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0
 * Callers:
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x14000F0A4 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x14000F920 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140015950 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     GreCreateRectRgnIndirect @ 0x14001E880 (GreCreateRectRgnIndirect.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x140021698 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140021D3C (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z @ 0x140022C50 (--$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x140022E10 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ @ 0x140016244 (-Allocate@-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400164D4 (--$FreeIsolatedType@V-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x140016B60 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140021EE0 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ?GreAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400431F0 (-GreAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140043320 (-GreReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B72D4 (-LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x1400B80E4 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x1400B8320 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C1164 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     _GrepCaptureLiveMemoryDump_::_2_::_lambda_1_::operator() @ 0x1401C205C (_GrepCaptureLiveMemoryDump_--_2_--_lambda_1_--operator().c)
 *     ??1Serializer@NSInstrumentation@@QEAA@XZ @ 0x1401EE3EC (--1Serializer@NSInstrumentation@@QEAA@XZ.c)
 *     ?Deserialize@?$DeserializedTypeIsolationFactory@V?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CDeserializedTypeIsolation@$0KAAA@$0KA@@2@V?$CDeserializedTypeIsolation@$0MAAA@$0MA@@2@V?$CDeserializedTypeIsolation@$0JAAA@$0JA@@2@V?$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@2@V?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@2@V?$CDeserializedTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAEAEAVDeserializer@NSInstrumentation@@@Z @ 0x1401EF4F4 (-Deserialize@-$DeserializedTypeIsolationFactory@V-$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSI.c)
 *     ?Serialize@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAEAEAVSerializer@NSInstrumentation@@@Z @ 0x1401F0640 (-Serialize@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

struct REGION *__fastcall RGNMEMOBJ::AllocateRegion(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rcx
  _QWORD *v3; // rsi
  PVOID DeferredContext; // rax
  __int64 *v5; // rbx
  unsigned __int64 v6; // r15
  unsigned __int8 *v7; // rbp
  void *v8; // rdx
  __int64 v9; // rdi
  void *v10; // rax
  _QWORD *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v15; // rbx
  int v16; // ebp
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // r15
  __int64 v22; // r13
  void *v23; // rax
  void *v24; // rbx
  __int64 v25; // rax
  _QWORD *v26; // r15
  _QWORD *Pool2; // rax
  _DWORD *v28; // rax
  unsigned __int64 i; // r12
  char v30; // r13
  void *v31; // r8
  unsigned int v32; // eax
  REGION_CORE *v33; // rcx
  struct SCAN *v34; // rax
  unsigned int sizeScanAlloc; // eax
  REGION_CORE *v36; // rcx
  struct SCAN *pScan; // rax
  struct SCAN *v38; // rax
  struct SCAN *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v43; // [rsp+58h] [rbp-F0h]
  __int128 v44; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+70h] [rbp-D8h]
  __int64 v46; // [rsp+78h] [rbp-D0h]
  PVOID BackTrace[20]; // [rsp+80h] [rbp-C8h] BYREF

  v1 = (unsigned int)a1;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4384LL) + 56LL) )
    return 0LL;
  v3 = (_QWORD *)NSInstrumentation::CTypeIsolation<32768,128>::Allocate();
  if ( v3 )
  {
    DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      v15 = *(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext;
      v16 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 104LL))(
              v3 + 3,
              (unsigned int)v1);
      if ( !(*(unsigned int (__fastcall **)(_QWORD *))(v15 + 176))(v3 + 3) )
      {
        v22 = *(_QWORD *)(W32GetSessionState(v17) + 88);
        if ( v22 != -3736 )
          GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v22 + 3736));
        v23 = (void *)PALLOCMEM(1572864LL, 1886221383LL);
        v24 = v23;
        if ( v23 )
        {
          memmove(v23, *(const void **)(v22 + 1856), 0x180000uLL);
          *(_QWORD *)(v22 + 3752) = v24;
        }
        else
        {
          EngSetLastError(8u);
        }
        v25 = PALLOCMEM(64LL, 1869834581LL);
        *(_QWORD *)(v22 + 3744) = v25;
        if ( v25 )
        {
          v40 = *(_QWORD *)(v22 + 4384);
          v45 = 0LL;
          v44 = 0LL;
          v46 = 0LL;
          if ( (unsigned __int8)gdi::TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<32768,128>>::Serialize(
                                  v40,
                                  &v44) )
          {
            v41 = *(_QWORD *)(v22 + 3744);
            v42 = v44;
            v43 = v45;
            gdi::DeserializedTypeIsolationFactory<NSInstrumentation::CDeserializedTypeIsolation<180224,704>,NSInstrumentation::CDeserializedTypeIsolation<40960,160>,NSInstrumentation::CDeserializedTypeIsolation<49152,192>,NSInstrumentation::CDeserializedTypeIsolation<36864,144>,NSInstrumentation::CDeserializedTypeIsolation<81920,320>,NSInstrumentation::CDeserializedTypeIsolation<909312,3552>,NSInstrumentation::CDeserializedTypeIsolation<32768,128>>::Deserialize(
              v41,
              &v42);
          }
          NSInstrumentation::Serializer::~Serializer((NSInstrumentation::Serializer *)&v44);
        }
        v42 = v22;
        DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v3 + 3, 0LL, 0LL, 0LL, 0LL, 0);
        LOBYTE(v43) = 0;
        GrepCaptureLiveMemoryDump_::_2_::_lambda_1_::operator()(&v42);
        if ( v24 )
          GreDeleteFastMutex(v24);
        if ( v22 != -3736 )
          GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v22 + 3736));
      }
      if ( !v16 )
      {
        v18 = *(_QWORD *)(W32GetSessionState(v17) + 88);
        if ( v3 != *(_QWORD **)(v18 + 4264) )
        {
          if ( WPP_MAIN_CB.Dpc.DeferredContext )
          {
            (*(void (__fastcall **)(_QWORD *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 112LL))(v3 + 3);
          }
          else if ( v3[3] )
          {
            sizeScanAlloc = REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(v3 + 3));
            v36 = (REGION_CORE *)(v3 + 3);
            if ( sizeScanAlloc == 112 )
            {
              pScan = REGION_CORE::get_pScan(v36);
              Win32FreeToPagedLookasideListImpl(*(void **)(v18 + 4240), pScan);
            }
            else if ( REGION_CORE::get_sizeScanAlloc(v36) > 0x70 )
            {
              v39 = REGION_CORE::get_pScan((REGION_CORE *)(v3 + 3));
              GreDeleteFastMutex(v39);
            }
            v3[3] = 0LL;
          }
          if ( v3[14] )
          {
            ReleaseReferenceCountedObjectHandle(2LL);
            v3[14] = 0LL;
          }
          FreeIsolatedType<NSInstrumentation::CTypeIsolation<32768,128>>(v3);
        }
        return 0LL;
      }
      return (struct REGION *)v3;
    }
    v5 = v3 + 3;
    v3[5] = 0LL;
    v6 = (unsigned int)v1;
    v3[4] = v1;
    if ( v1 < v3[5] )
    {
      v3[5] = (unsigned int)v1;
      GrepCaptureLiveMemoryDump(400LL, 64LL, 0LL, 0LL, 0LL, 0);
      DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
    }
    if ( (_DWORD)v1 == 112 )
    {
      v7 = *(unsigned __int8 **)(*(_QWORD *)(W32GetSessionState(v2) + 88) + 4240LL);
      v9 = W32GetUserSessionState() + 72016;
      if ( v7[5] )
      {
        v26 = NSInstrumentation::PlatformAllocateFromPagedLookasideList((NSInstrumentation *)(v7 + 16), v8);
        if ( v26 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v9 + 128));
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v9,
                                  v26,
                                  v7[4],
                                  BackTrace) )
            goto LABEL_52;
          _InterlockedIncrement64((volatile signed __int64 *)(v9 + 136));
          NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(v7 + 16), v26, v31);
        }
      }
      else
      {
        if ( !*(_DWORD *)v9 || *(_DWORD *)v9 == 2 )
        {
          v10 = NSInstrumentation::PlatformAllocateFromPagedLookasideList((NSInstrumentation *)(v7 + 16), v8);
          if ( v10 )
            _InterlockedIncrement64((volatile signed __int64 *)(v9 + 112));
          goto LABEL_11;
        }
        v26 = NSInstrumentation::PlatformAllocateFromPagedLookasideList((NSInstrumentation *)(v7 + 16), v8);
        if ( v26 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v9 + 112));
          NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
            *(NSInstrumentation::CPointerHashTable **)(v9 + 8),
            (const void *)*(unsigned int *)v7);
          v2 = *(unsigned int *)v7;
          *v26 = v2;
LABEL_52:
          v10 = v26 + 2;
LABEL_11:
          *v5 = (__int64)v10;
          v11 = v3;
LABEL_12:
          DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
          goto LABEL_13;
        }
      }
      v10 = 0LL;
      goto LABEL_11;
    }
    v11 = v3;
    if ( (unsigned int)v1 <= 0x70 )
    {
LABEL_13:
      if ( DeferredContext )
        v12 = (*(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)DeferredContext + 208LL))(v3 + 3);
      else
        v12 = *v5;
      if ( !v12 )
      {
        v13 = *(_QWORD *)(W32GetSessionState(v2) + 88);
        if ( v11 != *(_QWORD **)(v13 + 4264) )
        {
          if ( WPP_MAIN_CB.Dpc.DeferredContext )
          {
            (*(void (__fastcall **)(__int64 *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 112LL))(v5);
          }
          else if ( *v5 )
          {
            v32 = REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(v3 + 3));
            v33 = (REGION_CORE *)(v3 + 3);
            if ( v32 == 112 )
            {
              v34 = REGION_CORE::get_pScan(v33);
              Win32FreeToPagedLookasideListImpl(*(void **)(v13 + 4240), v34);
            }
            else if ( REGION_CORE::get_sizeScanAlloc(v33) > 0x70 )
            {
              v38 = REGION_CORE::get_pScan((REGION_CORE *)(v3 + 3));
              GreDeleteFastMutex(v38);
            }
            *v5 = 0LL;
          }
          if ( v11[14] )
          {
            ReleaseReferenceCountedObjectHandle(2LL);
            v11[14] = 0LL;
          }
          FreeIsolatedType<NSInstrumentation::CTypeIsolation<32768,128>>(v11);
        }
        return 0LL;
      }
      return (struct REGION *)v3;
    }
    v19 = W32GetUserSessionState() + 72016;
    v20 = *(_DWORD *)v19;
    if ( !*(_DWORD *)v19 )
      goto LABEL_34;
    if ( v20 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
             (NSInstrumentation::CLeakTrackingAllocator *)v19,
             0x6E637347u)
        && v6 + 16 >= v6 )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(258LL, v6 + 16, 1852011335LL);
        v21 = (__int64)Pool2;
        if ( !Pool2
          || (_InterlockedIncrement64((volatile signed __int64 *)(v19 + 112)),
              *Pool2 = 1852011335LL,
              v21 = (__int64)(Pool2 + 2),
              Pool2 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *(NSInstrumentation::CPointerHashTable **)(v19 + 8),
            (const void *)0x6E637347);
          *v5 = v21;
          goto LABEL_12;
        }
        goto LABEL_36;
      }
    }
    else if ( v20 == 2 )
    {
      if ( (*(_DWORD *)(v19 + 80) & 0x6E637347) != 0x6E637347 )
      {
LABEL_34:
        v21 = ExAllocatePool2(258LL, v6, 1852011335LL);
        if ( v21 )
          _InterlockedIncrement64((volatile signed __int64 *)(v19 + 112));
        goto LABEL_36;
      }
      v28 = (_DWORD *)(v19 + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v19 + 84) )
          goto LABEL_34;
        if ( *v28 == 1852011335 )
          break;
        ++v28;
      }
      v30 = 0;
      if ( v6 < 0x1000 || (v6 & 0xFFF) != 0 )
      {
        v30 = 1;
        v6 += 16LL;
      }
      v21 = ExAllocatePool2(258LL, v6, 1852011335LL);
      if ( v21 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v19 + 128));
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v30 && (unsigned __int64)(v21 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v19,
                                  v21,
                                  i,
                                  BackTrace) )
          {
            *v5 = v21 + 16;
            goto LABEL_12;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v19,
                                     v21,
                                     i,
                                     BackTrace) )
        {
          goto LABEL_36;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v19 + 136));
        _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)v21);
      }
    }
    v21 = 0LL;
LABEL_36:
    *v5 = v21;
    goto LABEL_12;
  }
  return (struct REGION *)v3;
}
