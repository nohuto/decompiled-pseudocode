/*
 * XREFs of IsModerncoreAtomTableSupported @ 0x14023EF58
 * Callers:
 *     UserGlobalAtomTableCallout @ 0x14009CF40 (UserGlobalAtomTableCallout.c)
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 *     JobAddProcessNotify @ 0x1401AD760 (JobAddProcessNotify.c)
 *     JobSetUIRestrictionsNotify @ 0x1401AD7C0 (JobSetUIRestrictionsNotify.c)
 *     JobTerminateNotify @ 0x1401AD7F0 (JobTerminateNotify.c)
 *     ?UserGlobalAtomTableCallout_Old@@YAPEAXXZ @ 0x1401B5AC4 (-UserGlobalAtomTableCallout_Old@@YAPEAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsModerncoreAtomTableSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 3536LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
