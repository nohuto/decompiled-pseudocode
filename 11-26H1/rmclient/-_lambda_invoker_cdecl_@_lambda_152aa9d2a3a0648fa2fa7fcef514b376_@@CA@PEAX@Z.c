/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_152aa9d2a3a0648fa2fa7fcef514b376_@@CA@PEAX@Z @ 0x18000A9D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall _lambda_152aa9d2a3a0648fa2fa7fcef514b376_::_lambda_invoker_cdecl_(RTL_SRWLOCK *a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  RTL_SRWLOCK *v2; // r14
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  void (__fastcall *v5)(unsigned __int64); // rbp
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  __m128i v9; // xmm1

  if ( LOBYTE(a1->Ptr) )
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)&a1[19];
    v2 = a1 + 4;
    AcquireSRWLockShared(a1 + 4);
    v3 = (*(_QWORD *)&v1[1].LockCount - (unsigned __int64)v1[1].DebugInfo) >> 4;
    if ( v2 )
      ReleaseSRWLockShared(v2);
    v4 = 0LL;
    while ( v4 < v3 )
    {
      v5 = 0LL;
      v6 = 0LL;
      EnterCriticalSection(v1);
      AcquireSRWLockExclusive(v2);
      v7 = 16 * v4;
      while ( v4 < v3 )
      {
        DebugInfo = v1[1].DebugInfo;
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
      if ( v2 )
        ReleaseSRWLockExclusive(v2);
      if ( v5 )
        v5(v6);
      if ( v1 )
        LeaveCriticalSection(v1);
    }
  }
}
