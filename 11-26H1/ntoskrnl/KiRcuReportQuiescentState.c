/*
 * XREFs of KiRcuReportQuiescentState @ 0x1404D99B8
 * Callers:
 *     KiCheckWaitNext @ 0x1402200D0 (KiCheckWaitNext.c)
 *     KiRcuCheckQuiescent @ 0x140221E10 (KiRcuCheckQuiescent.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KiRcuCheckQuiescentForIdle @ 0x1405F0068 (KiRcuCheckQuiescentForIdle.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140330C68 (KxTryToAcquireSpinLock.c)
 *     KiSrcuCompareGraceSequence @ 0x1404D9AC0 (KiSrcuCompareGraceSequence.c)
 */

__int64 __fastcall KiRcuReportQuiescentState(unsigned __int64 *a1, signed __int64 a2, int a3)
{
  unsigned int v3; // edi
  unsigned __int64 *v4; // rbx
  signed __int64 *v5; // r14
  unsigned __int64 v6; // r12
  int v7; // r15d
  int v8; // eax
  KSPIN_LOCK *v11; // rcx
  int v12; // eax
  signed __int64 v13; // r8
  signed __int32 v15; // eax
  signed __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int64 *v20; // rdx
  signed __int32 v21; // ett

  v3 = 1;
  v4 = (unsigned __int64 *)a1[1];
  v5 = (signed __int64 *)(a1[2] + 14576);
  v6 = *a1;
  v7 = 1;
  v8 = a3;
  while ( v4 )
  {
    v11 = v4 + 3;
    if ( v8 )
    {
      KxAcquireSpinLock(v11);
    }
    else if ( !KxTryToAcquireSpinLock((volatile signed __int32 *)v11) )
    {
      if ( !v7 )
      {
        _m_prefetchw(&dword_140F24FA4);
        v15 = dword_140F24FA4;
        do
        {
          v21 = v15;
          v15 = _InterlockedCompareExchange(&dword_140F24FA4, v15 | 1, v15);
        }
        while ( v21 != v15 );
        if ( (v15 & 1) == 0 )
          KiInsertQueueDpc((ULONG_PTR)&dword_140F24F40, 0LL, 0LL, 0LL, 0);
      }
      return 0LL;
    }
    if ( (v6 & v4[6]) != 0 )
      goto LABEL_8;
    if ( *v5 == a2 )
      goto LABEL_8;
    v12 = KiSrcuCompareGraceSequence(a2, v4[4]);
    if ( v12 < 0 )
      goto LABEL_8;
    v17 = v4[6];
    if ( v17 )
    {
      if ( v12 > 0 )
      {
        a2 = v13;
        v4[7] |= v6 | v17;
      }
    }
    else
    {
      v4[4] = a2;
    }
    *v5 = a2;
    v4[6] |= v6;
    if ( v4[6] != v4[2] )
    {
LABEL_8:
      KxReleaseSpinLock(v4 + 3);
      return 0LL;
    }
    if ( v7 )
    {
      v18 = v4[7];
      if ( v18 )
      {
        _BitScanForward64(&v19, *a1);
        v20 = &a1[-4 * v19];
        do
        {
          if ( (v18 & 1) != 0 && v20 != a1 )
            *(_QWORD *)(v20[2] + 14576) = a2;
          v20 += 4;
          v18 >>= 1;
        }
        while ( v18 );
        v4[7] = 0LL;
      }
    }
    v4[6] = 0LL;
    KxReleaseSpinLock(v4 + 3);
    v6 = *v4;
    v5 = (signed __int64 *)(v4 + 5);
    v4 = (unsigned __int64 *)v4[1];
    v7 = 0;
    v8 = a3;
  }
  while ( (int)KiSrcuCompareGraceSequence(a2, qword_140F24F20) > 0 )
  {
    if ( v16 == _InterlockedCompareExchange64(&qword_140F24F20, a2, v16) )
      return v3;
  }
  return 0;
}
