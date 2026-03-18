/*
 * XREFs of ??$GreAcquireSemaphore@$0BM@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140218024
 * Callers:
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x140108DD8 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GreAcquireSemaphore<28,>(__int64 a1)
{
  HSEMAPHORE v1; // rbx
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // r8d

  v1 = *(HSEMAPHORE *)(a1 + 15520);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GlyphSet", v1, 0LL);
  GreAcquireSemaphoreInternal(v1);
  result = (__int64)GreGetCurrentThreadCrossSessionCheck();
  v3 = 0LL;
  v4 = (_QWORD *)result;
  if ( result )
  {
    v5 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFFFF0000000uLL) != 0 && (v5 & 0x10000000) == 0 )
    {
      v6 = 37;
      do
      {
        result = (unsigned int)v3;
        if ( !_bittest64(&v5, v3) )
          result = v6;
        ++v3;
        v6 = result;
      }
      while ( v3 < 0x40 );
      if ( (int)result > 28 )
        result = MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    *v4 |= 0x10000000uLL;
  }
  return result;
}
