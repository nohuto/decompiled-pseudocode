/*
 * XREFs of ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_WINEVENT@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x1401AADE8
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1400441AC (xxxProcessNotifyWinEvent.c)
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x1402A65C8 (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockDomainShared<>::UnlockDomainExclusive<DLT_WINEVENT>::UnlockObjectLock<>::UnlockObjectLock<>(
        __int64 a1)
{
  unsigned int DLT; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  tagDomLock *v5; // rcx

  DLT = DLT_WINEVENT::getDLT();
  *(_QWORD *)a1 = GetDomainLockRef(DLT);
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 16) = W32GetUserSessionState(v4, v3) + 42384;
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  v5 = *(tagDomLock **)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( *(_BYTE *)(a1 + 8) )
      tagDomLock::UnLockExclusive(v5);
    else
      tagDomLock::UnLockShared(v5);
  }
  *(_BYTE *)(a1 + 40) = 1;
  return a1;
}
