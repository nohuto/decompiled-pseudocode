/*
 * XREFs of UserValidateAndAttachQueueToInputWindowApiExt @ 0x140059710
 * Callers:
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x140059630 (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UserValidateAndAttachQueueToInputWindowApiExt(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64); // rax

  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 3704LL);
  if ( v4 )
    return v4(a1, a2);
  else
    return 3221225659LL;
}
