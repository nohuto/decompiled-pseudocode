/*
 * XREFs of QueryPendingTerminations @ 0x1400B8E64
 * Callers:
 *     WorkerThreadRun @ 0x1400B91B4 (WorkerThreadRun.c)
 * Callees:
 *     GetPendingTerminations @ 0x14005078C (GetPendingTerminations.c)
 *     ?VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z @ 0x1400990DC (-VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z.c)
 */

char __fastcall QueryPendingTerminations(struct VIDMM_WORKER_THREAD2 *a1)
{
  int PendingTerminations; // eax
  unsigned int v3; // r9d
  char *v4; // rdx
  __int64 **v5; // rcx
  __int64 **v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v10; // [rsp+28h] [rbp-8h]

  v10 = (__int64 **)&v9;
  v9 = (__int64)&v9;
  PendingTerminations = GetPendingTerminations((__int64 *)a1, &v9);
  v3 = PendingTerminations;
  if ( PendingTerminations > 0 )
  {
    v4 = (char *)a1 + 5896;
    if ( *(struct VIDMM_WORKER_THREAD2 **)(*((_QWORD *)a1 + 737) + 8LL) != (struct VIDMM_WORKER_THREAD2 *)((char *)a1 + 5896)
      || (v5 = (__int64 **)*((_QWORD *)a1 + 738), *v5 != (__int64 *)v4)
      || *(__int64 **)(v9 + 8) != &v9
      || *v10 != &v9
      || (*v5 = &v9,
          v6 = v10,
          *((_QWORD *)a1 + 738) = v10,
          *v6 = (__int64 *)v4,
          v7 = v9,
          v10 = v5,
          *(__int64 **)(v9 + 8) != &v9)
      || *v5 != &v9 )
    {
      __fastfail(3u);
    }
    *v5 = (__int64 *)v9;
    *(_QWORD *)(v7 + 8) = v5;
    LOBYTE(PendingTerminations) = VidMmNotifyTaskWork(
                                    a1,
                                    (struct VIDMM_WORKER_THREAD2 *)((char *)a1 + 5392),
                                    (struct VIDMM_WORKER_THREAD2 *)((char *)a1 + 5592),
                                    v3);
  }
  return PendingTerminations;
}
