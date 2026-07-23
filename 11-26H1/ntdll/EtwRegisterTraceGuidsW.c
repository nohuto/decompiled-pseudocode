/*
 * XREFs of EtwRegisterTraceGuidsW @ 0x1800433E0
 * Callers:
 *     EtwRegisterTraceGuidsA @ 0x1800452C0 (EtwRegisterTraceGuidsA.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlSetLastWin32Error @ 0x180040B90 (RtlSetLastWin32Error.c)
 *     EtwNotificationRegister @ 0x180041740 (EtwNotificationRegister.c)
 *     EtwpCreateRegGuidsContext @ 0x1800434E0 (EtwpCreateRegGuidsContext.c)
 */

__int64 __fastcall EtwRegisterTraceGuidsW(
        PETW_NOTIFICATION_CALLBACK Callback,
        int a2,
        GUID *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        ULONGLONG *a8)
{
  ULONGLONG *v9; // rdi
  GUID v10; // xmm0
  void *RegGuidsContext; // rsi
  unsigned __int32 LastErrorValue; // ebx
  GUID Guid; // [rsp+30h] [rbp-18h] BYREF
  ULONGLONG RegHandle; // [rsp+50h] [rbp+8h] BYREF

  RegHandle = 0LL;
  if ( Callback )
  {
    v9 = a8;
    if ( a8 )
    {
      if ( a3 && a4 <= 0x10000 )
      {
        v10 = *a3;
        *a8 = 0LL;
        Guid = v10;
        RegGuidsContext = (void *)EtwpCreateRegGuidsContext((_DWORD)Callback, a2, (unsigned int)&Guid, a4, a5);
        if ( RegGuidsContext )
        {
          LastErrorValue = EtwNotificationRegister(&Guid, 2u, Callback, RegGuidsContext, &RegHandle);
          if ( !LastErrorValue )
          {
            *v9 = RegHandle;
            return LastErrorValue;
          }
          RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, RegGuidsContext);
        }
        else
        {
          LastErrorValue = NtCurrentTeb()->LastErrorValue;
          if ( !LastErrorValue )
            return LastErrorValue;
        }
        RtlSetLastWin32Error(LastErrorValue);
        return LastErrorValue;
      }
    }
  }
  RtlSetLastWin32Error(87);
  return 87LL;
}
