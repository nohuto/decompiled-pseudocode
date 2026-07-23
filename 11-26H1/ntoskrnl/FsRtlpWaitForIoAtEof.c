/*
 * XREFs of FsRtlpWaitForIoAtEof @ 0x140205138
 * Callers:
 *     FsRtlGetIoAtEof @ 0x140204A60 (FsRtlGetIoAtEof.c)
 *     FsRtlAcquireEofLock @ 0x140204E30 (FsRtlAcquireEofLock.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x1402053B0 (KeQueryPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x140205BAC (IoBoostThreadIoPriority.c)
 *     FsRtlAcquireHeaderMutex @ 0x140276E20 (FsRtlAcquireHeaderMutex.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     FsRtlReleaseHeaderMutex @ 0x14027B770 (FsRtlReleaseHeaderMutex.c)
 *     PsBoostThreadIo @ 0x1403053C0 (PsBoostThreadIo.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     KeSetPriorityBoost @ 0x14037D350 (KeSetPriorityBoost.c)
 */

char __fastcall FsRtlpWaitForIoAtEof(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r15
  LegacyAutoBoost *v7; // r14
  __int64 v8; // rdx
  int IoPriorityThread; // esi
  __int64 v10; // r8
  int v11; // eax
  int v12; // r9d
  KPRIORITY PriorityThread; // edi
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  KPRIORITY v16; // eax
  int *v17; // rdx
  int v18; // eax
  __int64 v20; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v21; // [rsp+38h] [rbp-38h]
  __int16 Object; // [rsp+40h] [rbp-30h] BYREF
  char v23; // [rsp+42h] [rbp-2Eh]
  char v24; // [rsp+43h] [rbp-2Dh]
  int v25; // [rsp+44h] [rbp-2Ch]
  _QWORD v26[4]; // [rsp+48h] [rbp-28h] BYREF
  KPRIORITY v27; // [rsp+68h] [rbp-8h]
  int v28; // [rsp+6Ch] [rbp-4h]

  v20 = 0LL;
  v21 = 0LL;
  v24 = 0;
  CurrentThread = KeGetCurrentThread();
  v7 = *(LegacyAutoBoost **)a1;
  IoPriorityThread = PsGetIoPriorityThread(CurrentThread, a2, a3, a4);
  if ( IoPriorityThread >= 2 )
    IoPriorityThread = 2;
  if ( !*(_BYTE *)(a1 + 36) && IoPriorityThread > 1 )
  {
    v11 = PsGetIoPriorityThread(v7, v8, v10, 2LL);
    if ( v11 < v12 )
    {
      PsBoostThreadIo(v7);
      IoBoostThreadIoPriority(v7, (unsigned int)IoPriorityThread, 0LL);
      *(_BYTE *)(a1 + 36) = 1;
    }
  }
  PriorityThread = KeQueryPriorityThread(CurrentThread);
  if ( PriorityThread >= 15 )
    PriorityThread = 15;
  if ( PriorityThread > *(_DWORD *)(a1 + 32) )
  {
    *(_DWORD *)(a1 + 32) = PriorityThread;
    if ( PriorityThread > KeQueryPriorityThread((PKTHREAD)v7) )
      KeSetPriorityBoost(v7, (unsigned int)PriorityThread);
  }
  v14 = *(_QWORD *)(a1 + 16);
  while ( v14 != a1 + 8 )
  {
    v16 = *(_DWORD *)(v14 + 56);
    v17 = (int *)(v14 + 60);
    if ( v16 < PriorityThread )
    {
      v16 = PriorityThread;
    }
    else if ( *v17 >= IoPriorityThread )
    {
      break;
    }
    *(_DWORD *)(v14 + 56) = v16;
    v18 = *v17;
    v14 = *(_QWORD *)(v14 + 8);
    if ( IoPriorityThread > *v17 )
      v18 = IoPriorityThread;
    *v17 = v18;
  }
  Object = 1;
  v26[1] = v26;
  v26[0] = v26;
  v15 = *(_QWORD **)(a1 + 16);
  v23 = 6;
  v25 = 0;
  v26[3] = CurrentThread;
  v27 = PriorityThread;
  v28 = IoPriorityThread;
  v26[2] = a3;
  if ( *v15 != a1 + 8 )
    __fastfail(3u);
  v21 = v15;
  v20 = a1 + 8;
  *v15 = &v20;
  *(_QWORD *)(a1 + 16) = &v20;
  FsRtlReleaseHeaderMutex(a1, a2);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  FsRtlAcquireHeaderMutex(a1, a2);
  if ( a3 >= 0 && a3 <= *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) )
    return 0;
  if ( IoPriorityThread < 2 && !*(_BYTE *)(a1 + 36) && v28 >= 2 )
  {
    PsBoostThreadIo((LegacyAutoBoost *)CurrentThread);
    *(_BYTE *)(a1 + 36) = 1;
  }
  return 1;
}
