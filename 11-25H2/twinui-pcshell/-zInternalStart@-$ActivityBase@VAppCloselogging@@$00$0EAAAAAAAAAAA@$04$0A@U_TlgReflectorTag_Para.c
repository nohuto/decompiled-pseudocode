/*
 * XREFs of ?zInternalStart@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18018A73C
 * Callers:
 *     ?StartActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAAXK@Z @ 0x18018A664 (-StartActivity@ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAAXK@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180174E3C (-LockExclusive@-$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?Provider@AppCloselogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18018A71C (-Provider@AppCloselogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall wil::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  const struct _tlgProvider_t *v4; // rax
  RTL_SRWLOCK *v5; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 272);
  v4 = AppCloselogging::Provider(v3);
  if ( *(_DWORD *)v4 > 5u
    && (*((_QWORD *)v4 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v4 + 3) & 0x400000000000LL) == *((_QWORD *)v4 + 3) )
  {
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  }
  else
  {
    *(_OWORD *)(v2 + 8) = 0LL;
  }
  v5 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
}
