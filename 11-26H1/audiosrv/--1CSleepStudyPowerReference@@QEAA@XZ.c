/*
 * XREFs of ??1CSleepStudyPowerReference@@QEAA@XZ @ 0x180077070
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCSleepStudyPowerReference@@@std@@EEAAXXZ @ 0x180077060 (-_Destroy@-$_Ref_count_obj2@VCSleepStudyPowerReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CSleepStudyPowerReference::~CSleepStudyPowerReference(CSleepStudyPowerReference *this)
{
  __int64 v2; // rsi
  DWORD LastError; // ebx

  SleepstudyHelperBlockerActiveDereference(*(_QWORD *)this);
  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    LastError = GetLastError();
    SleepstudyHelperDestroyBlocker(v2);
    SetLastError(LastError);
  }
  *(_QWORD *)this = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SLEEPSTUDY_BLOCKER *,long (*)(_SLEEPSTUDY_BLOCKER *),&long SleepstudyHelperDestroyBlocker(_SLEEPSTUDY_BLOCKER *),wistd::integral_constant<unsigned __int64,0>,_SLEEPSTUDY_BLOCKER *,_SLEEPSTUDY_BLOCKER *,0,std::nullptr_t>>(this);
}
