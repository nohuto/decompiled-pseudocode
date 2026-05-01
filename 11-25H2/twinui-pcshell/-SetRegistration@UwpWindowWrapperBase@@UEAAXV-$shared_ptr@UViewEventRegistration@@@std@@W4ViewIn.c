/*
 * XREFs of ?SetRegistration@UwpWindowWrapperBase@@UEAAXV?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x1801DBB20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180073B00 (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x18008D880 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ @ 0x1801111F4 (-PushDesiredNavigationLevelToDerivedClass@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?GetExperienceIdPersistenceIndex@@YA_KPEBG@Z @ 0x1802C7A20 (-GetExperienceIdPersistenceIndex@@YA_KPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowWrapperBase::SetRegistration(__int64 a1, _QWORD *a2, int a3)
{
  char v6; // bl
  __int64 v7; // rax
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rcx
  _QWORD *v10; // rax
  int v11; // eax
  char v12; // si
  int v13; // ebx
  _QWORD *v14; // rax
  int v15; // eax
  int v16; // edx
  __int16 v17; // cx
  const WCHAR *StringRawBuffer; // rax
  unsigned __int64 ExperienceIdPersistenceIndex; // rax
  std::_Ref_count_base *v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v22; // [rsp+50h] [rbp+8h] BYREF
  __int64 v23; // [rsp+58h] [rbp+10h] BYREF
  __int64 v24; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v22 = 0;
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
    v22 = 0;
    if ( a3 == 1 )
    {
      v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 264) + 152LL))(
                        *(_QWORD *)(a1 + 264),
                        &v23);
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)*v10 + 72LL))(
              *v10,
              *(_QWORD *)(a1 + 96),
              &v22);
      if ( v11 >= 0 )
      {
        v6 = 1;
        if ( v22 )
        {
          v12 = 1;
          goto LABEL_10;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x78C,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v11);
        v6 = 1;
      }
    }
    v12 = 0;
LABEL_10:
    if ( (v6 & 1) != 0 )
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
    if ( v12 )
    {
      v13 = *(_DWORD *)(a1 + 468);
      if ( v22 != *(_DWORD *)(a1 + 464) )
      {
        *(_DWORD *)(a1 + 464) = v22;
        UwpWindowWrapperBase::PushDesiredNavigationLevelToDerivedClass((UwpWindowWrapperBase *)(a1 - 16));
      }
      if ( v13 == *(_DWORD *)(a1 + 468) )
      {
        v14 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 264) + 152LL))(
                          *(_QWORD *)(a1 + 264),
                          &v24);
        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v14 + 64LL))(
                *v14,
                *(unsigned int *)(a1 + 336),
                *(unsigned int *)(a1 + 468));
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x7A1,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
            (const char *)(unsigned int)v15);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
      }
      if ( (unsigned int)(v22 - 4) <= 1 )
      {
        UwpWindowReadyState::VisibilityChanged(a1 + 344, 0, 1);
        UwpWindowReadyState::VisibilityChanged(a1 + 344, 1, 1);
      }
    }
  }
  v16 = *(_DWORD *)(a1 + 340);
  v17 = 4;
  if ( (v16 & 4) == 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 464) - 4) <= 1 )
      v17 = 8;
    *(_WORD *)(a1 + 236) = v17 | *(_WORD *)(a1 + 236) & 0xFFF1 | 1;
  }
  if ( (v16 & 8) == 0 )
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
  v20 = (std::_Ref_count_base *)a2[1];
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
}
