/*
 * XREFs of CiProcessCreate @ 0x14000F420
 * Callers:
 *     CiDispatchCreateNotificationClient @ 0x14000D280 (CiDispatchCreateNotificationClient.c)
 *     CiThreadCreate @ 0x14000E900 (CiThreadCreate.c)
 * Callees:
 *     CiSystemAcquirePushLock @ 0x14000F090 (CiSystemAcquirePushLock.c)
 *     CiProcessComparer @ 0x14000F640 (CiProcessComparer.c)
 */

__int64 __fastcall CiProcessCreate(_QWORD *a1)
{
  _OWORD *Pool2; // rax
  _OWORD *v3; // rdi
  __int64 result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rbp
  int v8; // eax
  _QWORD *v9; // rax
  _QWORD *v10; // rbx

  Pool2 = (_OWORD *)ExAllocatePool2(65LL, 96LL, 1349739341LL);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *Pool2 = 0LL;
  Pool2[1] = 0LL;
  Pool2[2] = 0LL;
  Pool2[3] = 0LL;
  Pool2[4] = 0LL;
  Pool2[5] = 0LL;
  *(_DWORD *)Pool2 = 1;
  *((_QWORD *)Pool2 + 4) = 1LL;
  *((_QWORD *)Pool2 + 10) = PsGetCurrentProcess();
  *((_QWORD *)v3 + 9) = v3 + 4;
  *((_QWORD *)v3 + 8) = v3 + 4;
  ObfReferenceObject(*((PVOID *)v3 + 10));
  CiSystemAcquirePushLock((__int64)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
  v5 = (_QWORD *)WPP_MAIN_CB.DeviceQueue.1;
  LOBYTE(v6) = 0;
  v7 = *((_QWORD *)v3 + 10);
  if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 )
  {
LABEL_7:
    RtlRbInsertNodeEx(&WPP_MAIN_CB.DeviceQueue.Busy, v5, v6, (char *)v3 + 40);
    WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
    ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
    goto LABEL_8;
  }
  while ( 1 )
  {
    v8 = CiProcessComparer(v7, v5);
    if ( v8 > 0 )
    {
      v9 = (_QWORD *)v5[1];
      if ( !v9 )
      {
        v6 = 1LL;
        goto LABEL_7;
      }
      goto LABEL_11;
    }
    if ( v8 >= 0 )
      break;
    v9 = (_QWORD *)*v5;
    if ( !*v5 )
    {
      LOBYTE(v6) = 0;
      goto LABEL_7;
    }
LABEL_11:
    v5 = v9;
  }
  v10 = v5 - 5;
  if ( _InterlockedIncrement64(v10 + 4) <= 1 )
    __fastfail(0xEu);
  WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  if ( v10 )
  {
    ObfDereferenceObject(*((PVOID *)v3 + 10));
    ExFreePoolWithTag(v3, 0x5073634Du);
    v3 = v10;
  }
LABEL_8:
  result = 0LL;
  *a1 = v3;
  return result;
}
