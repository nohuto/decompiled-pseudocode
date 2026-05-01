/*
 * XREFs of ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1801451A4
 * Callers:
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180144D00 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x1801E2E50 (-OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024A340 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     _lambda_4ce12a90e81ea4b4c570078f6f58eac4_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180463F20 (_lambda_4ce12a90e81ea4b4c570078f6f58eac4_--operator()_winrt--WindowsUdk--UI--Shell--ShellViewCoo.c)
 *     _lambda_3f93e84ee3927ec557523765ee2fe070_::operator() @ 0x180469CEC (_lambda_3f93e84ee3927ec557523765ee2fe070_--operator().c)
 *     _lambda_5c8612707d1ce1f8a03bb177e1540ce1_::operator() @ 0x180469EBC (_lambda_5c8612707d1ce1f8a03bb177e1540ce1_--operator().c)
 *     _lambda_76f340d5d82a2ae937276f5837d7f307_::operator() @ 0x18046A598 (_lambda_76f340d5d82a2ae937276f5837d7f307_--operator().c)
 *     ?AnimationGapTimerCallbackInternal@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x18046C2A0 (-AnimationGapTimerCallbackInternal@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 *     ?GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z @ 0x18046DDDC (-GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z.c)
 *     ?OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z @ 0x18046F1B8 (-OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z.c)
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180470600 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?IsValid@KBViewInfo@@QEBA_NXZ @ 0x180145284 (-IsValid@KBViewInfo@@QEBA_NXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::FindViewInfo(RTL_SRWLOCK *a1, int a2, KBViewInfo **a3)
{
  RTL_SRWLOCK *v3; // rbx
  KBViewInfo **Ptr; // r9
  KBViewInfo **v8; // r10
  KBViewInfo *v10; // rax
  KBViewInfo *v11; // rdx
  std::_Ref_count_base *v12; // rcx

  v3 = a1 + 53;
  AcquireSRWLockShared(a1 + 53);
  Ptr = (KBViewInfo **)a1[54].Ptr;
  v8 = (KBViewInfo **)a1[55].Ptr;
  while ( Ptr != v8 && (!KBViewInfo::IsValid(*Ptr) || *((_DWORD *)*Ptr + 26) != a2) )
    Ptr += 2;
  if ( Ptr == a1[55].Ptr )
  {
    if ( v3 )
      ReleaseSRWLockShared(v3);
    return 2147943568LL;
  }
  else
  {
    v10 = Ptr[1];
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
    v11 = Ptr[1];
    *a3 = *Ptr;
    v12 = a3[1];
    a3[1] = v11;
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    if ( v3 )
      ReleaseSRWLockShared(v3);
    return 0LL;
  }
}
