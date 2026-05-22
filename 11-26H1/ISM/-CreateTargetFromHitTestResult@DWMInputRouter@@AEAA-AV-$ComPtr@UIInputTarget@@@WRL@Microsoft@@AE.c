/*
 * XREFs of ?CreateTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUHitTestResult@@@Z @ 0x180013FB0
 * Callers:
 *     ?GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@W4InputType@@AEBUHitTestResult@@PEAUIInputTarget@@@Z @ 0x180013C00 (-GetInitialTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x180013B4C (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180043588 (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180088FE0 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 (__fastcall ****__fastcall DWMInputRouter::CreateTargetFromHitTestResult(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *),
        __int64 a3))(_QWORD, GUID *, __int64 *)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  _DWORD *v7; // rax
  _DWORD *v8; // rdi
  __int64 v9; // rcx
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  struct InputSystemServerConnection **v16; // rax
  struct InputSystemServerConnection *v17; // rcx
  Microsoft::Bamo::BaseBamoConnection *v18; // rcx
  __int64 v19; // rcx
  int v20; // [rsp+20h] [rbp-40h]
  Microsoft::Bamo::BaseBamoConnection *v21; // [rsp+28h] [rbp-38h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v24; // [rsp+90h] [rbp+30h] BYREF
  __int64 (__fastcall ****v25)(_QWORD, _QWORD, _QWORD); // [rsp+98h] [rbp+38h]
  __int64 v26; // [rsp+A8h] [rbp+48h] BYREF

  v25 = (__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))a2;
  v24 = a1;
  if ( !ISMStatics::s_inputSystemBamoConnection )
  {
    v24 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    v15 = CoreUICreate(&v24);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x33,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
        (const char *)(unsigned int)v15,
        0);
    v16 = (struct InputSystemServerConnection **)InputSystemServerConnection::Create((unsigned int)&v21);
    v17 = *v16;
    *v16 = 0LL;
    ISMStatics::s_inputSystemBamoConnection = v17;
    v18 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      Microsoft::Bamo::BaseBamoConnection::Release(v18);
    }
    v19 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)ISMStatics::s_inputSystemBamoConnection + 31) + 8LL)
                                          + 152LL))(*((_QWORD *)ISMStatics::s_inputSystemBamoConnection + 31) + 8LL);
  InputSiteManager::GetInputSiteFromInputSinkHandle(v5, (__int64)&v26, *(_QWORD *)(a3 + 8));
  *a2 = 0LL;
  v20 = 1;
  v6 = v26;
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  v22 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  *a2 = 0LL;
  v7 = malloc(0x88uLL);
  v8 = v7;
  if ( v7 )
  {
    memset_0(v7, 0, 0x88uLL);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v8[16] = 1;
    *(_QWORD *)v8 = &DWMInputTarget::`vftable'{for `IInputTarget'};
    *((_QWORD *)v8 + 1) = &DWMInputTarget::`vftable'{for `IDCompInputTarget'};
    *((_QWORD *)v8 + 2) = &DWMInputTarget::`vftable'{for `IDWMPnPTarget'};
    *((_QWORD *)v8 + 3) = &DWMInputTarget::`vftable'{for `IFocusInputTarget'};
    *((_QWORD *)v8 + 4) = &DWMInputTarget::`vftable'{for `IInputTarget2'};
    *((_QWORD *)v8 + 5) = &DWMInputTarget::`vftable'{for `IDWMSupportedInputTarget'};
    *((_QWORD *)v8 + 6) = &DWMInputTarget::`vftable'{for `IInputSiteTarget'};
    *((_QWORD *)v8 + 7) = &DWMInputTarget::`vftable'{for `RefCountedObject'};
    v8[18] = 0;
    *((_OWORD *)v8 + 5) = 0LL;
    *((_OWORD *)v8 + 6) = 0LL;
    *((_QWORD *)v8 + 14) = v22;
    *((_QWORD *)v8 + 15) = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    *((_QWORD *)v8 + 16) = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *a2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v8;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)0x8007000ELL,
      1);
  }
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( *(_BYTE *)(a3 + 88) )
  {
    v24 = 0LL;
    v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))*a2;
    v12 = ***a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    v13 = v12(v11, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v24);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x54F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v13,
        v20);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 80LL))(v24, *(unsigned int *)(a3 + 92));
    v14 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  v9 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return a2;
}
