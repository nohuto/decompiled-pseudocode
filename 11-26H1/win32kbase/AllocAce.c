/*
 * XREFs of AllocAce @ 0x140108680
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x140043A00 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     HMInitializeSecurityDescriptor @ 0x140107F60 (HMInitializeSecurityDescriptor.c)
 *     InitSecurity @ 0x1402F408C (InitSecurity.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14024BD80 (memset.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall AllocAce(PVOID Buffer, char a2, char a3, int a4, PSID Sid, _DWORD *a6)
{
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  ULONG v10; // r12d
  size_t v11; // r14
  unsigned __int64 v12; // rbx
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *Pool2; // rax
  _DWORD *v21; // rax
  unsigned __int64 i; // rbp
  char v23; // r15
  PVOID BackTrace[27]; // [rsp+20h] [rbp-D8h] BYREF
  ULONG DestinationSidLength; // [rsp+100h] [rbp+8h]

  DestinationSidLength = RtlLengthSid(Sid);
  v10 = DestinationSidLength + 8;
  if ( !Buffer )
  {
    v11 = 0LL;
    v15 = Win32AllocPoolWithQuotaZInitImpl(v8, v10, 0x65737355u);
    if ( v15 )
      goto LABEL_8;
    return 0LL;
  }
  v11 = (unsigned int)*a6;
  v12 = (unsigned int)v11 + v10;
  if ( (unsigned int)v12 < (unsigned int)v11 )
    return 0LL;
  v13 = W32GetUserSessionState(v8, v7, v9) + 72016;
  v14 = *(_DWORD *)v13;
  if ( *(_DWORD *)v13 )
  {
    if ( v14 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
              (NSInstrumentation::CLeakTrackingAllocator *)v13,
              0x65737355u)
        || v12 + 16 < v12 )
      {
        return 0LL;
      }
      Pool2 = (_QWORD *)ExAllocatePool2(257LL, v12 + 16, 1702064981LL);
      v15 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)(v13 + 112)),
            *Pool2 = 1702064981LL,
            v15 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *(NSInstrumentation::CPointerHashTable **)(v13 + 8),
          0x65737355uLL);
      }
      goto LABEL_6;
    }
    if ( v14 != 2 )
      return 0LL;
    if ( (*(_DWORD *)(v13 + 80) & 0x65737355) == 0x65737355 )
    {
      v21 = (_DWORD *)(v13 + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v13 + 84) )
          goto LABEL_4;
        if ( *v21 == 1702064981 )
          break;
        ++v21;
      }
      v23 = 0;
      if ( v12 < 0x1000 || (((_WORD)v11 + (_WORD)v10) & 0xFFF) != 0 )
      {
        v23 = 1;
        v12 += 16LL;
      }
      v15 = ExAllocatePool2(257LL, v12, 1702064981LL);
      if ( !v15 )
        return 0LL;
      _InterlockedIncrement64((volatile signed __int64 *)(v13 + 128));
      memset(BackTrace, 0, 0xA0uLL);
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v23 && (unsigned __int64)(v15 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               v13,
               (const void *)v15,
               i,
               (NSInstrumentation::CBackTrace *)BackTrace) )
        {
          v15 += 16LL;
          goto LABEL_6;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v13,
                                   v15,
                                   i,
                                   BackTrace) )
      {
        goto LABEL_7;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v13 + 136));
      _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)v15);
      return 0LL;
    }
  }
LABEL_4:
  v15 = ExAllocatePool2(257LL, (unsigned int)v11 + v10, 1702064981LL);
  if ( v15 )
    _InterlockedIncrement64((volatile signed __int64 *)(v13 + 112));
LABEL_6:
  if ( v15 )
  {
LABEL_7:
    memmove((void *)v15, Buffer, v11);
    GreDeleteFastMutex((char *)Buffer, v16, v17, v18);
LABEL_8:
    *a6 = v10 + v11;
    *(_BYTE *)(v11 + v15) = a2;
    *(_BYTE *)(v11 + v15 + 1) = a3;
    *(_DWORD *)(v11 + v15 + 4) = a4;
    *(_WORD *)(v11 + v15 + 2) = v10;
    RtlCopySid(DestinationSidLength, (PSID)(v15 + v11 + 8), Sid);
    return v15;
  }
  return 0LL;
}
