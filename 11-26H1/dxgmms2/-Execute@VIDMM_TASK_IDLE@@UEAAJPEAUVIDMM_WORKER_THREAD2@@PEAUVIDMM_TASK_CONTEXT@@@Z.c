/*
 * XREFs of ?Execute@VIDMM_TASK_IDLE@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x1400B8310
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140031E00 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_TASK_IDLE::Execute(
        VIDMM_TASK_IDLE *this,
        struct VIDMM_WORKER_THREAD2 *a2,
        struct VIDMM_TASK_CONTEXT *a3)
{
  union _LARGE_INTEGER *Timeout; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rbx
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  Timeout = 0LL;
  v10 = 0LL;
  if ( *((_DWORD *)a2 + 1362) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v9,
      (struct VIDMM_WORKER_THREAD2 *)((char *)a2 + 5344),
      1);
    v5 = (_QWORD *)*((_QWORD *)a2 + 682);
    v6 = 0LL;
    while ( v5 )
    {
      v6 = v5;
      v5 = (_QWORD *)*v5;
    }
    v7 = v6[7];
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v9);
    v10 = v7;
    Timeout = (union _LARGE_INTEGER *)&v10;
  }
  *((_QWORD *)a2 + 21) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 160, 0LL);
  KeLeaveCriticalRegion();
  KeWaitForSingleObject(*((PVOID *)a2 + 3), Executive, 0, 0, Timeout);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 160, 0LL);
  *((_QWORD *)a2 + 21) = KeGetCurrentThread();
  return 0LL;
}
