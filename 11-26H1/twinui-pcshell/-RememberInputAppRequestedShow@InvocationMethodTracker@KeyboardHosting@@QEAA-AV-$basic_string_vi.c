/*
 * XREFs of ?RememberInputAppRequestedShow@InvocationMethodTracker@KeyboardHosting@@QEAA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@_NW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@0@Z @ 0x18048188C
 * Callers:
 *     ?UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180473DC4 (-UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18029C58C (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

const wchar_t **__fastcall KeyboardHosting::InvocationMethodTracker::RememberInputAppRequestedShow(
        __int64 a1,
        const wchar_t **a2,
        char a3,
        int a4,
        char a5)
{
  int v9; // ebx
  const wchar_t *v10; // rcx
  char *v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v14; // [rsp+40h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v14, (RTL_SRWLOCK *)a1);
  if ( a4 == 2 || a5 || !*(_BYTE *)(a1 + 16) || *(_BYTE *)(a1 + 8) )
    v9 = 0;
  else
    v9 = (a3 != 0) + 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v14);
  wil::AcquireSRWLockExclusive(&v14, (RTL_SRWLOCK *)a1);
  if ( *(_DWORD *)(a1 + 12) == v9 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    *(_DWORD *)(a1 + 12) = v9;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        v10 = L"Tap";
      }
      else
      {
        if ( v9 != 2 )
        {
          LODWORD(v12) = v9;
          wil::details::in1diag3::FailFast_UnexpectedMsg(
            retaddr,
            (void *)0x4F,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\invocationmethodtracker.cpp",
            "Unknown Invocation Method: %d",
            v12);
        }
        v10 = L"Button";
      }
    }
    else
    {
      v10 = L"None";
    }
    *a2 = v10;
    a2[1] = (const wchar_t *)std::_WChar_traits<wchar_t>::length((__int64)v10);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v14);
  return a2;
}
