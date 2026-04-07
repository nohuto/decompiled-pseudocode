/*
 * XREFs of ?TopLevelWindow3D_StartAnimationCompleted@UDwmTrace@@SAXXZ @ 0x180041378
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x1800436A0 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x180041484 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800415C4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

void UDwmTrace::TopLevelWindow3D_StartAnimationCompleted(void)
{
  __int64 v0; // rcx
  __int64 v1; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v2[32]; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v3; // [rsp+58h] [rbp-20h]
  __int64 v4; // [rsp+60h] [rbp-18h]

  v0 = *(_QWORD *)(wil::details::static_lazy<UDwmTrace>::get() + 8);
  if ( *(_DWORD *)v0 > 5u
    && (*(_QWORD *)(v0 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v0 + 24) & 0x200000000000LL) == *(_QWORD *)(v0 + 24) )
  {
    v1 = 0x1000000LL;
    v3 = &v1;
    v4 = 8LL;
    tlgWriteTransfer_EtwEventWriteTransfer(v0, (unsigned int)&unk_18010128D, 0, 0, 3, (__int64)v2);
  }
}
