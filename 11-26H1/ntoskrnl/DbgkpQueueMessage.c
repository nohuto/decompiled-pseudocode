/*
 * XREFs of DbgkpQueueMessage @ 0x1409CF35C
 * Callers:
 *     DbgkPostModuleMessage @ 0x1404C083C (DbgkPostModuleMessage.c)
 *     DbgkpPostFakeThreadMessages @ 0x140949760 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpSendApiMessage @ 0x1409CEE1C (DbgkpSendApiMessage.c)
 *     DbgkForwardException @ 0x1409CEF30 (DbgkForwardException.c)
 *     DbgkExitThread @ 0x140B3C484 (DbgkExitThread.c)
 *     DbgkSendSystemDllMessages @ 0x140B54778 (DbgkSendSystemDllMessages.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkpQueueMessage(PVOID Object, char *a2, __int64 a3, int a4, PRKEVENT Event)
{
  __int64 v10; // r12
  __int64 Pool2; // rax
  _BYTE *v12; // rbx
  _OWORD *v13; // rax
  _OWORD *v14; // rcx
  __int64 v15; // rdx
  __int128 v16; // xmm1
  struct _FAST_MUTEX *v17; // r15
  struct _LIST_ENTRY *Blink; // rcx
  int v19; // ebp
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  int v23; // ecx
  int v24; // [rsp+30h] [rbp-1C8h]
  _BYTE v25[16]; // [rsp+40h] [rbp-1B8h] BYREF
  struct _KEVENT v26; // [rsp+50h] [rbp-1A8h] BYREF
  int v27; // [rsp+8Ch] [rbp-16Ch]

  memset_0(v25, 0, 0x168uLL);
  v10 = 2LL;
  v24 = a4 & 2;
  if ( (a4 & 2) != 0 )
  {
    Pool2 = ExAllocatePool2(0x41uLL);
    v12 = (_BYTE *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *(_DWORD *)(Pool2 + 76) = a4 | 4;
    ObfReferenceObjectWithTag(Object, 0x4F676244u);
    ObfReferenceObjectWithTag(a2, 0x4F676244u);
    *((_QWORD *)v12 + 10) = KeGetCurrentThread();
  }
  else
  {
    v27 = a4;
    v12 = v25;
    ExAcquireFastMutex((PKGUARDED_MUTEX)&EmpParseLock.ApcStateFill[8]);
    v23 = *(_DWORD *)(a3 + 40);
    Event = (PRKEVENT)*((_QWORD *)Object + 97);
    if ( (v23 == 1 || v23 == 2) && (a2[1440] & 0x40) != 0 )
      Event = 0LL;
    if ( v23 == 5 )
    {
      if ( (*((_DWORD *)a2 + 360) & 0x40) != 0 && (a4 & 0x40) != 0 )
        Event = 0LL;
    }
    else if ( (unsigned int)(v23 - 3) <= 1 && a2[1440] < 0 )
    {
      Event = 0LL;
    }
    KeInitializeEvent(&v26, SynchronizationEvent, 0);
  }
  *((_QWORD *)v12 + 7) = Object;
  v13 = v12 + 88;
  *((_QWORD *)v12 + 8) = a2;
  v14 = (_OWORD *)a3;
  v15 = 2LL;
  do
  {
    *v13 = *v14;
    v13[1] = v14[1];
    v13[2] = v14[2];
    v13[3] = v14[3];
    v13[4] = v14[4];
    v13[5] = v14[5];
    v13[6] = v14[6];
    v13 += 8;
    v16 = v14[7];
    v14 += 8;
    *(v13 - 1) = v16;
    --v15;
  }
  while ( v15 );
  *v13 = *v14;
  *(_OWORD *)(v12 + 40) = *(_OWORD *)(a2 + 1288);
  if ( Event )
  {
    v17 = (struct _FAST_MUTEX *)&Event[1];
    ExAcquireFastMutex((PKGUARDED_MUTEX)&Event[1]);
    if ( (Event[4].Header.LockNV & 1) != 0 )
    {
      v19 = -1073740972;
    }
    else
    {
      Blink = Event[3].Header.WaitListHead.Blink;
      if ( Blink->Flink != &Event[3].Header.WaitListHead )
        __fastfail(3u);
      *(_QWORD *)v12 = (char *)Event + 80;
      *((_QWORD *)v12 + 1) = Blink;
      Blink->Flink = (struct _LIST_ENTRY *)v12;
      Event[3].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v12;
      if ( !v24 )
        KeSetEvent(Event, 0, 0);
      v19 = 0;
    }
    KeReleaseGuardedMutex(v17);
  }
  else
  {
    v19 = -1073740973;
  }
  if ( v24 )
  {
    if ( v19 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x4F676244u);
      ObfDereferenceObjectWithTag(a2, 0x4F676244u);
      ExFreePoolWithTag(v12, 0);
    }
  }
  else
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&EmpParseLock.ApcStateFill[8]);
    if ( v19 >= 0 )
    {
      KeWaitForSingleObject(v12 + 16, Executive, 0, 0, 0LL);
      v19 = *((_DWORD *)v12 + 18);
      v21 = v12 + 88;
      do
      {
        *(_OWORD *)a3 = *v21;
        *(_OWORD *)(a3 + 16) = v21[1];
        *(_OWORD *)(a3 + 32) = v21[2];
        *(_OWORD *)(a3 + 48) = v21[3];
        *(_OWORD *)(a3 + 64) = v21[4];
        *(_OWORD *)(a3 + 80) = v21[5];
        *(_OWORD *)(a3 + 96) = v21[6];
        a3 += 128LL;
        v22 = v21[7];
        v21 += 8;
        *(_OWORD *)(a3 - 16) = v22;
        --v10;
      }
      while ( v10 );
      *(_OWORD *)a3 = *v21;
    }
  }
  return (unsigned int)v19;
}
