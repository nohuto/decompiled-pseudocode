/*
 * XREFs of ?Execute@VIDMM_TASK_PENALTY_BOX@@UEAAJPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK_CONTEXT@@@Z @ 0x1400B84D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     VidSchDeviceQueuesNotEmpty @ 0x140042B5C (VidSchDeviceQueuesNotEmpty.c)
 *     ?VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z @ 0x1400990DC (-VidMmNotifyTaskWork@@YA_NPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_SCHCLASS@@PEAUVIDMM_TASK@@K@Z.c)
 *     ?VidMmSwapSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1400B9098 (-VidMmSwapSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@.c)
 */

__int64 __fastcall VIDMM_TASK_PENALTY_BOX::Execute(
        VIDMM_TASK_PENALTY_BOX *this,
        struct VIDMM_WORKER_THREAD2 *a2,
        struct VIDMM_TASK_CONTEXT *a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // r14
  _QWORD *v7; // rdi
  __int64 v8; // r8
  char v9; // r15
  _BYTE v11[56]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0LL;
  v4 = (_QWORD *)(*(_QWORD *)a2 + 45064LL);
  while ( 1 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v11,
      (struct _KTHREAD **)(*(_QWORD *)a2 + 45000LL));
    v7 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 4568LL) < v7[4] )
    {
      v3 = v7[4];
      break;
    }
    if ( VidSchDeviceQueuesNotEmpty(*(v7 - 19)) || *((_DWORD *)v7 - 30) )
    {
      v9 = 1;
      VidMmNotifyTaskWork(a2, (struct VIDMM_WORKER_THREAD2 *)((char *)a2 + 5392), (struct VIDMM_TASK *)(v7 + 17), 1u);
    }
    else
    {
      v9 = 4;
    }
    LOBYTE(v8) = v9;
    VidMmSwapSuspendList(a2, v7 - 23, v8);
    _InterlockedDecrement((volatile signed __int32 *)this + 18);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
  if ( !v3 )
    return 0LL;
  *((_QWORD *)this + 8) = v3;
  return 3221226029LL;
}
