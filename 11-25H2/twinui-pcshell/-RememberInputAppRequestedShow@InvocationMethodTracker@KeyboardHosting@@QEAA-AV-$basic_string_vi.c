/*
 * XREFs of ?RememberInputAppRequestedShow@InvocationMethodTracker@KeyboardHosting@@QEAA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@_NW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@0@Z @ 0x180472C0C
 * Callers:
 *     ?UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180467DFC (-UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x180297380 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

_QWORD *__fastcall KeyboardHosting::InvocationMethodTracker::RememberInputAppRequestedShow(
        __int64 a1,
        _QWORD *a2,
        char a3,
        int a4,
        char a5)
{
  int v9; // ebx
  char *v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v13; // [rsp+40h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v13, (RTL_SRWLOCK *)a1);
  if ( a4 == 2 || a5 || !*(_BYTE *)(a1 + 16) || *(_BYTE *)(a1 + 8) )
    v9 = 0;
  else
    v9 = (a3 != 0) + 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
  wil::AcquireSRWLockExclusive(&v13, (RTL_SRWLOCK *)a1);
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
        a2[1] = 3LL;
        *a2 = L"Tap";
      }
      else
      {
        if ( v9 != 2 )
        {
          LODWORD(v11) = v9;
          wil::details::in1diag3::FailFast_UnexpectedMsg(
            retaddr,
            (void *)0x4F,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\invocationmethodtracker.cpp",
            "Unknown Invocation Method: %d",
            v11);
        }
        a2[1] = 6LL;
        *a2 = L"Button";
      }
    }
    else
    {
      a2[1] = 4LL;
      *a2 = L"None";
    }
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
  return a2;
}
