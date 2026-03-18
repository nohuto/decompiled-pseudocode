/*
 * XREFs of GreSfmDwmShutdown @ 0x1401D1E20
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400730C4 (--$GreReleaseSemaphoreCommon@$06P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007495C (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x140117EE0 (-DeInitialize@SfmTokenArray@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall GreSfmDwmShutdown(__int64 a1))(void)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 (*result)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  SEMOBJ<7>::SEMOBJ<7>(&v7, (_QWORD *)v1);
  SfmTokenArray::DeInitialize(*(char ***)(v1 + 4232));
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3, v2) + 24) + 2488LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 24) + 2496LL);
      if ( result )
        result = (__int64 (*)(void))result();
    }
  }
  if ( v7 )
    return (__int64 (*)(void))GreReleaseSemaphoreCommon<7,void (*)(HSEMAPHORE__ *)>(
                                (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
                                v7);
  return result;
}
