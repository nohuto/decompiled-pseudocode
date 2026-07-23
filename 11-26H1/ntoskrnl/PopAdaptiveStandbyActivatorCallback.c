/*
 * XREFs of PopAdaptiveStandbyActivatorCallback @ 0x140613F50
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

GUID *__fastcall PopAdaptiveStandbyActivatorCallback(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KTHREAD *CurrentThread; // rax
  GUID *Flink; // r9
  int v8; // eax
  GUID *result; // rax
  int v10; // [rsp+30h] [rbp-79h] BYREF
  int v11; // [rsp+34h] [rbp-75h] BYREF
  __int64 v12; // [rsp+38h] [rbp-71h] BYREF
  __int64 v13; // [rsp+40h] [rbp-69h] BYREF
  __int128 v14; // [rsp+48h] [rbp-61h] BYREF
  __int128 v15; // [rsp+58h] [rbp-51h]
  __int128 v16; // [rsp+68h] [rbp-41h]
  __int64 v17; // [rsp+78h] [rbp-31h]
  GUID ActivityId; // [rsp+80h] [rbp-29h] BYREF
  GUID *v19; // [rsp+90h] [rbp-19h]
  struct _EVENT_DATA_DESCRIPTOR v20[2]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 *v21; // [rsp+C0h] [rbp+17h]
  __int64 v22; // [rsp+C8h] [rbp+1Fh]
  __int64 *v23; // [rsp+D0h] [rbp+27h]
  __int64 v24; // [rsp+D8h] [rbp+2Fh]
  __int64 *v25; // [rsp+E0h] [rbp+37h]
  __int64 v26; // [rsp+E8h] [rbp+3Fh]

  v11 = 0;
  v17 = 0LL;
  v19 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  CurrentThread = KeGetCurrentThread();
  Flink = (GUID *)CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
  CurrentThread[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&ActivityId;
  v19 = Flink;
  if ( (unsigned int)dword_140E08138 > 5 )
  {
    v12 = a1;
    v21 = &v12;
    v22 = 8LL;
    v23 = (__int64 *)&v10;
    v10 = a2;
    v24 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08138,
      (unsigned __int8 *)byte_1400504D3,
      &ActivityId,
      Flink,
      4u,
      v20);
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopAdaptiveStandbyLock, v4, v5, (struct _KLOCK_ENTRIES *)Flink);
  if ( a1 == qword_140F0BB60 )
  {
    if ( byte_140F0BB58 )
    {
      *(_QWORD *)&v14 = 0x12C00000001LL;
      *(_QWORD *)&v15 = L"Reserve Configuration Update";
      v8 = Pdcv2ActivationClientRenewActivation(a1, &v14, &v11);
      if ( (unsigned int)dword_140E08138 > 5 )
      {
        v10 = v8;
        v22 = 4LL;
        v21 = (__int64 *)&v10;
        LODWORD(v12) = v11;
        v23 = &v12;
        v13 = qword_140F0BB60;
        v25 = &v13;
        v24 = 4LL;
        v26 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E08138,
          (unsigned __int8 *)byte_140050128,
          (const GUID *)KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink,
          0LL,
          5u,
          v20);
      }
    }
  }
  PopReleaseRwLock((struct _KTHREAD *)&PopAdaptiveStandbyLock);
  if ( (unsigned int)dword_140E08138 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08138,
      (unsigned __int8 *)byte_14005019D,
      &ActivityId,
      v19,
      2u,
      v20);
  result = v19;
  KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)v19;
  return result;
}
