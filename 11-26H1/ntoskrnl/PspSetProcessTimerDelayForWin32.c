/*
 * XREFs of PspSetProcessTimerDelayForWin32 @ 0x14061A328
 * Callers:
 *     PspApplyTimerDelayProcess @ 0x140619E40 (PspApplyTimerDelayProcess.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     PsInvokeWin32Callout @ 0x1409FCB60 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PspSetProcessTimerDelayForWin32(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v4; // rbx
  volatile unsigned __int8 *v6; // rdx
  _BYTE *v7; // rdi
  __int64 v8; // rdx
  signed __int64 v9; // rax
  unsigned __int64 v11; // rbx
  _QWORD v12[3]; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+3Ch] [rbp-1Ch]
  int SessionId; // [rsp+60h] [rbp+8h] BYREF

  v4 = (signed __int64 *)(a1 + 456);
  v12[0] = 0LL;
  v12[1] = 0LL;
  v7 = (_BYTE *)KeAbPreAcquire(a1 + 456, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, (LegacyAutoBoost *)v7, (struct _KTHREAD *)v4);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v6) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v7 + 33), v6, 1);
    }
    else
    {
      v7[10] = 1;
    }
  }
  v8 = *(_QWORD *)(a1 + 664);
  v9 = _InterlockedCompareExchange64(v4, 0LL, 17LL);
  if ( v8 )
  {
    if ( v9 != 17 )
      ExfReleasePushLockShared(v4);
    KeAbPostRelease((unsigned __int64)v4);
    v11 = *(_QWORD *)(a1 + 1776);
    SessionId = PsGetSessionIdEx(a1);
    v12[2] = a1;
    v13 = v11 & 0x3FFFFFFF;
    v14 = (v11 >> 30) & 0x3FFFFFFF;
    return PsInvokeWin32Callout(41LL, v12, 1LL, &SessionId);
  }
  else
  {
    if ( v9 != 17 )
      ExfReleasePushLockShared(v4);
    KeAbPostRelease((unsigned __int64)v4);
    return 0LL;
  }
}
