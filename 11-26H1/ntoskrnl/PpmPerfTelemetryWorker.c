/*
 * XREFs of PpmPerfTelemetryWorker @ 0x140B290E0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x1404C76FC (PpmPerfUpdateQosDisableReasons.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404DE3B8 (PopOkayToQueueNextWorkItem.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall PpmPerfTelemetryWorker(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // r10
  _DWORD *v4; // r11
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // kr00_8
  unsigned __int128 v9; // rax
  int v11; // [rsp+38h] [rbp-49h] BYREF
  int v12; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v13; // [rsp+40h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+48h] [rbp-39h] BYREF
  int *v15; // [rsp+68h] [rbp-19h]
  __int64 v16; // [rsp+70h] [rbp-11h]
  int *v17; // [rsp+78h] [rbp-9h]
  __int64 v18; // [rsp+80h] [rbp-1h]
  _BYTE *v19; // [rsp+88h] [rbp+7h]
  __int64 v20; // [rsp+90h] [rbp+Fh]
  __int64 *v21; // [rsp+98h] [rbp+17h]
  __int64 v22; // [rsp+A0h] [rbp+1Fh]
  _BYTE v23[40]; // [rsp+A8h] [rbp+27h] BYREF

  PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, a2, a3);
  PpmPerfUpdateQosDisableReasons(0LL);
  v3 = &unk_140FC08F0;
  v4 = v23;
  v5 = qword_140FC0888 - qword_140FC0890;
  qword_140FC0890 = qword_140FC0888;
  v6 = 9LL;
  v7 = v5 / 0x989680;
  v8 = qword_140FC0898 - qword_140FC08A0;
  qword_140FC08A0 = qword_140FC0898;
  do
  {
    v9 = (unsigned __int64)(*(v3 - 9) - *v3) * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
    *v3 = *(v3 - 9);
    ++v3;
    *v4++ = *((_QWORD *)&v9 + 1) >> 23;
    --v6;
  }
  while ( v6 );
  PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
  if ( (unsigned int)dword_140E07598 > 5
    && (qword_140E075A8 & 0x400000000000LL) != 0
    && (qword_140E075B0 & 0x400000000000LL) == qword_140E075B0 )
  {
    v11 = v7;
    v15 = &v11;
    v16 = 4LL;
    v17 = &v12;
    v12 = v8 / 0x989680;
    v19 = v23;
    v18 = 4LL;
    v21 = &v13;
    v20 = 36LL;
    v13 = 0x1000000LL;
    v22 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07598, (unsigned __int8 *)&word_140049BA6, 0LL, 0LL, 6u, &v14);
  }
  return PopOkayToQueueNextWorkItem((__int64)&unk_140F12208);
}
