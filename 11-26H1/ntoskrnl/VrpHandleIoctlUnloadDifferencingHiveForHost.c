/*
 * XREFs of VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x1408ABCD4
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140939F20 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     VrpUnloadDifferencingHive @ 0x14093B458 (VrpUnloadDifferencingHive.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  unsigned __int64 v14; // rbx
  unsigned __int64 *Spare35; // rdi
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
    v10 = (AutoBoost *)KeAbPreAcquire((__int64)&WheapPfaLock.WpsFeedback, 0LL, 0LL, v9);
    v12 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock.WpsFeedback, 0LL);
    v13 = v10;
    if ( v12 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&WheapPfaLock.WpsFeedback,
        v10,
        (__int64)&WheapPfaLock.WpsFeedback);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v11);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    v14 = WheapPfaLock.Spare35[0];
    Spare35 = WheapPfaLock.Spare35;
    while ( v14 )
    {
      String2.Buffer = (wchar_t *)(v14 + 10);
      String2.Length = *(_WORD *)(v14 + 8);
      String2.MaximumLength = String2.Length;
      if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
      {
        *Spare35 = *(_QWORD *)v14;
        v5 = (_QWORD *)v14;
        *(_QWORD *)v14 = 0LL;
        break;
      }
      Spare35 = (unsigned __int64 *)v14;
      v14 = *(_QWORD *)v14;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock.WpsFeedback, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock.WpsFeedback);
    KeAbPostRelease((unsigned __int64)&WheapPfaLock.WpsFeedback);
    if ( v5 )
    {
      v16 = VrpUnloadDifferencingHive(&String1);
      v18 = 0;
      if ( v16 != -1073741772 )
        v18 = v16;
      v6 = v18;
      if ( v18 < 0 )
      {
        v19 = (AutoBoost *)KeAbPreAcquire((__int64)&WheapPfaLock.WpsFeedback, 0LL, 0LL, v17);
        v12 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock.WpsFeedback, 0LL);
        v21 = v19;
        if ( v12 )
          ExfAcquirePushLockExclusiveEx(
            (unsigned __int64 *)&WheapPfaLock.WpsFeedback,
            v19,
            (__int64)&WheapPfaLock.WpsFeedback);
        if ( v21 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v21, v20);
          else
            *((_BYTE *)v21 + 10) = 1;
        }
        *v5 = WheapPfaLock.Spare35[0];
        WheapPfaLock.Spare35[0] = (unsigned __int64)v5;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock.WpsFeedback, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock.WpsFeedback);
        KeAbPostRelease((unsigned __int64)&WheapPfaLock.WpsFeedback);
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
