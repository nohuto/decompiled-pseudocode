/*
 * XREFs of ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18043ED60
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003479C (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x180088C84 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?GetExperienceIdPersistenceIndex@@YA_KPEBG@Z @ 0x1802BEA10 (-GetExperienceIdPersistenceIndex@@YA_KPEBG@Z.c)
 *     ?GetPresentationClass@WindowWrapperBase@@AEBA?AW4_RM_PRESENTATION_CLASS@@XZ @ 0x18043C404 (-GetPresentationClass@WindowWrapperBase@@AEBA-AW4_RM_PRESENTATION_CLASS@@XZ.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x18043D1CC (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180441234 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowWrapperBase::SetRegistration(__int64 a1, _QWORD *a2, int a3)
{
  char v6; // bl
  HSTRING **v7; // r14
  _QWORD *v8; // r15
  _QWORD *v9; // rax
  int v10; // eax
  char v11; // si
  int v12; // ebx
  _QWORD *v13; // rax
  int v14; // eax
  int v15; // r8d
  _WORD *v16; // rdx
  __int16 PresentationClass; // ax
  const WCHAR *StringRawBuffer; // rax
  __int64 ExperienceIdPersistenceIndex; // rax
  std::_Ref_count_base *v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+68h] [rbp+10h] BYREF

  v6 = 0;
  v22 = 0;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 216LL))(*(_QWORD *)(a1 + 264));
  v7 = (HSTRING **)(a1 + 320);
  std::shared_ptr<FlyoutView>::operator=((_QWORD *)(a1 + 320), a2);
  *(_DWORD *)(a1 + 340) = *(_DWORD *)(*(_QWORD *)(a1 + 320) + 16LL);
  if ( !*(_QWORD *)(a1 + 88) )
    goto LABEL_17;
  v22 = 0;
  if ( a3 == 1 )
  {
    v8 = (_QWORD *)(a1 + 264);
    v9 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 264) + 144LL))(
                     *(_QWORD *)(a1 + 264),
                     &v23);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)*v9 + 64LL))(*v9, *(_QWORD *)(a1 + 88), &v22);
    if ( v10 >= 0 )
    {
      v6 = 1;
      if ( v22 )
      {
        v11 = 1;
        goto LABEL_6;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6EF,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v10);
      v6 = 1;
    }
  }
  v11 = 0;
  v8 = (_QWORD *)(a1 + 264);
LABEL_6:
  if ( (v6 & 1) != 0 )
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
  if ( v11 )
  {
    v12 = *(_DWORD *)(a1 + 452);
    if ( v22 != *(_DWORD *)(a1 + 448) )
    {
      *(_DWORD *)(a1 + 448) = v22;
      WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((WindowWrapperBase *)(a1 - 16));
    }
    if ( v12 == *(_DWORD *)(a1 + 452) )
    {
      v13 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v8 + 144LL))(*v8, &v23);
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v13 + 56LL))(
              *v13,
              *(unsigned int *)(a1 + 336),
              *(unsigned int *)(a1 + 452));
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x704,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v14);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
    }
    if ( (unsigned int)(v22 - 4) <= 1 )
    {
      WindowReadyState::VisibilityChanged(a1 + 344, 0LL, 1LL);
      WindowReadyState::VisibilityChanged(a1 + 344, 1LL, 1LL);
    }
  }
LABEL_17:
  v15 = *(_DWORD *)(a1 + 340);
  v16 = (_WORD *)(a1 + 236);
  if ( (v15 & 4) == 0 )
  {
    PresentationClass = WindowWrapperBase::GetPresentationClass(a1 - 16);
    *v16 = *v16 ^ (*v16 ^ (2 * PresentationClass)) & 0xE | 1;
  }
  if ( (v15 & 8) == 0 )
  {
    *v16 &= ~0x10u;
    *v16 |= 0x20u;
    *v16 |= 1u;
  }
  if ( WindowsIsStringEmpty(**v7) )
  {
    if ( !WindowsIsStringEmpty((*v7)[1]) )
    {
      StringRawBuffer = WindowsGetStringRawBuffer((*v7)[1], 0LL);
      ExperienceIdPersistenceIndex = GetExperienceIdPersistenceIndex(StringRawBuffer);
      if ( ExperienceIdPersistenceIndex )
        LightweightPropertySet::SetProperty(
          (LightweightPropertySet *)(a1 + 184),
          L"ExperienceId",
          ExperienceIdPersistenceIndex,
          (HWND)*(int *)(a1 + 280));
    }
  }
  v20 = (std::_Ref_count_base *)a2[1];
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
}
