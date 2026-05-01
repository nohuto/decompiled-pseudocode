/*
 * XREFs of ??$TryGetVisibleFlyoutInstance@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801EE850
 * Callers:
 *     ?InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801C87B0 (-InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_.c)
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x180271AC0 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1 @ 0x180271FD0 (SnapFlyoutHost--InternalShutdownAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::ShowFlyoutAsync$_ResumeCoro$1 @ 0x180272750 (SnapFlyoutHost--ShowFlyoutAsync$_ResumeCoro$1.c)
 *     ?DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z @ 0x18058FA80 (-DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z.c)
 *     ?OnForegroundChange@SnapFlyoutHost@@QEAAXXZ @ 0x180590660 (-OnForegroundChange@SnapFlyoutHost@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *i; // r8
  __int64 v4; // rax

  for ( i = *(_QWORD **)(a1 + 24); ; i += 2 )
  {
    if ( i == *(_QWORD **)(a1 + 32) )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      return a2;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*i + 8LL) + 339LL) )
      break;
  }
  v4 = i[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *a2 = *i;
  a2[1] = i[1];
  return a2;
}
