/*
 * XREFs of MNSetupAnimationDC @ 0x140219B14
 * Callers:
 *     MNAllocMenuState @ 0x14015BF08 (MNAllocMenuState.c)
 *     FinalUserInit @ 0x14021974C (FinalUserInit.c)
 * Callees:
 *     GetDPIMetrics @ 0x140042DD8 (GetDPIMetrics.c)
 *     GreSelectFont @ 0x140054D30 (GreSelectFont.c)
 */

__int64 __fastcall MNSetupAnimationDC(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 result; // rax
  HFONT *DPIMetrics; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  result = GreCreateCompatibleDC(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 64LL));
  *(_QWORD *)(a1 + 136) = result;
  if ( result )
  {
    DPIMetrics = (HFONT *)GetDPIMetrics();
    GreSelectFont(*(HDC *)(a1 + 136), *DPIMetrics);
    GreSetDCOwnerEx(*(_QWORD *)(a1 + 136), 2147483666LL, 0LL, 0LL);
    return 1LL;
  }
  return result;
}
