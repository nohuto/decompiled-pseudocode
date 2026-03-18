/*
 * XREFs of ?CreateDwmHandle@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAAPEAXXZ @ 0x140235B00
 * Callers:
 *     ?EmitUpdateCommands@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAA_NPEAPEAVCBatch@2@@Z @ 0x140235BD0 (-EmitUpdateCommands@CCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@EEAA_NP.c)
 * Callees:
 *     GreUnlockDwmState @ 0x140047820 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x140047910 (GreLockDwmState.c)
 *     ReferenceDwmProcess @ 0x140057AD0 (ReferenceDwmProcess.c)
 *     UserDereferenceDwmProcess @ 0x140057B50 (UserDereferenceDwmProcess.c)
 *     DCompositionIsVailContainer @ 0x1402265EC (DCompositionIsVailContainer.c)
 *     DirectComposition::TryOpenSharedSectionAndGetUserModeHandle @ 0x140235DC4 (DirectComposition--TryOpenSharedSectionAndGetUserModeHandle.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::CreateDwmHandle(
        DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler *this)
{
  __int64 UserModeHandle; // rbx
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KPROCESS *v7; // rax
  __int64 v8; // rcx
  struct _KPROCESS *v9; // rdi
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  UserModeHandle = 0LL;
  if ( (unsigned int)DCompositionIsVailContainer() )
    return 0LL;
  GreLockDwmState(v3);
  v7 = (struct _KPROCESS *)ReferenceDwmProcess(v6, v5);
  v9 = v7;
  if ( v7 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v7, &ApcState);
    UserModeHandle = DirectComposition::TryOpenSharedSectionAndGetUserModeHandle(
                       (char *)this + 72,
                       (char *)this + 88,
                       (char *)this + 56);
    KeUnstackDetachProcess(&ApcState);
    UserDereferenceDwmProcess(v9);
  }
  GreUnlockDwmState(v8);
  return UserModeHandle;
}
