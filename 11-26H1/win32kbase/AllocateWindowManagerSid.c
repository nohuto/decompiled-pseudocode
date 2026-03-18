/*
 * XREFs of AllocateWindowManagerSid @ 0x1401197D0
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x140043A00 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x140119760 (CheckDwmProcessSecurityIdentifier.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA?A_PPEAX@Z @ 0x1400431D0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_2af9a864ca5eb776d3057466a2e51944_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1400B5444 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400B6BAC (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1400B71E4 (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401B4ACC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall AllocateWindowManagerSid(__int64 *a1)
{
  unsigned __int64 v2; // rdi
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // rbx
  int v7; // eax
  __int64 Pool2; // rdi
  __int64 v9; // rdx
  NTSTATUS v10; // esi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 CurrentProcess; // rax
  ULONG ProcessSessionId; // ebx
  char v17; // r14
  _QWORD *v18; // rax
  _DWORD *v19; // rax
  unsigned __int64 i; // rbp
  PVOID BackTrace[20]; // [rsp+20h] [rbp-C8h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+C0h] [rbp-28h] BYREF

  *a1 = 0LL;
  v2 = RtlLengthRequiredSid(3u);
  v6 = W32GetUserSessionState(v4, v3, v5) + 72016;
  v7 = *(_DWORD *)v6;
  if ( !*(_DWORD *)v6 )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(257LL, v2, 1702064981LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 112));
    goto LABEL_4;
  }
  if ( v7 != 1 )
  {
    if ( v7 != 2 )
      return (unsigned int)-1073741801;
    if ( (*(_DWORD *)(v6 + 80) & 0x65737355) == 0x65737355 )
    {
      v19 = (_DWORD *)(v6 + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v6 + 84) )
          goto LABEL_2;
        if ( *v19 == 1702064981 )
          break;
        ++v19;
      }
      v17 = 0;
      if ( v2 < 0x1000 || (v2 & 0xFFF) != 0 )
      {
        v17 = 1;
        v2 += 16LL;
      }
      Pool2 = ExAllocatePool2(257LL, v2, 1702064981LL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 128));
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v17 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               v6,
               (const void *)Pool2,
               i,
               (NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_4;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v6,
                                   Pool2,
                                   i,
                                   BackTrace) )
      {
        goto LABEL_5;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v6 + 136));
      _lambda_2af9a864ca5eb776d3057466a2e51944_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      return (unsigned int)-1073741801;
    }
    goto LABEL_2;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
          (NSInstrumentation::CLeakTrackingAllocator *)v6,
          0x65737355u)
    || v2 + 16 < v2 )
  {
    return (unsigned int)-1073741801;
  }
  v18 = (_QWORD *)ExAllocatePool2(257LL, v2 + 16, 1702064981LL);
  Pool2 = (__int64)v18;
  if ( !v18
    || (_InterlockedIncrement64((volatile signed __int64 *)(v6 + 112)),
        *v18 = 1702064981LL,
        Pool2 = (__int64)(v18 + 2),
        v18 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *(NSInstrumentation::CPointerHashTable **)(v6 + 8),
      0x65737355uLL);
  }
LABEL_4:
  if ( !Pool2 )
    return (unsigned int)-1073741801;
LABEL_5:
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v10 = RtlInitializeSid((PSID)Pool2, &IdentifierAuthority, 3u);
  if ( v10 < 0 )
  {
    GreDeleteFastMutex((char *)Pool2, v9, v11, v12);
  }
  else
  {
    *RtlSubAuthoritySid((PSID)Pool2, 0) = 90;
    *RtlSubAuthoritySid((PSID)Pool2, 1u) = 0;
    CurrentProcess = PsGetCurrentProcess(v13);
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    *RtlSubAuthoritySid((PSID)Pool2, 2u) = ProcessSessionId;
    *a1 = Pool2;
  }
  return (unsigned int)v10;
}
