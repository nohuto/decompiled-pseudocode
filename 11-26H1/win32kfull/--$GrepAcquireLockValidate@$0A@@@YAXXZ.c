/*
 * XREFs of ??$GrepAcquireLockValidate@$0A@@@YAXXZ @ 0x1400F6BC4
 * Callers:
 *     ??$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z @ 0x1400F6B9C (--$GrepAcquirePushLockCommon@$0A@$00P6AXPEAVW32_PUSH_LOCK@@K@Z@@YAXP6AXPEAVW32_PUSH_LOCK@@K@Z0@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _GRETHREAD *GrepAcquireLockValidate<0>()
{
  struct _GRETHREAD *result; // rax
  struct _GRETHREAD *v1; // rbx
  unsigned __int64 v2; // rcx
  int v3; // edx
  unsigned __int64 i; // r8
  int v5; // eax

  result = GreGetCurrentThreadCrossSessionCheck();
  v1 = result;
  if ( result )
  {
    v2 = *(_QWORD *)result & 0xFFFFFFDFFFFFFFFFuLL;
    if ( v2 && (*(_BYTE *)result & 1) == 0 )
    {
      v3 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v5 = i;
        if ( !_bittest64((const __int64 *)&v2, i) )
          v5 = v3;
        v3 = v5;
      }
      if ( v5 > 0 && v5 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, (unsigned int)v5);
    }
    LOBYTE(v2) = *((_BYTE *)v1 + 8);
    result = (struct _GRETHREAD *)(unsigned int)(v2 + 1);
    *((_BYTE *)v1 + 8) = v2 + 1;
    if ( !(_BYTE)v2 )
      *(_QWORD *)v1 |= 1uLL;
  }
  return result;
}
