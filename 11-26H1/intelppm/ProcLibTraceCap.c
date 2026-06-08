/*
 * XREFs of ProcLibTraceCap @ 0x140044B90
 * Callers:
 *     CapLogWorker @ 0x1400449F0 (CapLogWorker.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1400030C0 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceCap(__int64 a1, int a2, int a3, int a4, char a5, __int64 a6, __int64 a7)
{
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v8; // rbx
  _DWORD v10[4]; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-31h] BYREF
  int *v12; // [rsp+58h] [rbp-21h]
  __int64 v13; // [rsp+60h] [rbp-19h]
  int *v14; // [rsp+68h] [rbp-11h]
  __int64 v15; // [rsp+70h] [rbp-9h]
  int *v16; // [rsp+78h] [rbp-1h]
  __int64 v17; // [rsp+80h] [rbp+7h]
  char *v18; // [rsp+88h] [rbp+Fh]
  __int64 v19; // [rsp+90h] [rbp+17h]
  int v20; // [rsp+D0h] [rbp+57h] BYREF
  int v21; // [rsp+D8h] [rbp+5Fh] BYREF
  int v22; // [rsp+E0h] [rbp+67h] BYREF

  v22 = a4;
  v21 = a3;
  v20 = a2;
  v10[0] = 0;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              a6,
                                                              a7,
                                                              (__int64)v10,
                                                              &UserData);
  v8 = EventDescriptorAndProcessorId;
  if ( EventDescriptorAndProcessorId )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                                              EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      v12 = &v20;
      v13 = 4LL;
      v14 = &v21;
      v15 = 4LL;
      v16 = &v22;
      v17 = 4LL;
      v18 = &a5;
      v19 = 4LL;
      LOBYTE(EventDescriptorAndProcessorId) = EtwWrite(
                                                (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
                                                v8,
                                                0LL,
                                                (ULONG)5,
                                                &UserData);
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
