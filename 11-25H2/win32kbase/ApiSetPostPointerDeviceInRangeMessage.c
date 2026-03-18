/*
 * XREFs of ApiSetPostPointerDeviceInRangeMessage @ 0x140127D6C
 * Callers:
 *     RIMAddToActiveDevices @ 0x14017F910 (RIMAddToActiveDevices.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401998B4 (RIMOnAsyncWorkItemNotification.c)
 * Callees:
 *     EtwTracePointerDeviceInRangeMessageStart @ 0x14014DA30 (EtwTracePointerDeviceInRangeMessageStart.c)
 *     EtwTracePointerDeviceInRangeMessageStop @ 0x14015EB30 (EtwTracePointerDeviceInRangeMessageStop.c)
 *     Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline @ 0x1401A988C (Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetPostPointerDeviceInRangeMessage(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int (*v5)(void); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  void (__fastcall *v8)(__int64, _QWORD, _QWORD); // rax

  result = Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline(a1);
  if ( (_DWORD)result || *(_DWORD *)(a1 + 24) != 7 )
  {
    EtwTracePointerDeviceInRangeMessageStart();
    v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4, v3) + 48) + 4432LL);
    if ( v5 && v5() >= 0 )
    {
      v8 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48)
                                                          + 4440LL);
      if ( v8 )
        v8(a1, 0LL, 0LL);
    }
    return EtwTracePointerDeviceInRangeMessageStop();
  }
  return result;
}
