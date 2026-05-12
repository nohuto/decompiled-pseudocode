/*
 * XREFs of sub_14006CBC0 @ 0x14006CBC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000BCAC @ 0x14000BCAC (sub_14000BCAC.c)
 *     sub_14006B3A4 @ 0x14006B3A4 (sub_14006B3A4.c)
 *     sub_14006B3C4 @ 0x14006B3C4 (sub_14006B3C4.c)
 *     sub_14006C668 @ 0x14006C668 (sub_14006C668.c)
 */

void __fastcall sub_14006CBC0(__int64 DeviceObject, struct _IO_WORKITEM *Context)
{
  KSPIN_LOCK *v2; // rbx
  int v5; // eax
  KSPIN_LOCK *v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // r14
  _QWORD *v12; // rax
  _DWORD *v13; // rdi
  __int64 i; // rcx
  _QWORD *v15; // rcx
  _QWORD *v16; // rbx
  _QWORD *v17; // rax
  _DWORD *v18; // rdi
  __int64 j; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rbx
  _QWORD *v22; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  v2 = *(KSPIN_LOCK **)(DeviceObject + 64);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = *(_DWORD *)v2;
  if ( *(_DWORD *)v2 == 1094997074 )
  {
    v6 = (KSPIN_LOCK *)sub_14000BCAC(DeviceObject);
    v7 = v6 + 718;
    while ( (_QWORD *)*v7 != v7 )
    {
      KeAcquireInStackQueuedSpinLock(v6 + 721, &LockHandle);
      v8 = (_QWORD *)v6[719];
      if ( (_QWORD *)*v8 != v7 )
        goto LABEL_27;
      v9 = (_QWORD *)v8[1];
      if ( (_QWORD *)*v9 != v8 )
        goto LABEL_27;
      v6[719] = (KSPIN_LOCK)v9;
      *v9 = v7;
      --*((_DWORD *)v6 + 1440);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      sub_14006C668(DeviceObject, *(v8 - 1));
    }
    *((_BYTE *)v6 + 109) &= ~0x40u;
  }
  else if ( v5 == 1431193940 )
  {
    v10 = v2 + 436;
    while ( (_QWORD *)*v10 != v10 )
    {
      KeAcquireInStackQueuedSpinLock(v2 + 439, &LockHandle);
      v11 = (_QWORD *)v2[437];
      if ( (_QWORD *)*v11 != v10 )
        goto LABEL_27;
      v12 = (_QWORD *)v11[1];
      if ( (_QWORD *)*v12 != v11 )
        goto LABEL_27;
      v2[437] = (KSPIN_LOCK)v12;
      *v12 = v10;
      --*((_DWORD *)v2 + 876);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      sub_14006C668(DeviceObject, *(v11 - 1));
    }
    *((_BYTE *)v2 + 507) &= ~2u;
  }
  else
  {
    if ( v5 == 1314275652 )
    {
      v13 = sub_14006B3A4(DeviceObject);
      for ( i = *((_QWORD *)v13 + 20); ; i = *((_QWORD *)v13 + 20) )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(i + 168), &LockHandle);
        v15 = (_QWORD *)(*((_QWORD *)v13 + 20) + 144LL);
        if ( (_QWORD *)*v15 == v15 )
          break;
        v16 = *(_QWORD **)(*((_QWORD *)v13 + 20) + 152LL);
        if ( (_QWORD *)*v16 != v15 )
          goto LABEL_27;
        v17 = (_QWORD *)v16[1];
        if ( (_QWORD *)*v17 != v16 )
          goto LABEL_27;
        *(_QWORD *)(*((_QWORD *)v13 + 20) + 152LL) = v17;
        *v17 = v15;
        --*(_DWORD *)(*((_QWORD *)v13 + 20) + 160LL);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        sub_14006C668(DeviceObject, *(v16 - 1));
      }
    }
    else
    {
      if ( v5 != 1314278989 )
        goto LABEL_29;
      v18 = sub_14006B3C4(DeviceObject);
      for ( j = *((_QWORD *)v18 + 16); ; j = *((_QWORD *)v18 + 16) )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(j + 128), &LockHandle);
        v20 = (_QWORD *)(*((_QWORD *)v18 + 16) + 104LL);
        if ( (_QWORD *)*v20 == v20 )
          break;
        v21 = *(_QWORD **)(*((_QWORD *)v18 + 16) + 112LL);
        if ( (_QWORD *)*v21 != v20 || (v22 = (_QWORD *)v21[1], (_QWORD *)*v22 != v21) )
LABEL_27:
          __fastfail(3u);
        *(_QWORD *)(*((_QWORD *)v18 + 16) + 112LL) = v22;
        *v22 = v20;
        --*(_DWORD *)(*((_QWORD *)v18 + 16) + 120LL);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        sub_14006C668(DeviceObject, *(v21 - 1));
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
LABEL_29:
  if ( Context )
    IoFreeWorkItem(Context);
}
