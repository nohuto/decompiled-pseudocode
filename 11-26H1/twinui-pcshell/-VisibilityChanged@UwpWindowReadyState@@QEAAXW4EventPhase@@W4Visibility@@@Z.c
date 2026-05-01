/*
 * XREFs of ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18006C874
 * Callers:
 *     ?SetRegistration@UwpWindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18004DBF0 (-SetRegistration@UwpWindowWrapperBase@@UEAAXV-$shared_ptr@UViewEventRegistration@@@std@@W4ViewIn.c)
 *     ?SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1804336EC (-SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z.c)
 * Callees:
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@Z @ 0x18006CAF4 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@ViewManag.c)
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x18018F044 (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ?_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ @ 0x1801C7AE4 (-_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowReadyState::VisibilityChanged(__int64 a1, int a2, int a3)
{
  int *v3; // rbx
  char v5; // si
  char v6; // bp
  __int64 v7; // rcx
  int v8; // eax
  UwpWindowReadyState *v9; // rcx
  int v10; // [rsp+40h] [rbp+18h] BYREF

  v3 = (int *)(a1 + 8);
  v5 = 1;
  v6 = *(_QWORD *)a1 && !*v3;
  if ( a3 == 1 )
  {
    if ( a2 )
    {
      v10 = *v3;
      *v3 = v10 & 0xFFFFFFFE;
      ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum UwpWindowReadinessWaitFlags const &,enum UwpWindowReadinessWaitFlags &>(
        a1,
        &v10,
        a1 + 8);
      if ( WindowReadyState::IsReadyForPresentation((WindowReadyState *)a1) )
        UwpWindowReadyState::_WaitForUnfreezeIfNecessary(v9);
    }
    else
    {
      if ( *(_BYTE *)(a1 + 12) )
      {
        v8 = *v3;
        if ( (*v3 & 1) != 0 )
        {
          v10 = *v3;
          *v3 = v8 | 2;
          ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum UwpWindowReadinessWaitFlags const &,enum UwpWindowReadinessWaitFlags &>(
            a1,
            &v10,
            a1 + 8);
        }
      }
      v3 = (int *)(a1 + 8);
    }
  }
  else if ( a2 )
  {
    v10 = *v3;
    *v3 = v10 | 1;
    ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum UwpWindowReadinessWaitFlags const &,enum UwpWindowReadinessWaitFlags &>(
      a1,
      &v10,
      a1 + 8);
  }
  if ( !*(_QWORD *)a1 || *v3 )
    v5 = 0;
  if ( v6 != v5 )
  {
    v7 = *(_QWORD *)(a1 + 80);
    LOBYTE(v10) = v5;
    if ( !v7 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      JUMPOUT(0x18006C980LL);
    }
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 16LL))(v7, &v10);
  }
}
