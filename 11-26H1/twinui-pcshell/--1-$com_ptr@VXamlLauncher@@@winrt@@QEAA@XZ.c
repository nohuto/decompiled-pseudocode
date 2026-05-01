/*
 * XREFs of ??1?$com_ptr@VXamlLauncher@@@winrt@@QEAA@XZ @ 0x18018F33C
 * Callers:
 *     _XamlLauncher::LauncherDismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806EDC9F (_XamlLauncher--LauncherDismissRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _XamlLauncher::LauncherShowRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806EDF5B (_XamlLauncher--LauncherShowRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _XamlLauncher::PublishServices_::_1_::dtor$0 @ 0x1806EE0F1 (_XamlLauncher--PublishServices_--_1_--dtor$0.c)
 *     _XamlLauncher::SearchDismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806EE17D (_XamlLauncher--SearchDismissRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _XamlLauncher::SearchShowRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806EE312 (_XamlLauncher--SearchShowRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x18018F3FC (-unconditional_release_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<XamlLauncher>::~com_ptr<XamlLauncher>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<XamlLauncher>::unconditional_release_ref();
  return result;
}
