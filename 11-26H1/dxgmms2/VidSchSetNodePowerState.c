/*
 * XREFs of VidSchSetNodePowerState @ 0x140043D00
 * Callers:
 *     <none>
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiUpdateContextStatus @ 0x140020F00 (VidSchiUpdateContextStatus.c)
 *     ?AddHwQueue@HwQueueStagingList@@QEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14002C71C (-AddHwQueue@HwQueueStagingList@@QEAAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

void __fastcall VidSchSetNodePowerState(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 *v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rdi
  char v8; // r14
  _QWORD *v9; // rsi
  char i; // r15
  _QWORD *v11; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // rdx
  __int64 v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-40h] BYREF
  struct _KEVENT *v16; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-20h] BYREF
  char v18; // [rsp+50h] [rbp-10h]
  int v19; // [rsp+54h] [rbp-Ch]

  v4 = *(__int64 **)(a1 + 696);
  v6 = (unsigned int)a3 + *(unsigned __int8 *)((unsigned int)a2 + a1 + 96);
  if ( (unsigned int)v6 < *(_DWORD *)(a1 + 768) )
    v4 += v6;
  v7 = *v4;
  if ( a4 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 184)
      || *(_BYTE *)(a1 + 62)
      || (unsigned int)KeIsExecutingDpc(a1, a2, a3) )
    {
      v8 = 1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2016), &LockHandle);
    }
    else
    {
      v8 = 0;
    }
    *(_BYTE *)(v7 + 16524) = 1;
    v9 = (_QWORD *)(v7 + 2728);
    for ( i = 0; ; i = 1 )
    {
      v11 = (_QWORD *)*v9;
      if ( (_QWORD *)*v9 == v9 )
        break;
      *((_DWORD *)v11 + 46) &= ~0x80u;
      VidSchiUpdateContextStatus((__int64)(v11 - 1), 5, 13294LL);
    }
    v16 = (struct _KEVENT *)a1;
    v18 = 0;
    v17[1] = v17;
    v12 = (_QWORD *)(v7 + 2760);
    v19 = 2;
    v17[0] = v17;
    while ( 1 )
    {
      v13 = (_QWORD *)*v12;
      if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v14 = *v13, *(_QWORD **)(*v13 + 8LL) != v13) )
        __fastfail(3u);
      *v12 = v14;
      *(_QWORD *)(v14 + 8) = v12;
      if ( v13 == v12 )
        break;
      *v13 = 0LL;
      v13[1] = 0LL;
      HwQueueStagingList::AddHwQueue((HwQueueStagingList *)&v16, (struct VIDSCH_HW_QUEUE *)(v13 - 24));
    }
    HwQueueStagingList::~HwQueueStagingList(&v16);
    if ( v8 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( i )
    {
      *(_QWORD *)(a1 + 1496) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(a1 + 1464), 0, 0);
    }
  }
  else
  {
    *(_BYTE *)(v7 + 16524) = 0;
  }
}
