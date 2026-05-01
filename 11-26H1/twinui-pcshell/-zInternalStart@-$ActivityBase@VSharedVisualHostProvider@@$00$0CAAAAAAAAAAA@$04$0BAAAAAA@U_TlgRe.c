/*
 * XREFs of ?zInternalStart@?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18060FB0C
 * Callers:
 *     ?StartActivity@CreateXamlHostWindow@SharedVisualHostProvider@@QEAAXXZ @ 0x18060BE78 (-StartActivity@CreateXamlHostWindow@SharedVisualHostProvider@@QEAAXXZ.c)
 *     ?StartActivity@Pause@SharedVisualHostProvider@@QEAAXXZ @ 0x18060C088 (-StartActivity@Pause@SharedVisualHostProvider@@QEAAXXZ.c)
 *     ?StartActivity@Shutdown@SharedVisualHostProvider@@QEAAX_N@Z @ 0x18060C2A8 (-StartActivity@Shutdown@SharedVisualHostProvider@@QEAAX_N@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180016044 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?Provider@SharedVisualHostProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18060B9C8 (-Provider@SharedVisualHostProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  const struct _tlgProvider_t *v4; // rax
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v5);
  v2 = *(_QWORD *)(a1 + 272);
  v4 = SharedVisualHostProvider::Provider(v3);
  if ( *(_DWORD *)v4 > 5u && tlgKeywordOn((__int64)v4, 0x200000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  else
    *(_OWORD *)(v2 + 8) = 0LL;
  *(_DWORD *)v2 = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
}
