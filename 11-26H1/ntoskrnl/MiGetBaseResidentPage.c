/*
 * XREFs of MiGetBaseResidentPage @ 0x1402F1BA0
 * Callers:
 *     MiProbeUnlockPage @ 0x14028B900 (MiProbeUnlockPage.c)
 *     MiTradePage @ 0x140291970 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x1402923F0 (MiActivePageClaimCandidate.c)
 *     MiLegitimatePageForDriversToMap @ 0x1402F09B0 (MiLegitimatePageForDriversToMap.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1402F0BC0 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiIdentifyResidentPage @ 0x1402F17A0 (MiIdentifyResidentPage.c)
 *     MiDemoteLargeFreePage @ 0x140434410 (MiDemoteLargeFreePage.c)
 *     MiGetBadPageResources @ 0x1406F1108 (MiGetBadPageResources.c)
 *     MiSetPfnRemovalRequested @ 0x1406F1D98 (MiSetPfnRemovalRequested.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetBaseResidentPage(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // r12d
  ULONG_PTR v3; // rbp
  unsigned int v4; // edi
  ULONG_PTR v5; // rsi
  unsigned int v6; // r15d
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  unsigned int v12; // r14d
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-38h]

  v1 = a1;
  v13 = 0LL;
  v14 = 0LL;
  v2 = 2;
  v3 = (a1 + 0x220000000000LL) / 48;
  v4 = 0;
  v5 = v3;
  v6 = 0;
  while ( 1 )
  {
    v7 = v6;
    v8 = MiPageSizes[v2] - 1;
    if ( (v8 & v5) != 0 )
    {
      v5 &= ~v8;
      v1 = 48 * v5 - 0x220000000000LL;
      if ( ++v6 > 3 )
        KeBugCheckEx(0x1Au, 0x1500uLL, v3, v5, 0LL);
      *((_QWORD *)&v13 + v7) = v1;
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v12);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v1 + 24) < 0 );
      }
    }
    if ( (*(_QWORD *)(v1 + 40) & 0x10000000000LL) != 0 && (*(_DWORD *)(v1 + 36) & 0x18000000) != 0 )
      break;
    if ( !v2 )
      KeBugCheckEx(0x1Au, 0x1501uLL, v3, v5, 0LL);
    --v2;
  }
  v9 = (__int64 *)&v13;
  do
  {
    v10 = *v9;
    if ( !*v9 )
      break;
    if ( v10 != v1 )
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v4;
    ++v9;
  }
  while ( v4 < 3 );
  return v1;
}
