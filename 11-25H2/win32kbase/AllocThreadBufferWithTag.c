/*
 * XREFs of AllocThreadBufferWithTag @ 0x1400B5AE0
 * Callers:
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1400B5700 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1400B5A20 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 * Callees:
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64_&_ @ 0x1400BF974 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1401567DC (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ACBC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall AllocThreadBufferWithTag(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned int v6; // ecx
  unsigned __int64 v7; // rbx
  __int64 UserSessionState; // rax
  __int64 v9; // r14
  int v10; // eax
  __int64 UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64; // rbx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // rax
  __int64 *v16; // rdi
  unsigned __int64 *Pool2; // rax
  char v19; // r15
  __int64 v20; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v22[2]; // [rsp+30h] [rbp-D8h] BYREF
  PVOID BackTrace[20]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v24; // [rsp+110h] [rbp+8h] BYREF
  unsigned __int64 v25; // [rsp+128h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = (unsigned int)a2;
  v5 = 0LL;
  if ( (unsigned int)a1 < 0xFFFFEFDF )
  {
    if ( (a3 & 0x20) != 0 )
    {
      v6 = a1 + 32;
      if ( v6 > 0x400 && v6 + 4096 >= v6 )
        v6 = (v6 + 4095) & 0xFFFFF000;
      a1 = v6 - 32;
    }
    v7 = (unsigned int)(a1 + 32);
    if ( (_DWORD)a1 != -32 )
    {
      UserSessionState = W32GetUserSessionState(a1, a2);
      v24 = v4;
      v20 = 256LL;
      v21 = v7;
      v9 = UserSessionState + 72032;
      v10 = *(_DWORD *)(UserSessionState + 72032);
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                 (NSInstrumentation::CLeakTrackingAllocator *)v9,
                 v4) )
          {
            if ( v7 + 16 < v7 )
            {
              UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = 0LL;
            }
            else
            {
              Pool2 = (unsigned __int64 *)ExAllocatePool2(v20 | 2, v7 + 16, v24);
              UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = (__int64)Pool2;
              if ( !Pool2
                || (_InterlockedIncrement64((volatile signed __int64 *)(v9 + 112)),
                    *Pool2 = v4,
                    UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = (__int64)(Pool2 + 2),
                    Pool2 == (unsigned __int64 *)-16LL) )
              {
                NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                  *(NSInstrumentation::CPointerHashTable **)(v9 + 8),
                  v4);
              }
            }
          }
          else
          {
            UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = 0LL;
          }
        }
        else
        {
          if ( v10 == 2 )
          {
            v25 = 0LL;
            if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                    (NSInstrumentation::CLeakTrackingAllocator *)v9,
                    v4,
                    &v25) )
            {
              v22[0] = &v20;
              v22[1] = &v24;
              UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64___(
                                                                                                 v9,
                                                                                                 v22,
                                                                                                 &v21);
              goto LABEL_11;
            }
            v19 = 0;
            if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
            {
              v7 += 16LL;
              v19 = 1;
              v21 = v7;
            }
            UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = ExAllocatePool2(
                                                                                               258LL,
                                                                                               v7,
                                                                                               (unsigned int)v4);
            if ( UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v9 + 128));
              memset(BackTrace, 0, sizeof(BackTrace));
              RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
              if ( v19
                && (unsigned __int64)(UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 & 0xFFF)
                 + 16 < 0x1000 )
              {
                if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                        v9,
                                        UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64,
                                        v25,
                                        BackTrace) )
                {
                  UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 += 16LL;
                  goto LABEL_11;
                }
              }
              else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                           v9,
                                           UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64,
                                           v25,
                                           BackTrace) )
              {
                goto LABEL_11;
              }
              _InterlockedIncrement64((volatile signed __int64 *)(v9 + 136));
              _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64);
            }
          }
          UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = 0LL;
        }
      }
      else
      {
        UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = ExAllocatePool2(
                                                                                           258LL,
                                                                                           (unsigned int)v7,
                                                                                           (unsigned int)v4);
        if ( UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 )
          _InterlockedIncrement64((volatile signed __int64 *)(v9 + 112));
      }
LABEL_11:
      if ( !UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 )
        return v5;
      v5 = UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 + 32;
      CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
      if ( CurrentThreadNonPaged )
      {
        v13 = *CurrentThreadNonPaged;
        v14 = *CurrentThreadNonPaged == 0;
        *(_QWORD *)(UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 + 16) = v5;
        if ( !v14 )
          v3 = v13 + 8;
        *(_QWORD *)(UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 + 24) = FreeThreadBufferWithTag;
        if ( v3 )
        {
          v15 = *(_QWORD *)(v3 + 88);
          v16 = (__int64 *)(v3 + 88);
          if ( *(__int64 **)(v15 + 8) != v16 )
            __fastfail(3u);
          *(_QWORD *)UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = v15;
          *(_QWORD *)(UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 + 8) = v16;
          *(_QWORD *)(v15 + 8) = UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64;
          *v16 = UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64;
          return v5;
        }
      }
      else
      {
        *(_QWORD *)(UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 + 16) = v5;
        *(_QWORD *)(UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 + 24) = FreeThreadBufferWithTag;
      }
      *(_QWORD *)(UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 + 8) = UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64;
      *(_QWORD *)UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64;
    }
  }
  return v5;
}
