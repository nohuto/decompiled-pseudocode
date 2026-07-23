/*
 * XREFs of NtSetUuidSeed @ 0x140847400
 * Callers:
 *     DifNtSetUuidSeedWrapper @ 0x1406922C0 (DifNtSetUuidSeedWrapper.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlSubAuthoritySid @ 0x1404792E0 (RtlSubAuthoritySid.c)
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     RtlLengthRequiredSid @ 0x1408F0000 (RtlLengthRequiredSid.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x140A77920 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetUuidSeed(PCHAR Seed)
{
  void *Pool2; // rax
  void *v3; // r15
  int v4; // eax
  ULONG v5; // esi
  ULONG v6; // ebx
  ULONG v7; // esi
  ACL *v8; // rax
  ACL *v9; // rbx
  int Acl; // eax
  NTSTATUS v11; // eax
  int v12; // eax
  int v13; // eax
  struct _KLOCK_ENTRIES *v14; // r9
  struct _KTHREAD *CurrentThread; // r15
  AutoBoost *v16; // rax
  void *v17; // rdx
  AutoBoost *v18; // rsi
  __int64 v20; // rdx
  NTSTATUS AccessStatus; // [rsp+54h] [rbp-B4h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp-B0h] BYREF
  ULONG v24; // [rsp+60h] [rbp-A8h]
  ACCESS_MASK GrantedAccess; // [rsp+64h] [rbp-A4h] BYREF
  void *v26; // [rsp+68h] [rbp-A0h]
  ACL *v27; // [rsp+70h] [rbp-98h]
  _DWORD v28[6]; // [rsp+78h] [rbp-90h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+90h] [rbp-78h] BYREF
  _BYTE SecurityDescriptor[32]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+D0h] [rbp-38h]
  int v32; // [rsp+D8h] [rbp-30h] BYREF
  __int16 v33; // [rsp+DCh] [rbp-2Ch]

  AccessStatus = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  v28[0] = 80;
  v28[1] = 521322694;
  v28[2] = 906040134;
  v28[3] = -430256637;
  v28[4] = 1525148216;
  v28[5] = -843743134;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  GrantedAccess = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v31 = 0LL;
  v27 = 0LL;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  RtlLengthRequiredSid(6u);
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v3 = Pool2;
  v26 = Pool2;
  if ( !Pool2 )
    RtlRaiseStatus(-1073741670);
  v4 = RtlInitializeSid(Pool2, &IdentifierAuthority, 6u);
  AccessStatus = v4;
  if ( v4 < 0 )
    RtlRaiseStatus(v4);
  v5 = 0;
  v24 = 0;
  while ( v5 < 6 )
  {
    v6 = v28[v5];
    *RtlSubAuthoritySid(v3, v5++) = v6;
    v24 = v5;
  }
  v7 = RtlLengthSid(v3) + 20;
  v8 = (ACL *)ExAllocatePool2(0x100uLL);
  v9 = v8;
  v27 = v8;
  if ( !v8 )
    RtlRaiseStatus(-1073741670);
  Acl = RtlCreateAcl(v8, v7, 2u);
  AccessStatus = Acl;
  if ( Acl < 0 )
    RtlRaiseStatus(Acl);
  v11 = RtlpAddKnownAce((int)v9, 2, 0, 1, v3, 0);
  AccessStatus = v11;
  if ( v11 < 0 )
    RtlRaiseStatus(v11);
  v12 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  AccessStatus = v12;
  if ( v12 < 0 )
    RtlRaiseStatus(v12);
  v13 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0);
  AccessStatus = v13;
  if ( v13 < 0 )
    RtlRaiseStatus(v13);
  if ( !SeAccessCheck(
          SecurityDescriptor,
          &SubjectSecurityContext,
          0,
          1u,
          0,
          0LL,
          (PGENERIC_MAPPING)&ExpUuidSeedGenericMapping,
          1,
          &GrantedAccess,
          &AccessStatus) )
    RtlRaiseStatus(-1073741790);
  RtlCopyFromUser(&v32, Seed, 6uLL);
  AccessStatus = 0;
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( !AccessStatus )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v16 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpUuidLock, 0LL, 0LL, v14);
    v18 = v16;
    if ( _interlockedbittestandset64(&ExpUuidLock.Header.Lock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&ExpUuidLock, v16, (__int64)&ExpUuidLock);
    if ( v18 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v18, v17);
      else
        *((_BYTE *)v18 + 10) = 1;
    }
    *(_DWORD *)&ExpPlatformBinaryLock.WaitBlockFill11[78] = v32;
    *(_WORD *)&ExpPlatformBinaryLock.WaitBlockFill11[82] = v33;
    HIBYTE(NlsMbOemCodePageTag) = (v32 & 0x80u) == 0;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&ExpUuidLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v20);
  }
  SeReleaseSubjectContext(&SubjectSecurityContext);
  return AccessStatus;
}
