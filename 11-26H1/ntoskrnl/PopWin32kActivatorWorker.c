/*
 * XREFs of PopWin32kActivatorWorker @ 0x140AAC5B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404DE3B8 (PopOkayToQueueNextWorkItem.c)
 */

__int64 __fastcall PopWin32kActivatorWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbx
  unsigned __int64 *Padding; // rax
  void **p_KernelShadowStackBase; // rcx
  __int64 v7; // rax
  unsigned __int64 *v8; // rcx
  void **v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  wchar_t *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+50h] [rbp-30h]
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+70h] [rbp-10h]
  int v23; // [rsp+98h] [rbp+18h] BYREF

  v23 = 0;
  v22 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12420.SchedulerAssistPriorityFloor, a2, a3, a4);
LABEL_2:
  v4 = 0LL;
  Padding = stru_140F12420.Padding;
  p_KernelShadowStackBase = &stru_140F12420.KernelShadowStackBase;
  do
  {
    if ( *(_DWORD *)p_KernelShadowStackBase && !*(_BYTE *)Padding )
    {
LABEL_15:
      PopReleaseRwLock((struct _KTHREAD *)&stru_140F12420.SchedulerAssistPriorityFloor);
      v22 = 0LL;
      v14 = PopWin32kRequestQueueTypeStrings[v4];
      v19 = 0x12C00000001uLL;
      v20 = (unsigned __int64)v14;
      v21 = 0LL;
      if ( (int)Pdcv2ActivationClientActivate(
                  stru_140F12420.KernelShadowStackInitial,
                  &v19,
                  v4,
                  1LL,
                  L"RequestQueue",
                  0,
                  &stru_140F12420.Padding[v4 + 4],
                  &v23) < 0 )
        stru_140F12420.Padding[v4 + 4] = 0LL;
      PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12420.SchedulerAssistPriorityFloor, v15, v16, v17);
      *((_BYTE *)stru_140F12420.Padding + v4) = 1;
      goto LABEL_2;
    }
    v4 = (unsigned int)(v4 + 1);
    p_KernelShadowStackBase = (void **)((char *)p_KernelShadowStackBase + 4);
    Padding = (unsigned __int64 *)((char *)Padding + 1);
  }
  while ( (unsigned int)v4 < 0x20 );
  v4 = (unsigned int)v4;
  if ( (_DWORD)v4 != 32 )
    goto LABEL_15;
  v7 = 0LL;
  v8 = stru_140F12420.Padding;
  v9 = &stru_140F12420.KernelShadowStackBase;
  while ( 1 )
  {
    if ( !*(_DWORD *)v9 && *(_BYTE *)v8 )
    {
LABEL_11:
      v10 = (unsigned int)v7;
      if ( stru_140F12420.Padding[v7 + 4] )
      {
        PopReleaseRwLock((struct _KTHREAD *)&stru_140F12420.SchedulerAssistPriorityFloor);
        Pdcv2ActivationClientDeactivate(stru_140F12420.Padding[v10 + 4]);
        stru_140F12420.Padding[v10 + 4] = 0LL;
        PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12420.SchedulerAssistPriorityFloor, v11, v12, v13);
      }
      *((_BYTE *)stru_140F12420.Padding + v10) = 0;
      goto LABEL_2;
    }
    v7 = (unsigned int)(v7 + 1);
    v9 = (void **)((char *)v9 + 4);
    v8 = (unsigned __int64 *)((char *)v8 + 1);
    if ( (_DWORD)v7 == 32 )
      break;
    if ( (unsigned int)v7 >= 0x20 )
      goto LABEL_11;
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_140F129D8);
  return PopReleaseRwLock((struct _KTHREAD *)&stru_140F12420.SchedulerAssistPriorityFloor);
}
