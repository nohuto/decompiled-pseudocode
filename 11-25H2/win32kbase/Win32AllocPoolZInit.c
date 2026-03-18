/*
 * XREFs of Win32AllocPoolZInit @ 0x14000B760
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ACBC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall Win32AllocPoolZInit(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rdi
  int v5; // eax
  __int64 Pool2; // rbx
  unsigned __int64 *v8; // rax
  _DWORD *v9; // rax
  unsigned __int64 i; // rbp
  char v11; // r14
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = a2;
  v4 = W32GetUserSessionState() + 72032;
  v5 = *(_DWORD *)v4;
  if ( !*(_DWORD *)v4 )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(256LL, a1, (unsigned int)v2);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)(v4 + 112));
    return Pool2;
  }
  if ( v5 != 1 )
  {
    if ( v5 == 2 )
    {
      if ( ((unsigned int)v2 & *(_DWORD *)(v4 + 80)) != (_DWORD)v2 )
        goto LABEL_2;
      v9 = (_DWORD *)(v4 + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v4 + 84) )
          goto LABEL_2;
        if ( *v9 == (_DWORD)v2 )
          break;
        ++v9;
      }
      v11 = 0;
      if ( a1 < 0x1000 || (a1 & 0xFFF) != 0 )
      {
        v11 = 1;
        a1 += 16LL;
      }
      Pool2 = ExAllocatePool2(256LL, a1, (unsigned int)v2);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v4 + 128));
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v11 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v4,
                                  Pool2,
                                  i,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v4,
                                     Pool2,
                                     i,
                                     BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v4 + 136));
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
          (NSInstrumentation::CLeakTrackingAllocator *)v4,
          v2)
    || a1 + 16 < a1 )
  {
    return 0LL;
  }
  v8 = (unsigned __int64 *)ExAllocatePool2(256LL, a1 + 16, (unsigned int)v2);
  Pool2 = (__int64)v8;
  if ( !v8
    || (_InterlockedIncrement64((volatile signed __int64 *)(v4 + 112)),
        *v8 = v2,
        Pool2 = (__int64)(v8 + 2),
        v8 == (unsigned __int64 *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *(NSInstrumentation::CPointerHashTable **)(v4 + 8),
      (const void *)v2);
  }
  return Pool2;
}
