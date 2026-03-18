/*
 * XREFs of ??$GrepAcquireLockValidate@$0N@@@YAXXZ @ 0x1400B438C
 * Callers:
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x1400B75A0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _GRETHREAD *GrepAcquireLockValidate<13>()
{
  struct _GRETHREAD *result; // rax
  unsigned __int64 i; // rcx
  struct _GRETHREAD *v2; // rbx
  __int64 v3; // r8
  int v4; // edx
  int v5; // eax

  result = GreGetCurrentThreadCrossSessionCheck();
  v2 = result;
  if ( result )
  {
    v3 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFDFFFFFE000uLL) != 0 && (*(_QWORD *)result & 0x2000LL) == 0 )
    {
      v4 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v5 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v3) == 0 )
          v5 = v4;
        v4 = v5;
      }
      if ( v5 > 13 && v5 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v5);
    }
    LOBYTE(i) = *((_BYTE *)v2 + 21);
    result = (struct _GRETHREAD *)(unsigned int)(i + 1);
    *((_BYTE *)v2 + 21) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v2 |= 0x2000uLL;
  }
  return result;
}
