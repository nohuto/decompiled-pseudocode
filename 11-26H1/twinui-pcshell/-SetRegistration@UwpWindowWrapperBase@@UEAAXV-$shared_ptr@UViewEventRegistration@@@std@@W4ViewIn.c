/*
 * XREFs of ?SetRegistration@UwpWindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18004DBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004BDA4 (-PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPresentationClass@UwpWindowWrapperBase@@AEBA?AW4_RM_PRESENTATION_CLASS@@XZ @ 0x18004DEB8 (-GetPresentationClass@UwpWindowWrapperBase@@AEBA-AW4_RM_PRESENTATION_CLASS@@XZ.c)
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18006C874 (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x180088C84 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?GetExperienceIdPersistenceIndex@@YA_KPEBG@Z @ 0x1802BEA10 (-GetExperienceIdPersistenceIndex@@YA_KPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowWrapperBase::SetRegistration(__int64 a1, _QWORD *a2, int a3)
{
  char v6; // bl
  __int64 v7; // rax
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rcx
  _QWORD *v10; // r15
  _QWORD *v11; // rax
  int v12; // eax
  char v13; // si
  int v14; // ebx
  _QWORD *v15; // rax
  int v16; // eax
  int v17; // r8d
  _WORD *v18; // rdx
  __int16 PresentationClass; // ax
  const WCHAR *StringRawBuffer; // rax
  unsigned __int64 ExperienceIdPersistenceIndex; // rax
  std::_Ref_count_base *v22; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v24; // [rsp+50h] [rbp+8h] BYREF
  __int64 v25; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v24 = 0;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 224LL))(*(_QWORD *)(a1 + 264));
  v7 = a2[1];
  if ( v7 )
    _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
  v8 = a2[1];
  *(_QWORD *)(a1 + 320) = *a2;
  v9 = *(std::_Ref_count_base **)(a1 + 328);
  *(_QWORD *)(a1 + 328) = v8;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  *(_DWORD *)(a1 + 340) = *(_DWORD *)(*(_QWORD *)(a1 + 320) + 16LL);
  if ( *(_QWORD *)(a1 + 96) )
  {
    v24 = 0;
    if ( a3 == 1 )
    {
      v10 = (_QWORD *)(a1 + 264);
      v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 264) + 152LL))(
                        *(_QWORD *)(a1 + 264),
                        &v25);
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)*v11 + 72LL))(
              *v11,
              *(_QWORD *)(a1 + 96),
              &v24);
      if ( v12 >= 0 )
      {
        v6 = 1;
        if ( v24 )
        {
          v13 = 1;
          goto LABEL_10;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x78C,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v12);
        v6 = 1;
      }
    }
    v13 = 0;
    v10 = (_QWORD *)(a1 + 264);
LABEL_10:
    if ( (v6 & 1) != 0 )
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
    if ( v13 )
    {
      v14 = *(_DWORD *)(a1 + 452);
      if ( v24 != *(_DWORD *)(a1 + 448) )
      {
        *(_DWORD *)(a1 + 448) = v24;
        UwpWindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((UwpWindowWrapperBase *)(a1 - 16));
      }
      if ( v14 == *(_DWORD *)(a1 + 452) )
      {
        v15 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v10 + 152LL))(*v10, &v25);
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v15 + 64LL))(
                *v15,
                *(unsigned int *)(a1 + 336),
                *(unsigned int *)(a1 + 452));
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x7A1,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v16);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
      }
      if ( (unsigned int)(v24 - 4) <= 1 )
      {
        UwpWindowReadyState::VisibilityChanged(a1 + 344, 0LL, 1LL);
        UwpWindowReadyState::VisibilityChanged(a1 + 344, 1LL, 1LL);
      }
    }
  }
  v17 = *(_DWORD *)(a1 + 340);
  v18 = (_WORD *)(a1 + 236);
  if ( (v17 & 4) == 0 )
  {
    PresentationClass = UwpWindowWrapperBase::GetPresentationClass(a1 - 16);
    *v18 = *v18 ^ (*v18 ^ (2 * PresentationClass)) & 0xE | 1;
  }
  if ( (v17 & 8) == 0 )
  {
    *v18 &= ~0x10u;
    *v18 |= 0x20u;
    *v18 |= 1u;
  }
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
  v22 = (std::_Ref_count_base *)a2[1];
  if ( v22 )
    std::_Ref_count_base::_Decref(v22);
}
