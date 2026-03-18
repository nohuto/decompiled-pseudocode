/*
 * XREFs of UsbhCancelQueuedTimeout @ 0x140023F64
 * Callers:
 *     UsbhCancelResetTimeout @ 0x140023BD8 (UsbhCancelResetTimeout.c)
 * Callees:
 *     UsbhFreePortChangeQueueObject @ 0x140001DA0 (UsbhFreePortChangeQueueObject.c)
 *     Log @ 0x140009B80 (Log.c)
 */

char __fastcall UsbhCancelQueuedTimeout(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  char v4; // di
  KIRQL v6; // al
  __int64 v7; // r10
  KIRQL v8; // r14
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 v11; // rcx
  _QWORD *v12; // r10
  __int64 v13; // r11
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v17; // [rsp+20h] [rbp-28h]

  v2 = (KSPIN_LOCK *)(a2 + 440);
  v4 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v7 = *(_QWORD *)(a2 + 464);
  v8 = v6;
  *(_DWORD *)(a2 + 448) = 1;
  while ( v7 != a2 + 456 )
  {
    Log(*(_QWORD *)(a2 + 16), 4, 1668379697, v7 - 16, *(unsigned __int16 *)(a2 + 4));
    v11 = *(_QWORD *)(a2 + 16);
    v17 = *(unsigned __int16 *)(a2 + 4);
    if ( *(_DWORD *)(v10 + 8) == 0x10000 )
    {
      Log(v11, 4, 1668768050, v9, v17);
      v14 = *v12;
      if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v15 = (_QWORD *)v12[1], (_QWORD *)*v15 != v12) )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      UsbhFreePortChangeQueueObject(a1, a2, v13, 0LL);
      *(_DWORD *)(a2 + 696) = 0;
      v4 = 1;
      break;
    }
    Log(v11, 4, 1668768051, v9, v17);
  }
  *(_DWORD *)(a2 + 448) = 0;
  KeReleaseSpinLock(v2, v8);
  return v4;
}
