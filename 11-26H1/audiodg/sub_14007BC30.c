/*
 * XREFs of sub_14007BC30 @ 0x14007BC30
 * Callers:
 *     sub_140075D30 @ 0x140075D30 (sub_140075D30.c)
 *     sub_140075D60 @ 0x140075D60 (sub_140075D60.c)
 *     sub_140079F14 @ 0x140079F14 (sub_140079F14.c)
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14002EDE0 @ 0x14002EDE0 (sub_14002EDE0.c)
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_14007BC30(LPCRITICAL_SECTION lpCriticalSection, PSRWLOCK SRWLock)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  __m128i v10; // xmm1
  RTL_SRWLOCK *v11; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+58h] [rbp+10h] BYREF

  AcquireSRWLockShared(SRWLock);
  v11 = SRWLock;
  v4 = (*(_QWORD *)&lpCriticalSection[1].LockCount - (unsigned __int64)lpCriticalSection[1].DebugInfo) >> 4;
  sub_14002EDE0(&v11);
  v5 = 0LL;
  if ( v4 )
  {
    v12 = lpCriticalSection;
    v11 = SRWLock;
    do
    {
      v6 = 0LL;
      v7 = 0LL;
      EnterCriticalSection(lpCriticalSection);
      AcquireSRWLockExclusive(SRWLock);
      v8 = 16 * v5;
      while ( v5 < v4 )
      {
        DebugInfo = lpCriticalSection[1].DebugInfo;
        if ( *(_QWORD *)((char *)&DebugInfo->Type + v8) )
        {
          v10 = *((__m128i *)&DebugInfo->Type + v5++);
          v7 = _mm_srli_si128(v10, 8).m128i_u64[0];
          v6 = v10.m128i_i64[0];
          break;
        }
        ++v5;
        v8 += 16LL;
      }
      sub_14003A998(&v11);
      if ( v6 )
        sub_1400B6010(v7);
      sub_140018FF0(&v12);
    }
    while ( v5 < v4 );
  }
}
