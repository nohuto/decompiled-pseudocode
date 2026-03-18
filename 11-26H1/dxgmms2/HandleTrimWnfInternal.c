/*
 * XREFs of HandleTrimWnfInternal @ 0x1400A6470
 * Callers:
 *     ?VidMmHandleTrimWnf@@YAXPEAVVIDMM_GLOBAL@@_N@Z @ 0x14010C844 (-VidMmHandleTrimWnf@@YAXPEAVVIDMM_GLOBAL@@_N@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400292B0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     TryTrimWnfProcess @ 0x1400A6574 (TryTrimWnfProcess.c)
 *     ?VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x14010C224 (-VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@.c)
 */

__int64 *__fastcall HandleTrimWnfInternal(VIDMM_GLOBAL *this, __int64 a2, __int64 **a3, __int64 a4, char a5)
{
  _QWORD *v5; // rdi
  __int64 v6; // r10
  char v7; // r13
  __int64 **v8; // rsi
  __int64 v10; // rdx
  __int64 *result; // rax
  __int64 v12; // r9
  __int64 v13; // r10
  char v14; // bp
  __int64 **v15; // r14
  _BYTE v16[32]; // [rsp+30h] [rbp-48h] BYREF

  v5 = a3 + 3;
  v6 = *((_QWORD *)this + 571) - (_QWORD)a3[2];
  v7 = 0;
  v8 = a3;
  if ( !*((_BYTE *)a3 + 32) || a2 != *v5 )
  {
    v10 = a4;
    if ( v6 < a4 )
      v10 = a4 - v6;
    LOBYTE(a3) = 5;
    result = (__int64 *)VidMmSetWorkerThreadTimeout(*(_QWORD *)this, -v10, a3);
    v7 = v13 >= v12;
  }
  if ( a5 || v7 )
  {
    v14 = 1;
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v16, (struct _KTHREAD **)this + 5152);
    v15 = (__int64 **)*v8;
    if ( *v8 != (__int64 *)v8 )
    {
      do
      {
        TryTrimWnfProcess(this, (VIDMM_PROCESS_ADAPTER_INFO *)(v15 - 7), v7, *v5 == 0LL);
        v14 &= *((_BYTE *)v15 + 124);
        v15 = (__int64 **)*v15;
      }
      while ( v15 != v8 );
      v5 = v8 + 3;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
    *v5 = a2;
    *((_BYTE *)v8 + 32) = v14;
    result = (__int64 *)*((_QWORD *)this + 571);
    v8[2] = result;
  }
  return result;
}
