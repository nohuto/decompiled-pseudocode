/*
 * XREFs of CcWriteBehindAsync @ 0x1403879F4
 * Callers:
 *     CcAsyncLazywriteWorker @ 0x140387600 (CcAsyncLazywriteWorker.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     CcWriteBehindPreProcess @ 0x140386674 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x140386A84 (CcWriteBehindPostProcess.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     CcFlushCachePreProcess @ 0x14039AF28 (CcFlushCachePreProcess.c)
 *     CcFlushCachePostProcess @ 0x14039B640 (CcFlushCachePostProcess.c)
 *     CcFlushCacheAcquireRange @ 0x14039BA5C (CcFlushCacheAcquireRange.c)
 *     CcFlushCachePostProcessOneRange @ 0x14039BBBC (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCacheOneRange @ 0x14039BEE0 (CcFlushCacheOneRange.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall CcWriteBehindAsync(__int64 a1, _DWORD *a2, _WORD *a3)
{
  int v6; // eax
  _WORD *v7; // rcx
  __int64 v8; // rdx
  int v9; // ebx
  char v10; // al
  _BYTE v12[16]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+68h] [rbp-A0h]
  const void *v14; // [rsp+70h] [rbp-98h]
  int v15; // [rsp+94h] [rbp-74h]
  _WORD *v16; // [rsp+A0h] [rbp-68h]
  struct _LIST_ENTRY **p_Blink; // [rsp+B8h] [rbp-50h]
  int v18; // [rsp+C0h] [rbp-48h]
  _DWORD *v19; // [rsp+C8h] [rbp-40h]
  __int16 v20; // [rsp+E0h] [rbp-28h]
  char v21; // [rsp+E3h] [rbp-25h]
  __int64 v22; // [rsp+140h] [rbp+38h]
  LARGE_INTEGER PerformanceCounter; // [rsp+148h] [rbp+40h]
  int v24; // [rsp+150h] [rbp+48h]
  __int64 v25; // [rsp+160h] [rbp+58h]

  while ( 1 )
  {
    memset_0(v12, 0, 0x110uLL);
    v19 = a2;
    v20 = 0;
    v25 = a1;
    v21 = 0;
    v6 = CcWriteBehindPreProcess((__int64)v12);
    if ( v6 == 2 )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      return 2LL;
    }
    if ( v6 == 1 )
      break;
    v18 = 1;
    p_Blink = &EmpParseLock.GlobalForegroundListEntry.Blink;
    v16 = a3;
    if ( (unsigned __int8)CcFlushCachePreProcess(v12) )
    {
      v7 = v16;
      v8 = v13;
      p_Blink = 0LL;
      *v16 = 1;
      *((_BYTE *)v7 + 2) = 6;
      *((_DWORD *)v7 + 1) = 0;
      *((_QWORD *)v7 + 2) = v7 + 4;
      *((_QWORD *)v7 + 1) = v7 + 4;
      if ( v8 && (*(_DWORD *)(v8 + 152) & 0x4000000) == 0 )
      {
        do
        {
          if ( !(unsigned __int8)CcFlushCacheAcquireRange(v12) )
            break;
          CcFlushCacheOneRange(v12);
          if ( !v15 )
            KeWaitForSingleObject(a3, Executive, 0, 0, 0LL);
        }
        while ( (unsigned __int8)CcFlushCachePostProcessOneRange(v12) );
        if ( v22 && v24 )
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
      }
      CcFlushCachePostProcess(v12);
    }
    else
    {
      DbgPrintEx(
        0x7Fu,
        3u,
        "[%04x:%04x]CcWriteBehindAsync: PreProcess returned FALSE, nothing to do (SOP=%p, IoStatus=0x%x)\n",
        LODWORD(KeGetCurrentThread()[1].CycleTime),
        KeGetCurrentThread()[1].CurrentRunTime,
        v14,
        *a2);
    }
    v9 = (unsigned __int8)CcWriteBehindPostProcess((__int64)v12, 0);
    v10 = HIBYTE(v20);
    if ( !(_BYTE)v9 || HIBYTE(v20) )
    {
      DbgPrintEx(
        0x7Fu,
        3u,
        "[%04x:%04x]CcWriteBehindAsync: PostProc:%d, Retry:%d, PVCM:%p(vid:%2lx)\n",
        LODWORD(KeGetCurrentThread()[1].CycleTime),
        KeGetCurrentThread()[1].CurrentRunTime,
        v9,
        HIBYTE(v20),
        *(const void **)(a1 + 144),
        *(_DWORD *)(*(_QWORD *)(a1 + 144) + 24LL));
      v10 = HIBYTE(v20);
    }
    if ( (_BYTE)v9 || !v10 )
      return 0LL;
  }
  DbgPrintEx(
    0x7Fu,
    3u,
    "[%04x:%04x]CcWriteBehindAsync: WBPreProcess FAILED (%lx): PVCM:%p(vid:%2lx)\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    1,
    *(const void **)(a1 + 144),
    *(_DWORD *)(*(_QWORD *)(a1 + 144) + 24LL));
  return 1LL;
}
