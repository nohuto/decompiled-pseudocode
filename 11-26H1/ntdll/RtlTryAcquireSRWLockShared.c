/*
 * XREFs of RtlTryAcquireSRWLockShared @ 0x18003B260
 * Callers:
 *     EtwpGetNextRegistration @ 0x18003ADA0 (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x18003B0A0 (EtwpFindRegistration.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800758F0 (RtlQueryCriticalSectionOwner.c)
 * Callees:
 *     RtlBackoff @ 0x18005F2E0 (RtlBackoff.c)
 *     RtlAbPostRelease @ 0x180067EA0 (RtlAbPostRelease.c)
 *     RtlAbPreAcquire @ 0x1800BAC00 (RtlAbPreAcquire.c)
 */

BOOLEAN __cdecl RtlTryAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  BOOLEAN v1; // bl
  __int64 v2; // r9
  volatile signed __int64 *v3; // r11
  signed __int64 v4; // rax
  signed __int64 v6; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v7 = 0;
  v2 = RtlAbPreAcquire(SRWLock, 0LL);
  v4 = _InterlockedCompareExchange64(v3, 17LL, 0LL);
  if ( !v4 )
    return 1;
  while ( (v4 & 2) == 0 && ((v4 & 1) == 0 || (v4 & 0xFFFFFFFFFFFFFFF0uLL) != 0)
       || RtlpSrwLockAllowImplicitUpgrade && (v4 & 1) == 0 )
  {
    v6 = (v4 | 1) + 16;
    if ( (v4 & 2) != 0 )
      v6 = v4 | 1;
    if ( v4 == _InterlockedCompareExchange64(v3, v6, v4) )
      return 1;
    RtlBackoff(&v7, v4 | 1);
    _m_prefetchw((const void *)v3);
    v4 = *v3;
  }
  RtlAbPostRelease(v3, v2);
  return v1;
}
