/*
 * XREFs of ??0?$SEMOBJ@$0BL@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140304244
 * Callers:
 *     ?GetModuleHandleAndIncrementRefcount@@YAPEAXPEBG@Z @ 0x1403042D0 (-GetModuleHandleAndIncrementRefcount@@YAPEAXPEBG@Z.c)
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1403043B8 (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 *     EngFreeModule @ 0x140304590 (EngFreeModule.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<27>::SEMOBJ<27>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx
  struct _GRETHREAD *v4; // rax
  unsigned __int64 v5; // r8
  struct _GRETHREAD *v6; // rbx
  __int64 v7; // r9
  int v8; // ecx
  int v9; // eax

  v3 = (HSEMAPHORE)(*a2 + 1616LL);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  v5 = 0LL;
  v6 = v4;
  if ( v4 )
  {
    v7 = *(_QWORD *)v4;
    if ( (*(_QWORD *)v4 & 0xFFFFFFFFF8000000uLL) != 0 && (*(_QWORD *)v4 & 0x8000000LL) == 0 )
    {
      v8 = 37;
      do
      {
        v9 = v5;
        if ( !_bittest64(&v7, v5) )
          v9 = v8;
        ++v5;
        v8 = v9;
      }
      while ( v5 < 0x40 );
      if ( v9 > 27 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    *(_QWORD *)v6 |= 0x8000000uLL;
  }
  return a1;
}
