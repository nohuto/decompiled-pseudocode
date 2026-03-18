/*
 * XREFs of VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x1408A5864
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140977F10 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     VrpUnloadDifferencingHive @ 0x140979448 (VrpUnloadDifferencingHive.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlUnloadDifferencingHiveForHost(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  _QWORD *v5; // r14
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // eax
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  void *v11; // rdx
  signed __int8 v12; // cf
  AutoBoost *v13; // rbx
  unsigned __int64 KernelWaitTime; // rbx
  unsigned __int64 *p_KernelWaitTime; // rdi
  int v16; // eax
  struct _KLOCK_ENTRIES *v17; // r9
  int v18; // edx
  AutoBoost *v19; // rax
  void *v20; // rdx
  AutoBoost *v21; // rsi
  UNICODE_STRING String1; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  v5 = 0LL;
  String1 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned __int16 *)(a1 + 4);
  if ( (v7 & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)v7 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a1 )
    return (unsigned int)-1073741811;
  v8 = v7 + 6;
  if ( v8 < 6 || a2 < v8 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( SeSinglePrivilegeCheck(SeBackupPrivilege, a3) && SeSinglePrivilegeCheck(SeRestorePrivilege, a3) )
  {
    String1.Buffer = (wchar_t *)(a1 + 6);
    String1.MaximumLength = *(_WORD *)(a1 + 4);
    String1.Length = String1.MaximumLength;
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)&WheapPfaLock.ReservedPreviousReadyTimeValue, 0LL, 0LL, v9);
    v12 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock.ReservedPreviousReadyTimeValue, 0LL);
    v13 = v10;
    if ( v12 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&WheapPfaLock.ReservedPreviousReadyTimeValue,
        v10,
        (__int64)&WheapPfaLock.ReservedPreviousReadyTimeValue);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v11);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    KernelWaitTime = WheapPfaLock.KernelWaitTime;
    p_KernelWaitTime = &WheapPfaLock.KernelWaitTime;
    while ( KernelWaitTime )
    {
      String2.Buffer = (wchar_t *)(KernelWaitTime + 10);
      String2.Length = *(_WORD *)(KernelWaitTime + 8);
      String2.MaximumLength = String2.Length;
      if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
      {
        *p_KernelWaitTime = *(_QWORD *)KernelWaitTime;
        v5 = (_QWORD *)KernelWaitTime;
        *(_QWORD *)KernelWaitTime = 0LL;
        break;
      }
      p_KernelWaitTime = (unsigned __int64 *)KernelWaitTime;
      KernelWaitTime = *(_QWORD *)KernelWaitTime;
    }
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&WheapPfaLock.ReservedPreviousReadyTimeValue,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock.ReservedPreviousReadyTimeValue);
    KeAbPostRelease((unsigned __int64)&WheapPfaLock.ReservedPreviousReadyTimeValue);
    if ( v5 )
    {
      v16 = VrpUnloadDifferencingHive(&String1);
      v18 = 0;
      if ( v16 != -1073741772 )
        v18 = v16;
      v6 = v18;
      if ( v18 < 0 )
      {
        v19 = (AutoBoost *)KeAbPreAcquire((__int64)&WheapPfaLock.ReservedPreviousReadyTimeValue, 0LL, 0LL, v17);
        v12 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock.ReservedPreviousReadyTimeValue, 0LL);
        v21 = v19;
        if ( v12 )
          ExfAcquirePushLockExclusiveEx(
            (unsigned __int64 *)&WheapPfaLock.ReservedPreviousReadyTimeValue,
            v19,
            (__int64)&WheapPfaLock.ReservedPreviousReadyTimeValue);
        if ( v21 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v21, v20);
          else
            *((_BYTE *)v21 + 10) = 1;
        }
        *v5 = WheapPfaLock.KernelWaitTime;
        WheapPfaLock.KernelWaitTime = (unsigned __int64)v5;
        if ( (_InterlockedExchangeAdd64(
                (volatile signed __int64 *)&WheapPfaLock.ReservedPreviousReadyTimeValue,
                0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock.ReservedPreviousReadyTimeValue);
        KeAbPostRelease((unsigned __int64)&WheapPfaLock.ReservedPreviousReadyTimeValue);
      }
      else
      {
        ExFreePoolWithTag(v5, 0);
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741772;
    }
  }
  else
  {
    return (unsigned int)-1073741727;
  }
  return v6;
}
