/*
 * XREFs of ApiSetPostPointerDeviceInRangeMessage @ 0x140131C9C
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401288B4 (RIMOnAsyncWorkItemNotification.c)
 *     RIMAddToActiveDevices @ 0x1401317B0 (RIMAddToActiveDevices.c)
 * Callees:
 *     EtwTracePointerDeviceInRangeMessageStart @ 0x1400641A0 (EtwTracePointerDeviceInRangeMessageStart.c)
 *     EtwTracePointerDeviceInRangeMessageStop @ 0x1400641D0 (EtwTracePointerDeviceInRangeMessageStop.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1401CD3E0 (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetPostPointerDeviceInRangeMessage(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int (*v6)(void); // rax
  void (__fastcall *v7)(__int64, _QWORD, _QWORD); // rax

  result = Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result || *(_DWORD *)(a1 + 24) != 7 )
  {
    EtwTracePointerDeviceInRangeMessageStart(v3);
    v5 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 48);
    v6 = *(int (**)(void))(v5 + 3984);
    if ( v6 && v6() >= 0 )
    {
      v5 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 48);
      v7 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(v5 + 3992);
      if ( v7 )
        v7(a1, 0LL, 0LL);
    }
    return EtwTracePointerDeviceInRangeMessageStop(v5);
  }
  return result;
}
