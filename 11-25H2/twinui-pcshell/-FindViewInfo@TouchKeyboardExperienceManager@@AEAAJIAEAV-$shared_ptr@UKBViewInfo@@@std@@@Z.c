/*
 * XREFs of ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x180097CA8
 * Callers:
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180097824 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?AnimationGapTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180099200 (-AnimationGapTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 *     ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x18018FCC0 (-OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180255AA0 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     _lambda_c20ddfa74c13e3309a3b622ad13c0825_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x1804578C0 (_lambda_c20ddfa74c13e3309a3b622ad13c0825_--operator()_winrt--WindowsUdk--UI--Shell-_ea_1804578C0.c)
 *     _lambda_21bbf2e079f5591be5df5fdb5b101015_::operator() @ 0x18045D240 (_lambda_21bbf2e079f5591be5df5fdb5b101015_--operator().c)
 *     _lambda_6609ff0ab640c01183d8a2076431907a_::operator() @ 0x18045DA70 (_lambda_6609ff0ab640c01183d8a2076431907a_--operator().c)
 *     _lambda_ff3af0abcf4100822182f80ac5bd56ae_::operator() @ 0x18045ED54 (_lambda_ff3af0abcf4100822182f80ac5bd56ae_--operator().c)
 *     ?GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z @ 0x180461F4C (-GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z.c)
 *     ?OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z @ 0x180463278 (-OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z.c)
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180464860 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x180097D88 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::FindViewInfo(RTL_SRWLOCK *a1, int a2, KBViewInfo **a3)
{
  RTL_SRWLOCK *v3; // rbx
  KBViewInfo **Ptr; // r10
  KBViewInfo **i; // r9
  KBViewInfo *v10; // rax
  KBViewInfo *v11; // rdx
  std::_Ref_count_base *v12; // rcx

  v3 = a1 + 53;
  AcquireSRWLockShared(a1 + 53);
  Ptr = (KBViewInfo **)a1[55].Ptr;
  for ( i = (KBViewInfo **)a1[54].Ptr; i != Ptr && (!KBViewInfo::IsValid(*i) || *((_DWORD *)*i + 26) != a2); i += 2 )
    ;
  if ( i == a1[55].Ptr )
  {
    if ( v3 )
      ReleaseSRWLockShared(v3);
    return 2147943568LL;
  }
  else
  {
    v10 = i[1];
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
    v11 = i[1];
    *a3 = *i;
    v12 = a3[1];
    a3[1] = v11;
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    if ( v3 )
      ReleaseSRWLockShared(v3);
    return 0LL;
  }
}
