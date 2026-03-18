/*
 * XREFs of CiSystemDetectPotentiallyStarvedProcessors @ 0x140003770
 * Callers:
 *     CiSchedulerWait @ 0x140001990 (CiSchedulerWait.c)
 * Callees:
 *     __security_check_cookie @ 0x1400057E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400058C0 (_guard_dispatch_icall.c)
 */

void CiSystemDetectPotentiallyStarvedProcessors()
{
  int v0; // r12d
  unsigned int v1; // ebx
  unsigned int v2; // r15d
  char v3; // bp
  __int64 v4; // r14
  __int64 v5; // rsi
  char v6; // di
  __int64 v7; // r8
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]

  if ( !CiSchedulerDisallowLazyMode )
  {
    v0 = 0;
    v1 = 0;
    v2 = byte_14000A338;
    CiPotentiallyStarvedProcessors = 0LL;
    if ( !byte_14000A338 )
      goto LABEL_7;
    v3 = 0;
    v4 = 0LL;
    do
    {
      *((_QWORD *)&v10 + 1) = 0LL;
      v5 = v4 + CiLastIdleStats;
      v11 = 0LL;
      *(_QWORD *)&v10 = *(_QWORD *)(v4 + CiLastIdleStats);
      v6 = PoCpuIdledSinceLastCallImprecise(v1, &v10);
      *((_QWORD *)&v10 + 1) += (*(__int64 (__fastcall **)(_QWORD, __int64))(CiKernelInterface + 8))(v1, 1LL);
      *((_QWORD *)&v10 + 1) += (*(__int64 (__fastcall **)(_QWORD, __int64))(CiKernelInterface + 8))(v1, 2LL);
      *((_QWORD *)&v10 + 1) += (*(__int64 (__fastcall **)(_QWORD, __int64))(CiKernelInterface + 8))(v1, 3LL);
      v7 = (*(__int64 (__fastcall **)(_QWORD))(CiKernelInterface + 16))(v1) + v11;
      v11 = v7;
      if ( !v6 )
      {
        v8 = (unsigned __int64)(unsigned int)(100 - CiSystemResponsiveness) * (v7 - *(_QWORD *)(v5 + 16)) / 0x64;
        v9 = (90 * v8 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
        if ( *((_QWORD *)&v10 + 1) - *(_QWORD *)(v5 + 8) > (v9 + ((90 * v8 - v9) >> 1)) >> 6 )
          CiPotentiallyStarvedProcessors |= 1LL << v3;
      }
      ++v1;
      ++v3;
      v4 += 24LL;
      *(_OWORD *)v5 = v10;
      *(_QWORD *)(v5 + 16) = v11;
    }
    while ( v1 < v2 );
    if ( !CiPotentiallyStarvedProcessors )
LABEL_7:
      v0 = (2 * CiProcessorIdleHistoryBits) | 1;
    CiProcessorIdleHistoryBits = CiSchedulerIdleCycleBitMask & v0;
  }
}
