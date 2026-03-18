/*
 * XREFs of MagContextThreadCallout @ 0x140270AF0
 * Callers:
 *     xxxSetThreadDesktop @ 0x14011499C (xxxSetThreadDesktop.c)
 *     MagControl @ 0x1401B92F0 (MagControl.c)
 *     MagContextDestroy @ 0x140270A90 (MagContextDestroy.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1401BA1A0 (MagpFindThreadContext.c)
 *     ChangeComposableCursor @ 0x140214560 (ChangeComposableCursor.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x140222E8C (DwmAsyncMagnSetDesktopTransform.c)
 *     DwmAsyncMagnDestroy @ 0x14032463C (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1403246EC (DwmAsyncMagnSetDesktopColorTransform.c)
 */

void __fastcall MagContextThreadCallout(_QWORD *a1, __int64 a2, _QWORD *a3, int a4)
{
  _QWORD *ThreadContext; // rdi
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  _QWORD *v9; // rcx
  __int64 *v10; // rbx
  __int64 v11; // rdx
  int v12; // eax
  void *v13; // rax
  __int64 v14; // rax
  void *v15; // rax
  __int64 v16; // rax
  __int64 **v17; // rax
  __int64 v18; // rbx
  void *v19; // rax
  void *v20; // rcx
  void *v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rax

  ThreadContext = a3;
  if ( (a3 || (ThreadContext = MagpFindThreadContext(a1, a2)) != 0LL) && a4 == 1 )
  {
    v6 = (_QWORD *)ThreadContext[5];
    while ( v6 != ThreadContext + 5 )
    {
      v7 = (_QWORD *)*v6;
      v8 = v6;
      v6 = v7;
      if ( (_QWORD *)v7[1] != v8 )
        goto LABEL_28;
      v9 = (_QWORD *)v8[1];
      if ( (_QWORD *)*v9 != v8 )
        goto LABEL_28;
      *v9 = v7;
      v10 = v8 + 3;
      v7[1] = v9;
      v11 = v8[3];
      if ( v11 == -1 )
      {
        v14 = *(_QWORD *)(ThreadContext[2] + 496LL);
        if ( *(_QWORD **)(v14 + 240) == v8 )
        {
          v15 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v14 + 8), -1LL);
          DwmAsyncMagnSetDesktopColorTransform(v15);
          *(_QWORD *)(*(_QWORD *)(ThreadContext[2] + 496LL) + 240LL) = 0LL;
        }
        v16 = *(_QWORD *)(ThreadContext[2] + 496LL);
        if ( *(_QWORD **)(v16 + 232) == v8 )
        {
          v17 = *(__int64 ***)(v16 + 8);
          v18 = **v17;
          v19 = (void *)ReferenceDwmApiPort(*v17, v11);
          DwmAsyncMagnSetDesktopTransform(v19, v18, (__int64 *)&unk_140359FD0, 0, 0);
          *(_QWORD *)(*(_QWORD *)(ThreadContext[2] + 496LL) + 232LL) = 0LL;
        }
      }
      else
      {
        v12 = *((_DWORD *)v8 + 4);
        if ( (v12 & 0x40) != 0 )
        {
          ChangeComposableCursor(0LL, v11);
          *((_DWORD *)v8 + 4) &= ~0x40u;
          v12 = *((_DWORD *)v8 + 4);
          v11 = *v10;
        }
        if ( (v12 & 0x20) == 0 )
        {
          v13 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(ThreadContext[2] + 496LL) + 8LL), v11);
          DwmAsyncMagnDestroy(v13);
        }
        if ( *v10 )
          HMAssignmentUnlock(v8 + 3);
      }
      v20 = (void *)v8[29];
      if ( v20 )
        Win32FreePool(v20);
      v21 = (void *)v8[32];
      if ( v21 )
        Win32FreePool(v21);
      Win32FreePool(v8);
    }
    v22 = *ThreadContext;
    if ( *(_QWORD **)(*ThreadContext + 8LL) != ThreadContext
      || (v23 = (_QWORD *)ThreadContext[1], (_QWORD *)*v23 != ThreadContext) )
    {
LABEL_28:
      __fastfail(3u);
    }
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    Win32FreePool(ThreadContext);
    *(_QWORD *)(a2 + 1360) &= ~8uLL;
  }
}
