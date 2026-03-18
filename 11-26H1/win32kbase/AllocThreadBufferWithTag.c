/*
 * XREFs of AllocThreadBufferWithTag @ 0x1400B5520
 * Callers:
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1401646C0 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x14017BFA0 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall AllocThreadBufferWithTag(unsigned int a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rbp
  unsigned int v5; // ecx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  int v10; // eax
  __int64 Pool2; // rbx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v13; // rax
  unsigned __int64 *v15; // rax
  _DWORD *v16; // rax
  unsigned __int64 i; // r14
  char v18; // r15
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rcx
  PVOID BackTrace[23]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = 0LL;
  v4 = a2;
  if ( a1 >= 0xFFFFEFDF )
    return v3;
  if ( (a3 & 0x20) != 0 )
  {
    v5 = a1 + 32;
    if ( v5 > 0x400 && v5 + 4096 >= v5 )
      v5 = (v5 + 4095) & 0xFFFFF000;
    a1 = v5 - 32;
  }
  v6 = a1 + 32;
  if ( a1 == -32 )
    return v3;
  v9 = W32GetUserSessionState(a1, a2, a3) + 72016;
  v10 = *(_DWORD *)v9;
  if ( !*(_DWORD *)v9 )
  {
    Pool2 = ExAllocatePool2(258LL, (unsigned int)v6, (unsigned int)v4);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)(v9 + 112));
    goto LABEL_11;
  }
  if ( v10 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
           (NSInstrumentation::CLeakTrackingAllocator *)v9,
           v4) )
    {
      v7 = v6 + 16;
      if ( v6 + 16 < v6 )
      {
        Pool2 = 0LL;
      }
      else
      {
        v15 = (unsigned __int64 *)ExAllocatePool2(258LL, v7, (unsigned int)v4);
        Pool2 = (__int64)v15;
        v7 = v4;
        if ( !v15
          || (_InterlockedIncrement64((volatile signed __int64 *)(v9 + 112)),
              *v15 = v4,
              Pool2 = (__int64)(v15 + 2),
              v15 == (unsigned __int64 *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *(NSInstrumentation::CPointerHashTable **)(v9 + 8),
            (const void *)v4);
        }
      }
    }
    else
    {
      Pool2 = 0LL;
    }
    goto LABEL_11;
  }
  if ( v10 != 2 )
  {
LABEL_40:
    Pool2 = 0LL;
    goto LABEL_11;
  }
  if ( ((unsigned int)v4 & *(_DWORD *)(v9 + 80)) == (_DWORD)v4 )
  {
    v16 = (_DWORD *)(v9 + 48);
    for ( i = 0LL; ; ++i )
    {
      if ( i >= *(unsigned int *)(v9 + 84) )
        goto LABEL_25;
      if ( *v16 == (_DWORD)v4 )
        break;
      ++v16;
    }
    v18 = 0;
    if ( v6 < 0x1000 || (v6 & 0xFFF) != 0 )
    {
      v18 = 1;
      v6 += 16LL;
    }
    Pool2 = ExAllocatePool2(258LL, v6, (unsigned int)v4);
    if ( Pool2 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v9 + 128));
      memset(BackTrace, 0, 0xA0uLL);
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v18 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               v9,
               (const void *)Pool2,
               i,
               (NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_11;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v9,
                                   Pool2,
                                   i,
                                   BackTrace) )
      {
        goto LABEL_11;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v9 + 136));
      _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      goto LABEL_40;
    }
    goto LABEL_40;
  }
LABEL_25:
  Pool2 = ExAllocatePool2(258LL, v6, (unsigned int)v4);
  if ( Pool2 )
    _InterlockedIncrement64((volatile signed __int64 *)(v9 + 112));
LABEL_11:
  if ( !Pool2 )
    return v3;
  v3 = Pool2 + 32;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v8, v7);
  if ( !CurrentThreadWin32Thread || (v13 = *CurrentThreadWin32Thread) == 0 )
  {
    *(_QWORD *)(Pool2 + 16) = v3;
    *(_QWORD *)(Pool2 + 24) = FreeThreadBufferWithTag;
LABEL_15:
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    return v3;
  }
  v19 = v13 + 8;
  *(_QWORD *)(Pool2 + 16) = v3;
  *(_QWORD *)(Pool2 + 24) = FreeThreadBufferWithTag;
  if ( v13 == -8 )
    goto LABEL_15;
  v20 = (__int64 *)(v13 + 96);
  v21 = *(_QWORD *)(v19 + 88);
  if ( *(__int64 **)(v21 + 8) != v20 )
    __fastfail(3u);
  *(_QWORD *)(Pool2 + 8) = v20;
  *(_QWORD *)Pool2 = v21;
  *(_QWORD *)(v21 + 8) = Pool2;
  *v20 = Pool2;
  return Pool2 + 32;
}
