/*
 * XREFs of ?Hide@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1803C0930
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C4B84 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$Start@$$V@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x1803BDAA0 (--$Start@$$V@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@SA-AV01@XZ.c)
 *     ??1CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1803BDF74 (--1CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803C4E98 (-UnregisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::Hide(SearchAppDesktopExperienceView *this)
{
  __int64 v2; // rcx
  DWORD v3; // edx
  volatile signed __int32 *v5[42]; // [rsp+20h] [rbp-168h] BYREF

  CortanaProactiveTelemetry::CortanaExperienceManager_Hide::Start<>((CortanaProactiveTelemetry::CortanaExperienceManager_Hide *)v5);
  *((_BYTE *)this + 176) = 0;
  v2 = *((_QWORD *)this + 15);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 96LL))(v2);
  SearchAppDesktopExperienceView::UnregisterGlobalBackButton((SearchAppDesktopExperienceView *)((char *)this - 24));
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v5,
    v3);
  CortanaProactiveTelemetry::CortanaExperienceManager_Hide::~CortanaExperienceManager_Hide(v5);
  return 0LL;
}
