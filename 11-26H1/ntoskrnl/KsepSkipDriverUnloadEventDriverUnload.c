/*
 * XREFs of KsepSkipDriverUnloadEventDriverUnload @ 0x1405FFA28
 * Callers:
 *     KseSkipDriverUnloadCallbackHookDriverUnload @ 0x1405FF8C0 (KseSkipDriverUnloadCallbackHookDriverUnload.c)
 *     KseSkipDriverUnloadHookDriverUntargeted @ 0x1405FF900 (KseSkipDriverUnloadHookDriverUntargeted.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall KsepSkipDriverUnloadEventDriverUnload(__int64 a1, __int64 a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v3; // [rsp+50h] [rbp-28h]
  __int64 v4; // [rsp+58h] [rbp-20h]
  __int64 v5; // [rsp+80h] [rbp+8h] BYREF
  __int64 v6; // [rsp+88h] [rbp+10h] BYREF

  v6 = a2;
  v5 = a1;
  if ( stru_140E66B30.StackLimit )
  {
    if ( EtwEventEnabled((REGHANDLE)stru_140E66B30.StackLimit, &KseSkipDriverUnloadEventDriverUnload) )
    {
      UserData.Ptr = (ULONGLONG)&v5;
      *(_QWORD *)&UserData.Size = 8LL;
      v3 = &v6;
      v4 = 8LL;
      EtwWriteEx(
        (REGHANDLE)stru_140E66B30.StackLimit,
        &KseSkipDriverUnloadEventDriverUnload,
        0LL,
        0,
        0LL,
        0LL,
        2u,
        &UserData);
    }
  }
}
