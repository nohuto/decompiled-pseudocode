/*
 * XREFs of AllocAce @ 0x140049D70
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1400492B0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     HMInitializeSecurityDescriptor @ 0x140126874 (HMInitializeSecurityDescriptor.c)
 *     InitSecurity @ 0x1402E97F0 (InitSecurity.c)
 * Callees:
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x14000C940 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x14000D154 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001EBA0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ABF4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019ACBC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall AllocAce(PVOID Buffer, char a2, char a3, int a4, PSID Sid, _DWORD *a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  ULONG v9; // r12d
  size_t v10; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rdx
  _QWORD *Pool2; // rax
  _DWORD *v18; // rax
  unsigned __int64 i; // rbp
  char v20; // r15
  PVOID BackTrace[27]; // [rsp+20h] [rbp-D8h] BYREF
  ULONG DestinationSidLength; // [rsp+100h] [rbp+8h]

  DestinationSidLength = RtlLengthSid(Sid);
  v9 = DestinationSidLength + 8;
  if ( !Buffer )
  {
    LODWORD(v10) = 0;
    v14 = Win32AllocPoolWithQuotaZInitImpl(v8, v9, 0x65737355u);
    if ( v14 )
      goto LABEL_8;
    return 0LL;
  }
  v10 = (unsigned int)*a6;
  v11 = v9 + (unsigned int)v10;
  if ( (unsigned int)v11 < (unsigned int)v10 )
    return 0LL;
  v12 = W32GetUserSessionState(v8, v7) + 72032;
  v13 = *(_DWORD *)v12;
  if ( *(_DWORD *)v12 )
  {
    if ( v13 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
              (NSInstrumentation::CLeakTrackingAllocator *)v12,
              0x65737355u)
        || v11 + 16 < v11 )
      {
        return 0LL;
      }
      Pool2 = (_QWORD *)ExAllocatePool2(257LL, v11 + 16, 1702064981LL);
      v14 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)(v12 + 112)),
            *Pool2 = 1702064981LL,
            v14 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *(NSInstrumentation::CPointerHashTable **)(v12 + 8),
          0x65737355uLL);
      }
      goto LABEL_6;
    }
    if ( v13 != 2 )
      return 0LL;
    if ( (*(_DWORD *)(v12 + 80) & 0x65737355) == 0x65737355 )
    {
      v18 = (_DWORD *)(v12 + 48);
      for ( i = 0LL; i < *(unsigned int *)(v12 + 84); ++i )
      {
        if ( *v18 == 1702064981 )
        {
          v20 = 0;
          if ( v11 < 0x1000 || (((_WORD)v9 + (_WORD)v10) & 0xFFF) != 0 )
          {
            v20 = 1;
            v11 += 16LL;
          }
          v14 = ExAllocatePool2(257LL, v11, 1702064981LL);
          if ( v14 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)(v12 + 128));
            memset(BackTrace, 0, 0xA0uLL);
            RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
            if ( v20 && (unsigned __int64)(v14 & 0xFFF) + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v12,
                                      v14,
                                      i,
                                      BackTrace) )
              {
                v14 += 16LL;
                goto LABEL_6;
              }
            }
            else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                         v12,
                                         v14,
                                         i,
                                         BackTrace) )
            {
              goto LABEL_7;
            }
            _InterlockedIncrement64((volatile signed __int64 *)(v12 + 136));
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v14);
          }
          return 0LL;
        }
        ++v18;
      }
    }
  }
  v14 = ExAllocatePool2(257LL, v9 + (unsigned int)v10, 1702064981LL);
  if ( v14 )
    _InterlockedIncrement64((volatile signed __int64 *)(v12 + 112));
LABEL_6:
  if ( v14 )
  {
LABEL_7:
    memmove((void *)v14, Buffer, v10);
    GreDeleteFastMutex((char *)Buffer);
LABEL_8:
    v15 = v14 + (unsigned int)v10;
    *a6 = v9 + v10;
    *(_BYTE *)v15 = a2;
    *(_BYTE *)(v15 + 1) = a3;
    *(_DWORD *)(v15 + 4) = a4;
    *(_WORD *)(v15 + 2) = v9;
    RtlCopySid(DestinationSidLength, (PSID)(v15 + 8), Sid);
    return v14;
  }
  return 0LL;
}
