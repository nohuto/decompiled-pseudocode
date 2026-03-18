/*
 * XREFs of ??$GreAcquireSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401AB3CC
 * Callers:
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     DxgkEngAcquireStableSprite @ 0x1401AB340 (DxgkEngAcquireStableSprite.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _GRETHREAD *__fastcall GreAcquireSemaphoreShared<6,>(_QWORD *a1)
{
  struct _GRETHREAD *result; // rax
  unsigned __int64 i; // rcx
  struct _GRETHREAD *v4; // rbx
  __int64 v5; // r8
  int v6; // edx
  int v7; // eax

  EtwTraceGreLockAcquireSemaphoreShared(L"Sprite", *a1 + 1040LL);
  GreAcquireSemaphoreSharedInternal((HSEMAPHORE)(*a1 + 1040LL));
  result = GreGetCurrentThreadCrossSessionCheck();
  v4 = result;
  if ( result )
  {
    v5 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFDFFFFFFFC0uLL) != 0 && (*(_QWORD *)result & 0x40) == 0 )
    {
      v6 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v7 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v5) == 0 )
          v7 = v6;
        v6 = v7;
      }
      if ( v7 > 6 && v7 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    LOBYTE(i) = *((_BYTE *)v4 + 14);
    result = (struct _GRETHREAD *)(unsigned int)(i + 1);
    *((_BYTE *)v4 + 14) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v4 |= 0x40uLL;
  }
  return result;
}
