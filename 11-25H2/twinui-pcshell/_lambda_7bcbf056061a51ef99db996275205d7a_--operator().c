/*
 * XREFs of _lambda_7bcbf056061a51ef99db996275205d7a_::operator() @ 0x1803787DC
 * Callers:
 *     ?UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x18037AB6C (-UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_7bcbf056061a51ef99db996275205d7a_::operator()(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, SID *, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  HMONITOR v9; // rsi
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HMONITOR, GUID *, GUID *, int *); // rdi
  int v12; // eax
  __int64 v13; // rdx
  int v15[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  RECT rc; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v16 = 0LL;
  v2 = *a1;
  v3 = *(_QWORD *)(*a1 + 328LL);
  v4 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  v5 = v4(v3, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 763LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)v7);
    goto LABEL_12;
  }
  rc.left = (int)*(float *)(v2 + 320);
  rc.top = (int)*(float *)(v2 + 324);
  rc.right = (int)*(float *)(v2 + 320);
  rc.bottom = (int)*(float *)(v2 + 324);
  v9 = MonitorFromRect(&rc, 0);
  if ( !v9 )
  {
    v6 = -2147418113;
    v7 = 2147549183LL;
    v8 = 769LL;
    goto LABEL_5;
  }
  *(_QWORD *)v15 = 0LL;
  v10 = v16;
  v11 = *(__int64 (__fastcall **)(__int64, HMONITOR, GUID *, GUID *, int *))(*(_QWORD *)v16 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v15);
  v12 = v11(v10, v9, &GUID_88ed940d_d632_4b84_9529_a3110b5af527, &GUID_88ed940d_d632_4b84_9529_a3110b5af527, v15);
  v6 = v12;
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v15 + 72LL))(*(_QWORD *)v15, a1[1]);
    v6 = v12;
    if ( v12 >= 0 )
    {
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v15);
      v6 = 0;
      goto LABEL_12;
    }
    v13 = 773LL;
  }
  else
  {
    v13 = 772LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
    (const char *)(unsigned int)v12);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)v15);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  return v6;
}
