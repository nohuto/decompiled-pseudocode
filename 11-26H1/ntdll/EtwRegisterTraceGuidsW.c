/*
 * XREFs of EtwRegisterTraceGuidsW @ 0x180058E60
 * Callers:
 *     EtwRegisterTraceGuidsA @ 0x18005AD40 (EtwRegisterTraceGuidsA.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlSetLastWin32Error @ 0x180056610 (RtlSetLastWin32Error.c)
 *     EtwNotificationRegister @ 0x1800571C0 (EtwNotificationRegister.c)
 *     EtwpCreateRegGuidsContext @ 0x180058F60 (EtwpCreateRegGuidsContext.c)
 */

__int64 __fastcall EtwRegisterTraceGuidsW(
        _SLIST_ENTRY *a1,
        int a2,
        struct _SLIST_ENTRY *a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        _QWORD *a8)
{
  _QWORD *v9; // rdi
  struct _SLIST_ENTRY v10; // xmm0
  __int64 RegGuidsContext; // rsi
  unsigned int LastErrorValue; // ebx
  struct _SLIST_ENTRY v14; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  if ( a1 )
  {
    v9 = a8;
    if ( a8 )
    {
      if ( a3 && a4 <= 0x10000 )
      {
        v10 = *a3;
        *a8 = 0LL;
        v14 = v10;
        RegGuidsContext = EtwpCreateRegGuidsContext((_DWORD)a1, a2, (unsigned int)&v14, a4, a5);
        if ( RegGuidsContext )
        {
          LastErrorValue = EtwNotificationRegister(&v14, 2, a1, RegGuidsContext, &v15);
          if ( !LastErrorValue )
          {
            *v9 = v15;
            return LastErrorValue;
          }
          RtlFreeHeap_0();
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
  RtlSetLastWin32Error(0x57u);
  return 87LL;
}
