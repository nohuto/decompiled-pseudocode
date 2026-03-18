/*
 * XREFs of ??$GrepAcquireLockValidate@$0O@@@YAXXZ @ 0x140013E20
 * Callers:
 *     GreClientRgnUpdatedStable @ 0x140013468 (GreClientRgnUpdatedStable.c)
 *     GreClientRgnUpdated @ 0x140013A14 (GreClientRgnUpdated.c)
 *     ??0?$SEMOBJSHARED@$0O@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140013DE8 (--0-$SEMOBJSHARED@$0O@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400AB4C4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x1400BA570 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _GRETHREAD *GrepAcquireLockValidate<14>()
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
    if ( (*(_QWORD *)result & 0xFFFFFFDFFFFFC000uLL) != 0 && (v3 & 0x4000) == 0 )
    {
      v4 = 38;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v5 = i;
        if ( ((1LL << i) & 0xFFFFFFDFFFFFFFFFuLL & v3) == 0 )
          v5 = v4;
        v4 = v5;
      }
      if ( v5 > 14 && v5 != 38 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v5);
    }
    LOBYTE(i) = *((_BYTE *)v2 + 22);
    result = (struct _GRETHREAD *)(unsigned int)(i + 1);
    *((_BYTE *)v2 + 22) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v2 |= 0x4000uLL;
  }
  return result;
}
