/*
 * XREFs of FsRtlpCancelWaitingIrp @ 0x1404E5E38
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x1404E5834 (FsRtlpWaitOnIrp.c)
 *     FsRtlpWaitingIrpCancelRoutine @ 0x1405B9FE0 (FsRtlpWaitingIrpCancelRoutine.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1403FAF90 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall FsRtlpCancelWaitingIrp(__int64 a1, char a2)
{
  __int64 v3; // rdi
  _QWORD *i; // rbx
  _QWORD *v5; // r13
  __int64 v6; // rcx
  char v7; // [rsp+30h] [rbp-108h] BYREF
  int v8; // [rsp+34h] [rbp-104h] BYREF
  int v9; // [rsp+38h] [rbp-100h] BYREF
  __int64 v10; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v11; // [rsp+48h] [rbp-F0h] BYREF
  _QWORD *v12; // [rsp+50h] [rbp-E8h]
  __int64 v13; // [rsp+58h] [rbp-E0h]
  __int64 v14; // [rsp+60h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+70h] [rbp-C8h] BYREF
  __int64 *v16; // [rsp+90h] [rbp-A8h]
  __int64 v17; // [rsp+98h] [rbp-A0h]
  int *v18; // [rsp+A0h] [rbp-98h]
  __int64 v19; // [rsp+A8h] [rbp-90h]
  struct _EVENT_DATA_DESCRIPTOR v20[2]; // [rsp+B0h] [rbp-88h] BYREF
  __int64 *v21; // [rsp+D0h] [rbp-68h]
  __int64 v22; // [rsp+D8h] [rbp-60h]
  int *v23; // [rsp+E0h] [rbp-58h]
  __int64 v24; // [rsp+E8h] [rbp-50h]
  __int64 *v25; // [rsp+F0h] [rbp-48h]
  __int64 v26; // [rsp+F8h] [rbp-40h]
  char *v27; // [rsp+100h] [rbp-38h]
  __int64 v28; // [rsp+108h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 56);
  v13 = v3;
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v11 = v3;
    v21 = &v11;
    v22 = 8LL;
    v9 = *(_DWORD *)(v3 + 144);
    v23 = &v9;
    v24 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06B30, (unsigned __int8 *)byte_140045A61, 0LL, 0LL, 4u, v20);
  }
  if ( !a2 )
    ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(v3 + 152));
  for ( i = *(_QWORD **)(v3 + 88); ; i = (_QWORD *)*i )
  {
    v12 = i;
    if ( i == (_QWORD *)(v3 + 88) )
      break;
    v5 = i;
    v6 = i[2];
    if ( v6 )
    {
      if ( (unsigned int)dword_140E06B30 > 5 )
      {
        v11 = v3;
        v21 = &v11;
        v22 = 8LL;
        v9 = *(_DWORD *)(v3 + 144);
        v23 = &v9;
        v24 = 4LL;
        v14 = v6;
        v25 = &v14;
        v26 = 8LL;
        v7 = *(_BYTE *)(v6 + 68);
        v27 = &v7;
        v28 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06B30,
          (unsigned __int8 *)byte_1400459F9,
          0LL,
          0LL,
          6u,
          v20);
      }
      if ( *(_BYTE *)(i[2] + 68LL) )
      {
        i = (_QWORD *)i[1];
        v12 = i;
        FsRtlpRemoveAndCompleteWaitingIrp(v5);
      }
    }
  }
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v3 + 152));
  if ( (unsigned int)dword_140E06B30 > 5 )
  {
    v10 = v3;
    v16 = &v10;
    v17 = 8LL;
    v8 = *(_DWORD *)(v3 + 144);
    v18 = &v8;
    v19 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06B30,
      (unsigned __int8 *)&dword_1400459B4,
      0LL,
      0LL,
      4u,
      &v15);
  }
}
