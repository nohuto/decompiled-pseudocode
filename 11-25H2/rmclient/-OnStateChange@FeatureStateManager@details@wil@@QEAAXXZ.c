/*
 * XREFs of ?OnStateChange@FeatureStateManager@details@wil@@QEAAXXZ @ 0x18000EA90
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_1ad7ecfab602a777ecf020873216a663_@@CA@PEAX@Z @ 0x180012190 (-_lambda_invoker_cdecl_@_lambda_1ad7ecfab602a777ecf020873216a663_@@CA@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::FeatureStateManager::OnStateChange(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rsi
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  void (__fastcall *v5)(unsigned __int64); // r14
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  __m128i v9; // xmm1

  if ( LOBYTE(this->Ptr) )
  {
    v1 = this + 4;
    v2 = (struct _RTL_CRITICAL_SECTION *)&this[9];
    AcquireSRWLockShared(this + 4);
    v3 = (*(_QWORD *)&v2[1].LockCount - (unsigned __int64)v2[1].DebugInfo) >> 4;
    if ( v1 )
      ReleaseSRWLockShared(v1);
    v4 = 0LL;
    while ( v4 < v3 )
    {
      v5 = 0LL;
      v6 = 0LL;
      EnterCriticalSection(v2);
      AcquireSRWLockExclusive(v1);
      v7 = 16 * v4;
      while ( v4 < v3 )
      {
        DebugInfo = v2[1].DebugInfo;
        if ( *(_QWORD *)((char *)&DebugInfo->Type + v7) )
        {
          v9 = *((__m128i *)&DebugInfo->Type + v4++);
          v5 = (void (__fastcall *)(unsigned __int64))v9.m128i_i64[0];
          v6 = _mm_srli_si128(v9, 8).m128i_u64[0];
          break;
        }
        ++v4;
        v7 += 16LL;
      }
      if ( v1 )
        ReleaseSRWLockExclusive(v1);
      if ( v5 )
        v5(v6);
      if ( v2 )
        LeaveCriticalSection(v2);
    }
  }
}
