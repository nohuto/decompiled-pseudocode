/*
 * XREFs of ??0?$PushLockSharedObj@$0A@$0A@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14007253C
 * Callers:
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x140282670 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071770 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall PushLockSharedObj<0,0>::PushLockSharedObj<0,0>(_QWORD *a1, __int64 a2)
{
  struct W32_PUSH_LOCK *v2; // rsi
  struct _GRETHREAD *v4; // rax
  struct _GRETHREAD *v5; // rbx
  unsigned __int64 v6; // rdx
  char v7; // dl
  int v9; // ecx
  unsigned __int64 i; // r8
  int v11; // eax

  v2 = (struct W32_PUSH_LOCK *)(a2 + 8624);
  *a1 = a2 + 8624;
  v4 = GreGetCurrentThreadCrossSessionCheck();
  v5 = v4;
  if ( v4 )
  {
    v6 = *(_QWORD *)v4 & 0xFFFFFFDFFFFFFFFFuLL;
    if ( v6 && (*(_BYTE *)v4 & 1) == 0 )
    {
      v9 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v11 = i;
        if ( !_bittest64((const __int64 *)&v6, i) )
          v11 = v9;
        v9 = v11;
      }
      if ( v11 > 0 && v11 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)v11, v6);
    }
    v7 = *((_BYTE *)v5 + 8);
    *((_BYTE *)v5 + 8) = v7 + 1;
    if ( !v7 )
      *(_QWORD *)v5 |= 1uLL;
  }
  W32AcquirePushLockSharedEx(v2, 2u);
  return a1;
}
