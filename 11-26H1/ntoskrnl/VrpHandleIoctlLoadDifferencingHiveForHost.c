/*
 * XREFs of VrpHandleIoctlLoadDifferencingHiveForHost @ 0x1408AB974
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140939F20 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     VrpLoadDifferencingHive @ 0x14093B56C (VrpLoadDifferencingHive.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlLoadDifferencingHiveForHost(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  int v6; // eax
  int v7; // ecx
  int v8; // r8d
  unsigned int v9; // ebx
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned __int16 v12; // dx
  unsigned __int64 v13; // rax
  _WORD *Pool2; // rsi
  int DifferencingHive; // edi
  struct _KLOCK_ENTRIES *v16; // r9
  AutoBoost *v17; // rax
  void *v18; // rdx
  signed __int8 v19; // cf
  AutoBoost *v20; // rdi
  void *Src[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  __int128 v24; // [rsp+60h] [rbp-10h] BYREF

  v23 = 0LL;
  v24 = 0LL;
  *(_OWORD *)Src = 0LL;
  if ( a2 < 0x20 )
    return (unsigned int)-1073741811;
  v6 = *(unsigned __int16 *)(a1 + 8);
  if ( (v6 & 1) != 0 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned __int16 *)(a1 + 10);
  if ( (v7 & 1) != 0 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned __int16 *)(a1 + 12);
  if ( (v8 & 1) != 0 )
    return (unsigned int)-1073741811;
  v9 = 0;
  if ( !(_WORD)v6 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)v7 )
    return (unsigned int)-1073741811;
  v10 = v6 + 24;
  v11 = v10 + v7;
  if ( v10 > v11 || v11 > v11 + v8 || a2 < v11 + v8 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( SeSinglePrivilegeCheck(SeBackupPrivilege, a3) && SeSinglePrivilegeCheck(SeRestorePrivilege, a3) )
  {
    v12 = *(_WORD *)(a1 + 8);
    Src[1] = (void *)(a1 + 24);
    WORD1(Src[0]) = v12;
    LOWORD(Src[0]) = v12;
    v13 = *(unsigned __int16 *)(a1 + 10);
    WORD1(v24) = v13;
    LOWORD(v24) = v13;
    *((_QWORD *)&v24 + 1) = a1 + 24 + 2 * ((unsigned __int64)v12 >> 1);
    *((_QWORD *)&v23 + 1) = *((_QWORD *)&v24 + 1) + 2 * (v13 >> 1);
    WORD1(v23) = *(_WORD *)(a1 + 12);
    LOWORD(v23) = WORD1(v23);
    Pool2 = (_WORD *)ExAllocatePool2(0x101uLL);
    if ( Pool2 )
    {
      Pool2[4] = Src[0];
      memmove(Pool2 + 5, Src[1], LOWORD(Src[0]));
      DifferencingHive = VrpLoadDifferencingHive(
                           (unsigned int)Src,
                           (unsigned int)&v24,
                           (unsigned int)&v23,
                           *(_DWORD *)a1,
                           *(_DWORD *)(a1 + 4) & 1,
                           (*(_DWORD *)(a1 + 4) >> 1) & 1,
                           0,
                           *(_QWORD *)(a1 + 16));
      if ( DifferencingHive < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
        return (unsigned int)DifferencingHive;
      }
      else
      {
        v17 = (AutoBoost *)KeAbPreAcquire((__int64)&WheapPfaLock.WpsFeedback, 0LL, 0LL, v16);
        v19 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock.WpsFeedback, 0LL);
        v20 = v17;
        if ( v19 )
          ExfAcquirePushLockExclusiveEx(
            (unsigned __int64 *)&WheapPfaLock.WpsFeedback,
            v17,
            (__int64)&WheapPfaLock.WpsFeedback);
        if ( v20 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v20, v18);
          else
            *((_BYTE *)v20 + 10) = 1;
        }
        *(_QWORD *)Pool2 = WheapPfaLock.Spare35[0];
        WheapPfaLock.Spare35[0] = (unsigned __int64)Pool2;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock.WpsFeedback, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock.WpsFeedback);
        KeAbPostRelease((unsigned __int64)&WheapPfaLock.WpsFeedback);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741727;
  }
  return v9;
}
