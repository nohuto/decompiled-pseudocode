/*
 * XREFs of MiGetBaseResidentPage @ 0x1402D3C20
 * Callers:
 *     MiProbeUnlockPage @ 0x14028AE60 (MiProbeUnlockPage.c)
 *     MiTradePage @ 0x140290ED0 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x140291950 (MiActivePageClaimCandidate.c)
 *     MiLegitimatePageForDriversToMap @ 0x1402D2A30 (MiLegitimatePageForDriversToMap.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1402D2C40 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiIdentifyResidentPage @ 0x1402D3820 (MiIdentifyResidentPage.c)
 *     MiDemoteLargeFreePage @ 0x14042B4F0 (MiDemoteLargeFreePage.c)
 *     MiGetBadPageResources @ 0x1406F5D78 (MiGetBadPageResources.c)
 *     MiSetPfnRemovalRequested @ 0x1406F6A08 (MiSetPfnRemovalRequested.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetBaseResidentPage(__int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 v2; // rbx
  int v3; // r12d
  __int64 *v4; // rdx
  ULONG_PTR v5; // rbp
  unsigned int v6; // edi
  ULONG_PTR v7; // rsi
  unsigned int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rax
  unsigned int v14; // r14d
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]

  v1 = 0xFFFFDE0000000000uLL;
  v2 = a1;
  v15 = 0LL;
  v16 = 0LL;
  v3 = 2;
  v4 = MiPageSizes;
  v5 = (a1 + 0x220000000000LL) / 48;
  v6 = 0;
  v7 = v5;
  v8 = 0;
  while ( 1 )
  {
    v9 = v8;
    v10 = MiPageSizes[v3] - 1;
    if ( (v10 & v7) != 0 )
    {
      v7 &= ~v10;
      v2 = 48 * v7 - 0x220000000000LL;
      if ( ++v8 > 3 )
        KeBugCheckEx(0x1Au, 0x1500uLL, v5, v7, 0LL);
      *((_QWORD *)&v15 + v9) = v2;
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v14 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9, v4, v1) )
          {
            HvlNotifyLongSpinWait(v14);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v2 + 24) < 0 );
      }
      v1 = 0xFFFFDE0000000000uLL;
      v4 = MiPageSizes;
    }
    if ( (*(_QWORD *)(v2 + 40) & 0x10000000000LL) != 0 && (*(_DWORD *)(v2 + 36) & 0x18000000) != 0 )
      break;
    if ( !v3 )
      KeBugCheckEx(0x1Au, 0x1501uLL, v5, v7, 0LL);
    --v3;
  }
  v11 = (__int64 *)&v15;
  do
  {
    v12 = *v11;
    if ( !*v11 )
      break;
    if ( v12 != v2 )
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v6;
    ++v11;
  }
  while ( v6 < 3 );
  return v2;
}
