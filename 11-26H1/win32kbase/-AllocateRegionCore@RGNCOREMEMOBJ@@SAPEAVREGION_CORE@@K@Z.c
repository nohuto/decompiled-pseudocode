/*
 * XREFs of ?AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z @ 0x140044D44
 * Callers:
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x140044A0C (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ??0RGNCOREMEMOBJ@@QEAA@XZ @ 0x140044C7C (--0RGNCOREMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x140043780 (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?set_sizeScanAlloc@REGION_CORE@@IEAAXK@Z @ 0x1401214AC (-set_sizeScanAlloc@REGION_CORE@@IEAAXK@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

struct REGION_CORE *__fastcall RGNCOREMEMOBJ::AllocateRegionCore(int a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v4; // eax
  __int64 Pool2; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rbx
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  _DWORD *v17; // rax
  unsigned __int64 i; // rbp
  PVOID BackTrace[20]; // [rsp+30h] [rbp-B8h] BYREF
  char **v20; // [rsp+F8h] [rbp+10h] BYREF

  v3 = W32GetUserSessionState(a1, a2, a3) + 72016;
  v4 = *(_DWORD *)v3;
  if ( !*(_DWORD *)v3 )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(256LL, 48LL, 1852273223LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)(v3 + 112));
    goto LABEL_4;
  }
  if ( v4 != 1 )
  {
    if ( v4 != 2 )
      return 0LL;
    if ( (*(_DWORD *)(v3 + 80) & 0x6E677247) == 0x6E677247 )
    {
      v17 = (_DWORD *)(v3 + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v3 + 84) )
          goto LABEL_2;
        if ( *v17 == 1852273223 )
          break;
        ++v17;
      }
      Pool2 = ExAllocatePool2(256LL, 64LL, 1852273223LL);
      if ( !Pool2 )
        return 0LL;
      _InterlockedIncrement64((volatile signed __int64 *)(v3 + 128));
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                v3,
                                Pool2,
                                i,
                                BackTrace) )
        {
          v6 = Pool2;
          goto LABEL_5;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                   v3,
                                   Pool2,
                                   i,
                                   BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_4;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v3 + 136));
      _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      return 0LL;
    }
    goto LABEL_2;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
          (NSInstrumentation::CLeakTrackingAllocator *)v3,
          0x6E677247u) )
    return 0LL;
  v16 = (_QWORD *)ExAllocatePool2(256LL, 64LL, 1852273223LL);
  Pool2 = (__int64)v16;
  if ( !v16
    || (_InterlockedIncrement64((volatile signed __int64 *)(v3 + 112)),
        *v16 = 1852273223LL,
        Pool2 = (__int64)(v16 + 2),
        v16 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *(NSInstrumentation::CPointerHashTable **)(v3 + 8),
      (const void *)0x6E677247);
  }
LABEL_4:
  v6 = Pool2;
  if ( !Pool2 )
    return 0LL;
LABEL_5:
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v11 = *(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 104LL))(
            Pool2,
            112LL);
    if ( !(*(unsigned int (__fastcall **)(__int64))(v11 + 176))(Pool2) )
      GrepCaptureLiveMemoryDump(400LL, 64LL, Pool2, 0LL, 0LL, 0);
    if ( !v12 )
    {
      GreDeleteFastMutex((char *)Pool2, v13, v14, v15);
      return 0LL;
    }
    return (struct REGION_CORE *)v6;
  }
  else
  {
    *(_QWORD *)Pool2 = Win32AllocPoolZInitImpl(0x100uLL, 0x70uLL, 0x6E637347u);
    if ( !REGION_CORE::get_pScan((REGION_CORE *)Pool2) )
    {
      v20 = (char **)Pool2;
      RGNCOREOBJ::vDeleteRGNCOREOBJ(&v20, v7, v8, v9);
      return 0LL;
    }
    REGION_CORE::set_sizeScanAlloc((REGION_CORE *)Pool2, 0x70u);
    return (struct REGION_CORE *)Pool2;
  }
}
