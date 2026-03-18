/*
 * XREFs of ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1402236F4
 * Callers:
 *     GreRemoveDisplayDriverRealizations @ 0x140122EA8 (GreRemoveDisplayDriverRealizations.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

HSEMAPHORE *__fastcall SEMOBJ<20>::SEMOBJ<20>(HSEMAPHORE *a1, _QWORD *a2)
{
  HSEMAPHORE v3; // rcx
  struct _GRETHREAD *v4; // rax
  struct _GRETHREAD *v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  int v8; // r8d
  int v9; // eax
  char v10; // cl

  v3 = (HSEMAPHORE)(*a2 + 1512LL);
  *a1 = v3;
  GreAcquireSemaphoreInternal(v3);
  v4 = GreGetCurrentThreadCrossSessionCheck();
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)v4;
    if ( (*(_QWORD *)v4 & 0xFFFFFFFFFFF00000uLL) != 0 && (v6 & 0x100000) == 0 )
    {
      v7 = 0LL;
      v8 = 37;
      do
      {
        v9 = v7;
        if ( !_bittest64(&v6, v7) )
          v9 = v8;
        ++v7;
        v8 = v9;
      }
      while ( v7 < 0x40 );
      if ( v9 > 20 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v10 = *((_BYTE *)v5 + 28);
    *((_BYTE *)v5 + 28) = v10 + 1;
    if ( !v10 )
      *(_QWORD *)v5 |= 0x100000uLL;
  }
  return a1;
}
