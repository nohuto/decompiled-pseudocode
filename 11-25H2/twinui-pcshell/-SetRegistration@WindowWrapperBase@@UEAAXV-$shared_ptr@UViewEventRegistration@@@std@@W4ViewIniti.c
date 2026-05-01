/*
 * XREFs of ?SetRegistration@WindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1804329C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180028EF8 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x18008D880 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?GetExperienceIdPersistenceIndex@@YA_KPEBG@Z @ 0x1802C7A20 (-GetExperienceIdPersistenceIndex@@YA_KPEBG@Z.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x180430E4C (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180434ECC (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowWrapperBase::SetRegistration(__int64 a1, _QWORD *a2, int a3)
{
  char v6; // si
  _QWORD *v7; // rax
  int v8; // eax
  char v9; // bl
  int v10; // ebx
  _QWORD *v11; // rax
  int v12; // eax
  int v13; // edx
  __int16 v14; // cx
  const WCHAR *StringRawBuffer; // rax
  __int64 ExperienceIdPersistenceIndex; // rax
  std::_Ref_count_base *v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v19; // [rsp+50h] [rbp+8h] BYREF
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v19 = 0;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 216LL))(*(_QWORD *)(a1 + 264));
  std::shared_ptr<FlyoutView>::operator=((_QWORD *)(a1 + 320), a2);
  *(_DWORD *)(a1 + 340) = *(_DWORD *)(*(_QWORD *)(a1 + 320) + 16LL);
  if ( !*(_QWORD *)(a1 + 88) )
    goto LABEL_17;
  v19 = 0;
  if ( a3 == 1 )
  {
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 264) + 144LL))(
                     *(_QWORD *)(a1 + 264),
                     &v20);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)*v7 + 64LL))(*v7, *(_QWORD *)(a1 + 88), &v19);
    if ( v8 >= 0 )
    {
      v6 = 1;
      if ( v19 )
      {
        v9 = 1;
        goto LABEL_6;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6EF,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v8);
      v6 = 1;
    }
  }
  v9 = 0;
LABEL_6:
  if ( (v6 & 1) != 0 )
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
  if ( v9 )
  {
    v10 = *(_DWORD *)(a1 + 468);
    if ( v19 != *(_DWORD *)(a1 + 464) )
    {
      *(_DWORD *)(a1 + 464) = v19;
      WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((WindowWrapperBase *)(a1 - 16));
    }
    if ( v10 == *(_DWORD *)(a1 + 468) )
    {
      v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 264) + 144LL))(
                        *(_QWORD *)(a1 + 264),
                        &v20);
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v11 + 56LL))(
              *v11,
              *(unsigned int *)(a1 + 336),
              *(unsigned int *)(a1 + 468));
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x704,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v12);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
    }
    if ( (unsigned int)(v19 - 4) <= 1 )
    {
      WindowReadyState::VisibilityChanged(a1 + 344, 0LL, 1LL);
      WindowReadyState::VisibilityChanged(a1 + 344, 1LL, 1LL);
    }
  }
LABEL_17:
  v13 = *(_DWORD *)(a1 + 340);
  v14 = 4;
  if ( (v13 & 4) == 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 464) - 4) <= 1 )
      v14 = 8;
    *(_WORD *)(a1 + 236) = v14 | *(_WORD *)(a1 + 236) & 0xFFF1 | 1;
  }
  if ( (v13 & 8) == 0 )
    *(_WORD *)(a1 + 236) = *(_WORD *)(a1 + 236) & 0xFFCE | 0x21;
  if ( WindowsIsStringEmpty(**(HSTRING **)(a1 + 320)) )
  {
    if ( !WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)(a1 + 320) + 8LL)) )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 320) + 8LL), 0LL);
      ExperienceIdPersistenceIndex = GetExperienceIdPersistenceIndex(StringRawBuffer);
      if ( ExperienceIdPersistenceIndex )
        LightweightPropertySet::SetProperty(
          (LightweightPropertySet *)(a1 + 184),
          L"ExperienceId",
          ExperienceIdPersistenceIndex,
          (HWND)*(int *)(a1 + 280));
    }
  }
  v17 = (std::_Ref_count_base *)a2[1];
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
}
