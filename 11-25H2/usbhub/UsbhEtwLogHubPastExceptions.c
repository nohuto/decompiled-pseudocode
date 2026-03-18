/*
 * XREFs of UsbhEtwLogHubPastExceptions @ 0x14002AC70
 * Callers:
 *     UsbhEtwRundown @ 0x14002FFDC (UsbhEtwRundown.c)
 * Callees:
 *     UsbhEtwWrite @ 0x14000AB60 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x14002ABB0 (UsbhEtwGetHubInfo.c)
 *     UsbhGetExceptionDispatch @ 0x14002AF80 (UsbhGetExceptionDispatch.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 */

void __fastcall UsbhEtwLogHubPastExceptions(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  _QWORD *i; // rdi
  __int64 v5; // rcx
  __int64 ExceptionDispatch; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v10; // [rsp+A8h] [rbp-78h] BYREF
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-70h] BYREF
  int v12; // [rsp+C8h] [rbp-58h] BYREF
  __int16 v13; // [rsp+CCh] [rbp-54h]
  __int16 v14; // [rsp+CEh] [rbp-52h]
  __int16 v15; // [rsp+D0h] [rbp-50h]
  __int16 v16; // [rsp+D2h] [rbp-4Eh]
  _OWORD v17[2]; // [rsp+D8h] [rbp-48h] BYREF
  int v18; // [rsp+F8h] [rbp-28h]

  v9 = 0;
  v10 = 0LL;
  v18 = 0;
  v12 = *(_DWORD *)(a1 + 5192);
  v13 = *(_WORD *)(a1 + 5196);
  v14 = *(_DWORD *)(a1 + 5200);
  v15 = *(_WORD *)(a1 + 5228);
  v16 = *(_WORD *)(a1 + 5230);
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v17, 0, sizeof(v17));
  UsbhEtwGetHubInfo(a1, (__int64)v17);
  v3 = MEMORY[0xFFFFF78000000014];
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 4872), &LockHandle);
  for ( i = *(_QWORD **)(a1 + 4856); i != (_QWORD *)(a1 + 4856); i = (_QWORD *)*i )
  {
    v5 = *(_QWORD *)(a1 + 1200);
    v10 = v3 - i[2];
    ExceptionDispatch = UsbhGetExceptionDispatch(v5, *((unsigned int *)i - 8));
    v7 = -1LL;
    v9 = *((unsigned __int16 *)i - 14);
    v8 = *(_QWORD *)(ExceptionDispatch + 8);
    do
      ++v7;
    while ( *(_BYTE *)(v8 + v7) );
    UsbhEtwWrite(
      &USBHUB_ETW_EVENT_HUB_PAST_EXCEPTION,
      0LL,
      &v10,
      8LL,
      &v12,
      12LL,
      v17,
      36LL,
      &v9,
      4LL,
      i - 4,
      4LL,
      (char *)i - 20,
      4LL,
      i - 3,
      4LL,
      v8,
      v7 + 1,
      0LL);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
