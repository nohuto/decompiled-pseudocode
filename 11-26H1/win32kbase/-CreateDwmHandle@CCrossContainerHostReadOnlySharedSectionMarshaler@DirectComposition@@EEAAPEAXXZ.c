/*
 * XREFs of ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x14023F190
 * Callers:
 *     ?EmitUpdateCommands@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z @ 0x14023F260 (-EmitUpdateCommands@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAA_NP.c)
 * Callees:
 *     ReferenceDwmProcess @ 0x1400B2E10 (ReferenceDwmProcess.c)
 *     GreUnlockDwmState @ 0x1400B3070 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x1400B3150 (GreLockDwmState.c)
 *     UserDereferenceDwmProcess @ 0x1400B3390 (UserDereferenceDwmProcess.c)
 *     DCompositionIsVailContainer @ 0x140228844 (DCompositionIsVailContainer.c)
 *     DirectComposition::TryOpenSharedSectionAndGetUserModeHandle @ 0x14023F464 (DirectComposition--TryOpenSharedSectionAndGetUserModeHandle.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::CreateDwmHandle(
        DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler *this)
{
  __int64 UserModeHandle; // rbx
  __int64 v3; // rcx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  struct _KPROCESS *v8; // rax
  __int64 v9; // rcx
  struct _KPROCESS *v10; // rdi
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  UserModeHandle = 0LL;
  if ( (unsigned int)DCompositionIsVailContainer((__int64)this) )
    return 0LL;
  GreLockDwmState(v3);
  v8 = (struct _KPROCESS *)ReferenceDwmProcess(v6, v5, v7);
  v10 = v8;
  if ( v8 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v8, &ApcState);
    UserModeHandle = DirectComposition::TryOpenSharedSectionAndGetUserModeHandle(
                       (char *)this + 72,
                       (char *)this + 88,
                       (char *)this + 56);
    KeUnstackDetachProcess(&ApcState);
    UserDereferenceDwmProcess(v10);
  }
  GreUnlockDwmState(v9);
  return UserModeHandle;
}
