/*
 * XREFs of HalpIommuInvokeInterfaceStateChangeCallbacks @ 0x14050B0EC
 * Callers:
 *     HalpNotifyIommuDomainPolicyChange @ 0x14050B0D0 (HalpNotifyIommuDomainPolicyChange.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline @ 0x140589D58 (Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x14058A2B8 (HalpIommuDeviceGetDomainTypes.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuInvokeInterfaceStateChangeCallbacks(
        struct _LIST_ENTRY *a1,
        char a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _LIST_ENTRY *Flink; // rbp
  struct _LIST_ENTRY *Blink; // r14
  AutoBoost *v8; // rax
  volatile unsigned __int8 *v9; // rdx
  signed __int8 v10; // cf
  AutoBoost *v11; // rdi
  struct _LIST_ENTRY *i; // rdi
  char v13; // si
  int DomainTypes; // eax
  int v15; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 result; // rax
  __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  Flink = 0LL;
  v18 = 0LL;
  Blink = 0LL;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&IommuInterfaceStateChangeCallbackPushLock, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64(&IommuInterfaceStateChangeCallbackPushLock.Header.Lock, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
      v8,
      (__int64)&IommuInterfaceStateChangeCallbackPushLock);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v9) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v11 + 33), v9, 1);
    }
    else
    {
      *((_BYTE *)v11 + 10) = 1;
    }
  }
  for ( i = IommuInterfaceStateChangeCallbackPushLock.Header.WaitListHead.Flink;
        i != &IommuInterfaceStateChangeCallbackPushLock.Header.WaitListHead;
        i = i->Flink )
  {
    if ( i[2].Flink->Blink == a1 )
    {
      v13 = 0;
      if ( (a2 & 1) != 0 && ((__int64)i[2].Blink & 1) != 0 )
      {
        DomainTypes = HalpIommuDeviceGetDomainTypes();
        v15 = DomainTypes;
        if ( HIDWORD(i[2].Blink) != DomainTypes )
        {
          HIDWORD(i[2].Blink) = DomainTypes;
          IsEnabledDeviceUsageNoInline = Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline();
          LODWORD(v18) = v18 | 1;
          HIDWORD(v18) = v15;
          if ( IsEnabledDeviceUsageNoInline )
          {
            Flink = i[1].Flink;
            Blink = i[1].Blink;
          }
          else
          {
            v13 = 1;
          }
        }
        if ( !(unsigned int)Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline() && v13 )
          guard_dispatch_icall_no_overrides(&v18, i[1].Blink);
      }
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&IommuInterfaceStateChangeCallbackPushLock);
  result = Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    if ( Flink )
      return guard_dispatch_icall_no_overrides(&v18, Blink);
  }
  return result;
}
