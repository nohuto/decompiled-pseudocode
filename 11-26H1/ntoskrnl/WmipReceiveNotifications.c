/*
 * XREFs of WmipReceiveNotifications @ 0x1403DE4EC
 * Callers:
 *     WmipIoControl @ 0x140A0BC50 (WmipIoControl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseMutantEx @ 0x1403E0320 (KeReleaseMutantEx.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     WmipClearIrpObjectList @ 0x1403FB2AC (WmipClearIrpObjectList.c)
 *     WmipCompleteGuidIrpWithError @ 0x1404C306C (WmipCompleteGuidIrpWithError.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     WmipCopyFromEventQueues @ 0x140AF0B88 (WmipCopyFromEventQueues.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipReceiveNotifications(unsigned int *a1, int *a2, __int64 a3)
{
  unsigned int v3; // r12d
  unsigned int v5; // r14d
  _BYTE *Pool2; // rdi
  __int64 v8; // r8
  char v9; // r13
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rsi
  unsigned int i; // eax
  NTSTATUS v14; // eax
  _DWORD *v15; // rcx
  unsigned int j; // edx
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  unsigned int v25; // r12d
  bool v26; // r14
  PVOID *v27; // rbx
  unsigned int v28; // ebx
  int v29; // r14d
  char v30; // al
  _QWORD *v31; // r12
  __int64 v32; // r13
  unsigned int v33; // [rsp+44h] [rbp-BCh]
  unsigned int v34; // [rsp+44h] [rbp-BCh]
  char v35; // [rsp+48h] [rbp-B8h]
  unsigned int v36; // [rsp+50h] [rbp-B0h]
  unsigned int v37; // [rsp+54h] [rbp-ACh]
  int v38; // [rsp+58h] [rbp-A8h]
  char v39; // [rsp+5Ch] [rbp-A4h]
  int v40; // [rsp+60h] [rbp-A0h]
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  int *v42; // [rsp+70h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-88h] BYREF
  _BYTE P[256]; // [rsp+90h] [rbp-70h] BYREF

  v3 = *a1;
  v5 = *a2;
  v42 = a2;
  v40 = -1073741811;
  if ( v3 > 0x10 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = P;
  }
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v8 = 0LL;
  v39 = 0;
  v9 = 0;
  v37 = 0;
  LOBYTE(v10) = 0;
  v35 = 0;
  v11 = 0;
  v36 = v10;
  v12 = 0LL;
  v38 = 0;
  for ( i = 0; ; i = v33 + 1 )
  {
    v33 = i;
    if ( i >= v3 )
      break;
    Object = 0LL;
    v14 = ObReferenceObjectByHandle(*(HANDLE *)&a1[2 * i + 2], 4u, WmipGuidObjectType, 1, &Object, 0LL);
    v40 = v14;
    if ( v14 < 0 )
    {
      v25 = v14;
      goto LABEL_28;
    }
    v15 = Object;
    for ( j = 0; j < (unsigned int)v12; ++j )
    {
      if ( Object == *(PVOID *)&Pool2[16 * j] )
      {
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        v10 = v36;
        v8 = v37;
        v11 = v38;
        goto LABEL_15;
      }
    }
    v10 = (unsigned __int8)v36;
    if ( *((_QWORD *)Object + 9) )
      v10 = 1LL;
    v17 = 2LL * (unsigned int)v12;
    v12 = (unsigned int)(v12 + 1);
    v36 = v10;
    *(_QWORD *)&Pool2[8 * v17] = Object;
    if ( *((_QWORD *)v15 + 12) )
    {
      if ( v15[29] )
        v9 = 1;
      v35 = v9;
    }
    if ( *((_QWORD *)v15 + 16) )
    {
      v30 = v39;
      if ( v15[37] )
        v30 = 1;
      v39 = v30;
    }
    v8 = ((v15[29] + 7) & 0xFFFFFFF8) + v37;
    v37 += (v15[29] + 7) & 0xFFFFFFF8;
    v11 = ((v15[37] + 7) & 0xFFFFFFF8) + v38;
    v38 = v11;
LABEL_15:
    ;
  }
  v18 = v8 + v11;
  v34 = v18;
  if ( (_BYTE)v10 == 1 && (_DWORD)v12 )
  {
    v31 = Pool2;
    v32 = (unsigned int)v12;
    do
    {
      if ( *(_QWORD *)(*v31 + 72LL) )
        WmipCompleteGuidIrpWithError(*v31, v10, v8, 1LL);
      v31 += 2;
      --v32;
    }
    while ( v32 );
    v18 = v34;
    v9 = v35;
  }
  if ( (unsigned __int8)v39 | (unsigned __int8)v9 )
  {
    if ( v18 > v5 )
    {
      v29 = 56;
      a1[11] = 32;
      *a1 = 56;
      a1[12] = v18;
    }
    else
    {
      v28 = v5;
      if ( v9 )
      {
        WmipCopyFromEventQueues(Pool2, (unsigned int)v12, a1);
        v28 = v5;
      }
      if ( v39 )
        WmipCopyFromEventQueues(Pool2, (unsigned int)v12, a1);
      v29 = v5 - v28;
    }
    v25 = v40;
    *v42 = v29;
  }
  else
  {
    v19 = a3 + 120;
    v20 = 0;
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    *(_QWORD *)(a3 + 128) = a3 + 120;
    *(_QWORD *)(a3 + 120) = a3 + 120;
    for ( LockHandle.LockQueue = 0LL; v20 < (unsigned int)v12; *(_QWORD *)(a3 + 128) = v22 )
    {
      v21 = *(_QWORD *)&Pool2[16 * v20];
      *(_QWORD *)(v21 + 72) = a3;
      v22 = (_QWORD *)(v21 + 80);
      v23 = *(_QWORD **)(a3 + 128);
      if ( *v23 != v19 )
        __fastfail(3u);
      *v22 = v19;
      ++v20;
      v22[1] = v23;
      *v23 = v22;
    }
    v25 = 259;
    v26 = 0;
    *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
    KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, &LockHandle);
    _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)&WmipNotificationIrpCancel);
    if ( *(_BYTE *)(a3 + 68) )
    {
      WmipClearIrpObjectList(a3);
      v25 = -1073741536;
      v26 = _InterlockedExchange64((volatile __int64 *)(a3 + 104), 0LL) != 0;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v26 )
    {
      *(_DWORD *)(a3 + 48) = -1073741536;
      *(_QWORD *)(a3 + 56) = 0LL;
      IofCompleteRequest((PIRP)a3, 0);
    }
    *v42 = 0;
  }
LABEL_28:
  KeReleaseMutantEx((struct _KTHREAD *)&WmipSMMutex);
  if ( (_DWORD)v12 )
  {
    v27 = (PVOID *)Pool2;
    do
    {
      ObfDereferenceObjectWithTag(*v27, 0x746C6644u);
      v27 += 2;
      --v12;
    }
    while ( v12 );
  }
  if ( Pool2 != P )
    ExFreePoolWithTag(Pool2, 0);
  return v25;
}
