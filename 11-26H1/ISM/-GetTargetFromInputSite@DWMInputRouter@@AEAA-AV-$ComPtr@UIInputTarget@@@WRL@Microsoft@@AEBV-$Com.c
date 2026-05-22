/*
 * XREFs of ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x1800142E0
 * Callers:
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUHitTestResult@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x180013EA0 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Create@InputSiteTarget@@SA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@@Z @ 0x1800147B8 (-Create@InputSiteTarget@@SA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$ComPtr@VInputSite@@@.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x1800290E8 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z.c)
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x18002DB7C (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180054504 (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x180070498 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x1800810E8 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Mic.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x180099060 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800F4C34 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
struct IInputTarget **__fastcall DWMInputRouter::GetTargetFromInputSite(
        DWMInputRouter *this,
        struct IInputTarget **a2,
        __int64 *a3,
        int a4,
        HWND *a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r15
  __int128 v14; // xmm1
  int v15; // eax
  HWND *v16; // rdi
  char *v17; // rcx
  struct IInputTarget *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v22; // rax
  HWND *v23; // rcx
  void (__fastcall ***v24)(_QWORD, GUID *, struct IInputTarget **); // rdi
  void (__fastcall *v25)(_QWORD, GUID *, struct IInputTarget **); // rsi
  __int64 v26; // rcx
  const struct _LUID *Luid; // rax
  const char *v28; // [rsp+20h] [rbp-C1h]
  __int64 v29; // [rsp+30h] [rbp-B1h] BYREF
  HWND *v30; // [rsp+38h] [rbp-A9h] BYREF
  DWORD dwProcessId[2]; // [rsp+40h] [rbp-A1h] BYREF
  __int64 *v32; // [rsp+48h] [rbp-99h]
  struct IInputTarget **v33; // [rsp+50h] [rbp-91h]
  char v34; // [rsp+58h] [rbp-89h] BYREF
  __int128 v35; // [rsp+60h] [rbp-81h] BYREF
  __int128 v36; // [rsp+70h] [rbp-71h]
  __int128 v37; // [rsp+80h] [rbp-61h]
  __int64 v38; // [rsp+90h] [rbp-51h]
  __int128 v39; // [rsp+A0h] [rbp-41h] BYREF
  __int128 v40; // [rsp+B0h] [rbp-31h]
  __int128 v41; // [rsp+C0h] [rbp-21h]
  __int128 v42; // [rsp+D0h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+47h]

  v33 = a2;
  v30 = a5;
  *a2 = 0LL;
  dwProcessId[1] = 1;
  v11 = *a3;
  if ( !*(_BYTE *)(*a3 + 480) )
    goto LABEL_32;
  if ( *a7 )
  {
    if ( *(_BYTE *)(v11 + 56) > 1u )
      std::_Throw_bad_variant_access();
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a7 + 40LL))(*a7, *(_QWORD *)(v11 + 48)) )
    {
      v24 = (void (__fastcall ***)(_QWORD, GUID *, struct IInputTarget **))*a7;
      v25 = **(void (__fastcall ***)(_QWORD, GUID *, struct IInputTarget **))*a7;
      v26 = (__int64)*a2;
      if ( *a2 )
      {
        *a2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      v25(v24, &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3, a2);
      goto LABEL_15;
    }
  }
  if ( (a4 & 0x1000028) != 0 )
  {
    v12 = 3LL;
    v13 = 168LL;
  }
  else if ( (a4 & 0x10) != 0 )
  {
    v12 = 4LL;
    v13 = 232LL;
  }
  else if ( (a4 & 2) != 0 )
  {
    v12 = 1LL;
    v13 = 40LL;
  }
  else
  {
    if ( (a4 & 4) == 0 )
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0xB7,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputsitemanager\\server\\legacyinputsinkdata.cpp",
        "Invalid input type provided.",
        v28);
    v12 = 2LL;
    v13 = 104LL;
  }
  if ( !*(_BYTE *)(v13 + v11 + 104) )
  {
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    if ( *(_BYTE *)(v11 + 56) > 1u )
      std::_Throw_bad_variant_access();
    NtQueryCompositionInputQueueAndTransform(*(_QWORD *)(v11 + 48), v12, &v35, &v39);
    v14 = v36;
    *(_OWORD *)(v13 + v11 + 48) = v35;
    *(_OWORD *)(v13 + v11 + 64) = v14;
    *(_QWORD *)&v14 = v38;
    *(_OWORD *)(v13 + v11 + 80) = v37;
    *(_QWORD *)(v13 + v11 + 96) = v14;
    if ( !*(_BYTE *)(v13 + v11 + 104) )
      *(_BYTE *)(v13 + v11 + 104) = 1;
  }
  v15 = *(_DWORD *)(v13 + v11 + 48);
  if ( v15 == 3 || v15 == 4 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a2);
    v29 = *a3;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v29);
    v39 = *(_OWORD *)(v13 + v11 + 64);
    v40 = *(_OWORD *)(v13 + v11 + 80);
    *(_QWORD *)&v41 = *(_QWORD *)(v13 + v11 + 96);
    DWMInputRouter::CreateAndRegisterTarget(this, &v39, &v29, a2);
LABEL_15:
    v16 = v30;
    goto LABEL_16;
  }
  if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
    __fastfail(7u);
  if ( ((1LL << gdwDeviceFamily) & 0x224A) == 0 || *(_DWORD *)(v13 + v11 + 48) != 2 )
    goto LABEL_15;
  v16 = v30;
  if ( (a4 & 0x4000) != 0 )
  {
    dwProcessId[0] = 0;
    GetWindowThreadProcessId(v30[10], dwProcessId);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a2);
    DWMInputRouter::CreateAndRegisterTarget(this, dwProcessId[0], 0, 0, (unsigned __int64)v30[10], a2);
    v30 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(a2, &v30) >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a2);
      v32 = &v29;
      v29 = *a3;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v29);
      v22 = (*((__int64 (__fastcall **)(HWND *, __int128 *))*v30 + 9))(v30, &v35);
      v39 = *(_OWORD *)v22;
      v40 = *(_OWORD *)(v22 + 16);
      *(_QWORD *)&v41 = *(_QWORD *)(v22 + 32);
      DWMInputRouter::CreateAndRegisterTarget(this, &v39, &v29, a2);
    }
    v23 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*((void (__fastcall **)(HWND *))*v23 + 2))(v23);
    }
  }
LABEL_16:
  if ( *a2 )
  {
    if ( *((_BYTE *)v16 + 88) )
    {
      Luid = LegacyInputSinkData::GetLuid((LegacyInputSinkData *)(v11 + 48));
      if ( (unsigned __int8)operator==(Luid, a6) )
      {
        v29 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(a2, &v29) >= 0 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v29 + 80LL))(v29, *((unsigned int *)v16 + 23));
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
      }
    }
LABEL_32:
    if ( *a2 )
      return a2;
  }
  v17 = (char *)InputSiteTarget::Create(&v29, a3);
  v18 = 0LL;
  if ( &v34 != v17 )
  {
    v18 = *(struct IInputTarget **)v17;
    *(_QWORD *)v17 = 0LL;
  }
  v19 = (__int64)*a2;
  *a2 = v18;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  v20 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return a2;
}
