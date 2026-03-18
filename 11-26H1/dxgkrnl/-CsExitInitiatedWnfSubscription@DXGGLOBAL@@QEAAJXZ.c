/*
 * XREFs of ?CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ @ 0x1401DC894
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401DD97C (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall DXGGLOBAL::CsExitInitiatedWnfSubscription(DXGGLOBAL *this)
{
  int v1; // ebx
  __int64 v3; // [rsp+30h] [rbp-18h] BYREF

  v3 = WNF_PO_MODERN_STANDBY_EXIT_INITIATED;
  v1 = ExSubscribeWnfStateChange((char *)this + 1904, &v3, 1LL);
  if ( v1 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 4530;
  }
  return (unsigned int)v1;
}
