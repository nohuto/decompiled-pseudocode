/*
 * XREFs of AlpcpDestroyPort @ 0x1408F0EE4
 * Callers:
 *     AlpcpDeletePort @ 0x1408F0D70 (AlpcpDeletePort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall AlpcpDestroyPort(__int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi
  __int64 *v9; // rdx
  __int64 **v10; // rax
  void *v11; // rdx

  if ( *a1 )
  {
    v5 = (AutoBoost *)KeAbPreAcquire((__int64)&AlpcpMessageLogLock.FirstArgument, 0LL, 0LL, a4);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock.FirstArgument, 0LL);
    v8 = v5;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&AlpcpMessageLogLock.FirstArgument,
        v5,
        (__int64)&AlpcpMessageLogLock.FirstArgument);
    if ( v8 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v8, v6);
      else
        *((_BYTE *)v8 + 10) = 1;
    }
    v9 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v10 = (__int64 **)a1[1], *v10 != a1) )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = (__int64)v10;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&AlpcpMessageLogLock.FirstArgument,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock.FirstArgument);
    KeAbPostRelease((unsigned __int64)&AlpcpMessageLogLock.FirstArgument);
  }
  if ( (a1[52] & 0x200) != 0 )
  {
    v11 = (void *)a1[31];
    if ( v11 )
      ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&AlpcpNPLookasides, v11);
  }
}
