/*
 * XREFs of VidSchiSuspendResumeHwContext @ 0x14000619C
 * Callers:
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x140007D9C (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14000AC8C (-VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14000AD98 (-VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z @ 0x140027010 (-VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z.c)
 *     VidSchiSignalRegisteredEvent @ 0x1400270D0 (VidSchiSignalRegisteredEvent.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchiEnsureRootPageTableUpdated @ 0x140106870 (VidSchiEnsureRootPageTableUpdated.c)
 */

__int64 __fastcall VidSchiSuspendResumeHwContext(char *a1, char a2)
{
  __int64 v4; // r15
  LARGE_INTEGER *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbx
  LARGE_INTEGER *v8; // rsi
  bool v9; // zf
  DWORD v10; // esi
  __int64 v11; // rbx
  _QWORD **v13; // rdi
  _QWORD *j; // rbx
  _QWORD **v15; // rdi
  _QWORD *i; // rbx
  __int64 v17; // [rsp+20h] [rbp-50h]
  struct _ERESOURCE *Resource; // [rsp+30h] [rbp-40h]
  _QWORD v19[2]; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v20[4]; // [rsp+48h] [rbp-28h] BYREF
  __int16 v21; // [rsp+68h] [rbp-8h]
  _QWORD *v22; // [rsp+B0h] [rbp+40h] BYREF
  _QWORD *v23; // [rsp+C0h] [rbp+50h]
  LARGE_INTEGER *v24; // [rsp+C8h] [rbp+58h]

  v17 = *((_QWORD *)a1 + 1);
  v4 = *(_QWORD *)(v17 + 40);
  Resource = (struct _ERESOURCE *)(*((_QWORD *)a1 + 2) + 1784LL);
  ExAcquireResourceSharedLite(Resource, 1u);
  if ( a2 )
  {
    v21 = 0;
    v20[0] = v4 + 2016;
    AcquireSpinLock::Acquire((AcquireSpinLock *)v20);
    v5 = (LARGE_INTEGER *)(a1 + 232);
    if ( *((_QWORD *)a1 + 29) == *((_QWORD *)a1 + 30) )
    {
      ++*(_DWORD *)(v4 + 80);
      v6 = *((_QWORD *)a1 + 2);
      v22 = a1 + 232;
      v23 = a1 + 240;
      ++*(_DWORD *)(v6 + 1736);
    }
    else
    {
      v22 = a1 + 232;
      v23 = a1 + 240;
    }
    v7 = *((_QWORD *)a1 + 2);
    ++v5->QuadPart;
    v24 = (LARGE_INTEGER *)(*(_QWORD *)(v7 + 184) + 112LL * *(unsigned int *)(v7 + 196));
    v8 = v24;
    memset(v24, 0, 0x70uLL);
    *(_DWORD *)(v7 + 196) = (*(_DWORD *)(v7 + 196) + 1) & (*(_DWORD *)(v7 + 192) - 1);
    v8[1] = KeQueryPerformanceCounter(0LL);
    v8->LowPart = 11;
    v8[2].QuadPart = (LONGLONG)a1;
    v8[3] = *v5;
    AcquireSpinLock::Release((AcquireSpinLock *)v20);
    _InterlockedExchange((volatile __int32 *)(*((_QWORD *)a1 + 2) + 504LL), 1);
    v9 = (*((_DWORD *)a1 + 14) & 0x1000) == 0;
    v19[1] = v5->QuadPart;
    v19[0] = *((_QWORD *)a1 + 6);
    if ( v9 )
      v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[46])(*(_QWORD *)(v4 + 8), v19);
    else
      v10 = 0;
    v24[5].LowPart = v10;
    if ( v10 == 259 )
    {
      v11 = v4 + 2016;
    }
    else
    {
      v11 = v4 + 2016;
      v21 = 0;
      v20[0] = v4 + 2016;
      AcquireSpinLock::Acquire((AcquireSpinLock *)v20);
      if ( *((_QWORD *)a1 + 30) != v5->QuadPart )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a1 + 2) + 1744LL));
        --*(_DWORD *)(v4 + 80);
        --*(_DWORD *)(*((_QWORD *)a1 + 2) + 1736LL);
        *v23 = *v22;
        VidSchiCheckHwSchNodeProgress(*((struct _VIDSCH_NODE **)a1 + 2), 0);
        VidSchiSignalRegisteredEvent(v4, v17 + 176);
      }
      AcquireSpinLock::Release((AcquireSpinLock *)v20);
    }
    v20[0] = v11;
    v21 = 0;
    AcquireSpinLock::Acquire((AcquireSpinLock *)v20);
    if ( !a1[152] )
    {
      a1[152] = 1;
      v15 = (_QWORD **)(a1 + 296);
      for ( i = *v15; i != v15; i = (_QWORD *)*i )
      {
        if ( *((_DWORD *)i + 29) == 1 )
          VidSchiNotifyReadyQueueRemoved((struct VIDSCH_HW_QUEUE *)(i - 1));
      }
    }
  }
  else
  {
    VidSchiEnsureRootPageTableUpdated(a1);
    v9 = (*((_DWORD *)a1 + 14) & 0x1000) == 0;
    v22 = (_QWORD *)*((_QWORD *)a1 + 6);
    if ( v9 )
      v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD **))DxgCoreInterface[47])(*(_QWORD *)(v4 + 8), &v22);
    else
      v10 = 0;
    v21 = 0;
    v20[0] = v4 + 2016;
    AcquireSpinLock::Acquire((AcquireSpinLock *)v20);
    if ( a1[152] )
    {
      a1[152] = 0;
      v13 = (_QWORD **)(a1 + 296);
      for ( j = *v13; j != v13; j = (_QWORD *)*j )
      {
        if ( *((_DWORD *)j + 29) == 1 )
          VidSchiNotifyReadyQueueAdded((struct VIDSCH_HW_QUEUE *)(j - 1));
      }
    }
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v20);
  ExReleaseResourceLite(Resource);
  return v10;
}
