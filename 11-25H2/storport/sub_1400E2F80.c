/*
 * XREFs of sub_1400E2F80 @ 0x1400E2F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_14008BAE8 @ 0x14008BAE8 (sub_14008BAE8.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_1400E2F80(PDEVICE_OBJECT DeviceObject, char *Context)
{
  struct _UNICODE_STRING v3; // [rsp+A0h] [rbp-B8h] BYREF
  struct _STRING DestinationString; // [rsp+B0h] [rbp-A8h] BYREF
  _WORD v5[64]; // [rsp+C0h] [rbp-98h] BYREF

  DestinationString = 0LL;
  v3 = 0LL;
  if ( (dword_140168408 & 8) != 0 )
    sub_14008BAE8(4, (__int64)Context, 0LL);
  RtlInitAnsiString(&DestinationString, (PCSZ)(*((_QWORD *)Context + 13) + 6LL));
  v3.Buffer = v5;
  v3.MaximumLength = 128;
  RtlAnsiStringToUnicodeString(&v3, &DestinationString, 0);
  sub_1400A870C(
    (__int64)Context,
    1,
    2,
    (__int64)L"NVMe controller fatal transport error",
    L"QueueId",
    **((_DWORD **)Context + 13),
    v5,
    0,
    &dword_140149108,
    0,
    &dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0,
    (void *)&dword_140149108,
    0);
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 192LL) )
  {
    KeCancelTimer((PKTIMER)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 128LL));
    KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 64LL));
    _InterlockedCompareExchange(
      (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)Context + 159) + 40LL) + 192LL),
      0,
      1);
  }
  KeClearEvent((PRKEVENT)(Context + 232));
  IoQueueWorkItem(*((PIO_WORKITEM *)Context + 20), (PIO_WORKITEM_ROUTINE)sub_1400E2990, DelayedWorkQueue, Context);
}
