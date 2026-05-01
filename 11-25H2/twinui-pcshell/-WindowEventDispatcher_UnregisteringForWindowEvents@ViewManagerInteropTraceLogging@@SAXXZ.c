/*
 * XREFs of ?WindowEventDispatcher_UnregisteringForWindowEvents@ViewManagerInteropTraceLogging@@SAXXZ @ 0x18018B6EC
 * Callers:
 *     ?UnregisterForViewEvents@UwpWindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x18018B480 (-UnregisterForViewEvents@UwpWindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z.c)
 *     ?UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x180414290 (-UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ?Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180070E64 (-Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void ViewManagerInteropTraceLogging::WindowEventDispatcher_UnregisteringForWindowEvents(void)
{
  const struct _tlgProvider_t *v0; // rax
  ULONG v1; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  void *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  v0 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v0 > 5u )
  {
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v0 + 1);
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    v1 = *(unsigned __int16 *)UserData.Ptr;
    v4 = &unk_1807CD0AC;
    UserData.Size = v1;
    UserData.Reserved = 2;
    v5 = 54;
    v6 = 1;
    EventWriteTransfer(*((_QWORD *)v0 + 4), &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
}
