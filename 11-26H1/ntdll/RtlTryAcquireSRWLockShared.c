/*
 * XREFs of RtlTryAcquireSRWLockShared @ 0x180050CE0
 * Callers:
 *     EtwpGetNextRegistration @ 0x180050820 (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x180050B20 (EtwpFindRegistration.c)
 *     RtlQueryCriticalSectionOwner @ 0x180090B90 (RtlQueryCriticalSectionOwner.c)
 * Callees:
 *     RtlBackoff @ 0x180013BB0 (RtlBackoff.c)
 *     RtlAbPostRelease @ 0x180079680 (RtlAbPostRelease.c)
 *     RtlAbPreAcquire @ 0x1800BD6D0 (RtlAbPreAcquire.c)
 */

char __fastcall RtlTryAcquireSRWLockShared(__int64 a1)
{
  char v1; // bl
  __int64 v2; // r9
  volatile signed __int64 *v3; // r11
  signed __int64 v4; // rax
  signed __int64 v6; // rcx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v7 = 0;
  v2 = RtlAbPreAcquire(a1, 0LL);
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
    RtlBackoff(&v7);
    _m_prefetchw((const void *)v3);
    v4 = *v3;
  }
  RtlAbPostRelease(v3, v2);
  return v1;
}
