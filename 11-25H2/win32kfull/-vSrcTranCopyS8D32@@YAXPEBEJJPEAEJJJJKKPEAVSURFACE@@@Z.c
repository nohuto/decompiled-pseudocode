/*
 * XREFs of ?vSrcTranCopyS8D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F2440
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vSrcTranCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F2680 (-vSrcTranCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 */

void __fastcall vSrcTranCopyS8D32(
        const unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  int v12; // ebp
  int v13; // r14d
  HSEMAPHORE v15; // rbx
  struct _GRETHREAD *v16; // rax
  struct _GRETHREAD *v17; // rdi
  __int64 v18; // rdx
  struct _GRETHREAD *v19; // rax
  bool v20; // zf
  unsigned __int64 v21; // rcx
  int v22; // r8d
  int v23; // eax

  v12 = a3;
  v13 = a2;
  v15 = *(HSEMAPHORE *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 13488LL);
  GreAcquireSemaphoreInternal(v15);
  v16 = GreGetCurrentThreadCrossSessionCheck();
  v17 = v16;
  if ( v16 )
  {
    v18 = *(_QWORD *)v16;
    if ( (*(_QWORD *)v16 & 0xFFFFFFFFFF000000uLL) != 0 && (v18 & 0x1000000) == 0 )
    {
      v21 = 0LL;
      v22 = 37;
      do
      {
        v23 = v21;
        if ( !_bittest64(&v18, v21) )
          v23 = v22;
        ++v21;
        v22 = v23;
      }
      while ( v21 < 0x40 );
      if ( v23 > 24 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    *(_QWORD *)v17 |= 0x1000000uLL;
  }
  vSrcTranCopyS8D32Unsafe(a1, v13, v12, a4, a5, a6, a7, a8, a9, a10, a11);
  if ( v15 )
  {
    EtwTraceGreLockReleaseSemaphore(L"EUDC2", v15);
    v19 = GreGetCurrentThreadCrossSessionCheck();
    if ( v19 )
    {
      v20 = (*(_QWORD *)v19 & 0xFFFFFFFFFEFFFFFFuLL) == 0;
      *(_QWORD *)v19 &= ~0x1000000uLL;
      if ( v20 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v15);
  }
}
