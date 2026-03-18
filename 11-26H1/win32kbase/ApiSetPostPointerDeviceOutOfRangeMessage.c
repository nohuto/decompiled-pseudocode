/*
 * XREFs of ApiSetPostPointerDeviceOutOfRangeMessage @ 0x140131C1C
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401288B4 (RIMOnAsyncWorkItemNotification.c)
 *     RIMRemoveFromActiveDevices @ 0x140131468 (RIMRemoveFromActiveDevices.c)
 * Callees:
 *     EtwTracePointerDeviceOutOfRangeMessageStart @ 0x140064200 (EtwTracePointerDeviceOutOfRangeMessageStart.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStop @ 0x140064610 (EtwTracePointerDeviceOutOfRangeMessageStop.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1401CD3E0 (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall ApiSetPostPointerDeviceOutOfRangeMessage(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int (*v6)(void); // rax
  void (__fastcall *v7)(__int64, _QWORD, _QWORD); // rax

  result = Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline();
  if ( result || *(_DWORD *)(a1 + 24) != 7 )
  {
    EtwTracePointerDeviceOutOfRangeMessageStart(v3);
    v5 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 48);
    v6 = *(int (**)(void))(v5 + 4032);
    if ( v6 && v6() >= 0 )
    {
      v5 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 48);
      v7 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(v5 + 4040);
      if ( v7 )
        v7(a1, 0LL, 0LL);
    }
    return EtwTracePointerDeviceOutOfRangeMessageStop(v5);
  }
  return result;
}
