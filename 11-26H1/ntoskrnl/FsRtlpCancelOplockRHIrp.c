/*
 * XREFs of FsRtlpCancelOplockRHIrp @ 0x1404D1580
 * Callers:
 *     FsRtlpOplockRHIrpCancelRoutine @ 0x1404D1560 (FsRtlpOplockRHIrpCancelRoutine.c)
 *     FsRtlpRequestShareableOplock @ 0x140514FAC (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F49E4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1403F4D08 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpComputeShareableOplockState @ 0x1403F4F58 (FsRtlpComputeShareableOplockState.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     FsRtlpOplockPerfSendData @ 0x140AEAF28 (FsRtlpOplockPerfSendData.c)
 */

void __fastcall FsRtlpCancelOplockRHIrp(__int64 a1, char a2, char a3)
{
  __int64 v5; // rdi
  char v6; // r14
  _QWORD *v7; // rsi
  _QWORD **i; // rbx
  _QWORD **v9; // rcx
  char v10; // [rsp+40h] [rbp-128h] BYREF
  char v11; // [rsp+41h] [rbp-127h] BYREF
  char v12; // [rsp+42h] [rbp-126h]
  char v13; // [rsp+43h] [rbp-125h] BYREF
  int v14; // [rsp+44h] [rbp-124h] BYREF
  int v15; // [rsp+48h] [rbp-120h] BYREF
  __int64 v16; // [rsp+50h] [rbp-118h] BYREF
  _QWORD **v17; // [rsp+58h] [rbp-110h]
  __int64 v18; // [rsp+60h] [rbp-108h]
  __int64 v19; // [rsp+68h] [rbp-100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+70h] [rbp-F8h] BYREF
  char *v21; // [rsp+90h] [rbp-D8h]
  __int64 v22; // [rsp+98h] [rbp-D0h]
  char *v23; // [rsp+A0h] [rbp-C8h]
  __int64 v24; // [rsp+A8h] [rbp-C0h]
  __int64 *v25; // [rsp+B0h] [rbp-B8h]
  __int64 v26; // [rsp+B8h] [rbp-B0h]
  int *v27; // [rsp+C0h] [rbp-A8h]
  __int64 v28; // [rsp+C8h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+D0h] [rbp-98h] BYREF
  char *v30; // [rsp+F0h] [rbp-78h]
  __int64 v31; // [rsp+F8h] [rbp-70h]
  __int64 *v32; // [rsp+100h] [rbp-68h]
  __int64 v33; // [rsp+108h] [rbp-60h]
  int *v34; // [rsp+110h] [rbp-58h]
  __int64 v35; // [rsp+118h] [rbp-50h]

  v5 = *(_QWORD *)(a1 + 56);
  v18 = v5;
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v13 = a3;
    v30 = &v13;
    v31 = 1LL;
    v19 = v5;
    v32 = &v19;
    v33 = 8LL;
    v15 = *(_DWORD *)(v5 + 144);
    v34 = &v15;
    v35 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06B30, (unsigned __int8 *)byte_140045BA1, 0LL, 0LL, 5u, &v29);
  }
  v6 = 0;
  v12 = 0;
  if ( !a2 )
    ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(v5 + 152));
  v7 = (_QWORD *)(v5 + 56);
  for ( i = *(_QWORD ***)(v5 + 56); ; i = (_QWORD **)*i )
  {
    v17 = i;
    if ( i == v7 )
      break;
    v9 = i;
    if ( !i[7] && *((_BYTE *)i[2] + 68) )
    {
      i = (_QWORD **)i[1];
      v17 = i;
      if ( a3 )
        FsRtlpOplockPerfSendData(v9 + 9);
      else
        v9[11] = 0LL;
      FsRtlpRemoveAndCompleteRHIrp(*i, v5, -1073741536, 0, 0, 0, 0, 0);
      v6 = 1;
      v12 = 1;
    }
  }
  if ( v6 )
  {
    if ( a3 )
      FsRtlpReleaseIrpsWaitingForRH(v5);
    if ( (_QWORD *)*v7 == v7 )
      FsRtlpComputeShareableOplockState(v5);
  }
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 152));
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v10 = a3;
    v21 = &v10;
    v22 = 1LL;
    v11 = v6;
    v23 = &v11;
    v24 = 1LL;
    v16 = v5;
    v25 = &v16;
    v26 = 8LL;
    v14 = *(_DWORD *)(v5 + 144);
    v27 = &v14;
    v28 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06B30, (unsigned __int8 *)&byte_140045B37, 0LL, 0LL, 6u, &v20);
  }
}
