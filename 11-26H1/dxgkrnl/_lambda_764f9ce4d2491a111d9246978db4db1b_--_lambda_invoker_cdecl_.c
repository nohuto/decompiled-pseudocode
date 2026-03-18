/*
 * XREFs of _lambda_764f9ce4d2491a111d9246978db4db1b_::_lambda_invoker_cdecl_ @ 0x140078060
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?CheckPendingReleaseVidPnOwner@ADAPTER_DISPLAY@@QEAAXXZ @ 0x14006287C (-CheckPendingReleaseVidPnOwner@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x14025965C (-DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall lambda_764f9ce4d2491a111d9246978db4db1b_::_lambda_invoker_cdecl_(ADAPTER_DISPLAY **a1)
{
  int v2; // r8d
  _BYTE v4[144]; // [rsp+20h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v4, (struct DXGADAPTER *const)a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v4, (unsigned int)(v2 + 2)) >= 0 )
  {
    ADAPTER_DISPLAY::CheckPendingReleaseVidPnOwner(a1[395]);
    DmmClearDisplayManagerReferencesForAdapter((const struct DXGADAPTER *)a1);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v4);
  return 0LL;
}
