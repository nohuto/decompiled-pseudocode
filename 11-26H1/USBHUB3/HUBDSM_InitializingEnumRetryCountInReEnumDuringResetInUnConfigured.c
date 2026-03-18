/*
 * XREFs of HUBDSM_InitializingEnumRetryCountInReEnumDuringResetInUnConfigured @ 0x1400230D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_LogDeviceReEnumeration @ 0x1400310E8 (HUBMISC_LogDeviceReEnumeration.c)
 */

__int64 __fastcall HUBDSM_InitializingEnumRetryCountInReEnumDuringResetInUnConfigured(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 1644), 0xFFFFDFFF);
  *(_DWORD *)(v1 + 2440) = 0;
  *(_DWORD *)(v1 + 32) = 0;
  *(_WORD *)(v1 + 2220) = 0;
  *(_WORD *)(v1 + 2216) = 0;
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2476), 0xFFFFFFFD);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2476), 0xFFFFFFFE);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2224), 0xFFFFFFFB);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2224), 0xFFFFFFF7);
  HUBMISC_LogDeviceReEnumeration();
  return 4077LL;
}
