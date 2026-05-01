/*
 * XREFs of ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B10A0
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800B0A80 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x1800B1074 (--1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18017AB50 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ??1TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAA@XZ @ 0x1802C4DF4 (--1TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?SetUnhandledException@?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x180078FD4 (-SetUnhandledException@-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsPr.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800B1188 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_1800B1188.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        _QWORD *a1)
{
  _QWORD *v1; // rsi
  RTL_SRWLOCK *v3; // rdi
  char v4; // bp
  _DWORD *v5; // rcx
  RTL_SRWLOCK *v6; // rdi

  v1 = a1 + 35;
  v3 = (RTL_SRWLOCK *)a1[35];
  v4 = 1;
  if ( !v3 )
    goto LABEL_2;
  v6 = v3 + 33;
  AcquireSRWLockExclusive(v6);
  if ( !*v1 || *(_DWORD *)*v1 != 1 )
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( v4 )
  {
LABEL_2:
    v5 = (_DWORD *)a1[34];
    if ( *v5 == 1 )
    {
      wil::ActivityBase<SingleViewExperienceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException(v5);
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}
