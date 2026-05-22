/*
 * XREFs of ?UpdateForegroundTarget@DWMInputRouter@@UEAAX_KIII@Z @ 0x180028D10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Create@DWMLegacyInputTarget@@SAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x1800291E4 (-Create@DWMLegacyInputTarget@@SAJKKK_KPEAPEAUIInputTarget@@@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800292CC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?EndWinKeyScenario@WinKeyScenarioTelemetry@@SAXXZ @ 0x180029390 (-EndWinKeyScenario@WinKeyScenarioTelemetry@@SAXXZ.c)
 *     ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z @ 0x18002AAC8 (-Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall DWMInputRouter::UpdateForegroundTarget(
        DWMInputRouter *this,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rax
  char *v11; // r14
  __int64 (__fastcall ***v12)(_QWORD, GUID *, struct IInputTarget **); // rdi
  unsigned int v13; // r15d
  __int64 (__fastcall *v14)(_QWORD, GUID *, struct IInputTarget **); // rbx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned __int64 v20; // rdi
  bool v21; // bl
  struct IInputTarget *v22; // rcx
  __int64 **v23; // rcx
  __int64 *i; // rax
  struct IInputTarget *v25; // rbx
  int v26; // eax
  int v27; // eax
  struct IInputTarget *v28; // rcx
  int v29; // eax
  int v30; // eax
  int v31; // [rsp+20h] [rbp-30h]
  int v32; // [rsp+20h] [rbp-30h]
  int v33; // [rsp+30h] [rbp-20h] BYREF
  int v34; // [rsp+34h] [rbp-1Ch] BYREF
  struct IInputTarget *v35; // [rsp+38h] [rbp-18h] BYREF
  __int64 v36[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v39; // [rsp+A8h] [rbp+58h] BYREF

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  if ( BamoServerConnection )
  {
    v9 = (_QWORD *)*((_QWORD *)BamoServerConnection + 31);
    v36[0] = (__int64)v9;
    if ( v9 )
    {
      (*(void (__fastcall **)(_QWORD *))*v9)(v9);
      v10 = (*(__int64 (__fastcall **)(_QWORD *))(v9[1] + 184LL))(v9 + 1);
      if ( v10 )
        *(_DWORD *)(v10 + 192) = a4;
    }
    if ( v9 )
      (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
  }
  WinKeyScenarioTelemetry::EndWinKeyScenario();
  v11 = (char *)this - 16;
  v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IInputTarget **))*((_QWORD *)this + 32);
  if ( a4 )
  {
    v13 = a5;
    if ( !v12 )
    {
      v20 = a2;
LABEL_19:
      v35 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
      v23 = (__int64 **)*((_QWORD *)this + 10);
      for ( i = *v23; ; i = (__int64 *)*i )
      {
        if ( i == (__int64 *)v23 )
        {
          v25 = 0LL;
          goto LABEL_24;
        }
        if ( *((_DWORD *)i + 4) == a4 )
          break;
      }
      v25 = (struct IInputTarget *)i[7];
LABEL_24:
      v36[0] = (__int64)v25;
      if ( v25 )
      {
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v25 + 8LL))(v25);
        v30 = DWMFocusedInputTarget::Create(v25, v13, a3, v20, &v35);
        if ( v30 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3D9,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v30,
            v32);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v36);
LABEL_29:
          v27 = (*(__int64 (__fastcall **)(char *, struct IInputTarget *))(*(_QWORD *)v11 + 80LL))(
                  (char *)this - 16,
                  v35);
          if ( v27 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x77D,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
              (const char *)(unsigned int)v27,
              v32);
          v28 = v35;
          if ( v35 )
          {
            v35 = 0LL;
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v28 + 16LL))(v28);
          }
          return;
        }
      }
      else
      {
        v26 = DWMLegacyInputTarget::Create(a4, v13, a3, v20, &v35);
        if ( v26 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3E2,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v26,
            v32);
          goto LABEL_29;
        }
      }
      if ( v25 )
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v25 + 16LL))(v25);
      goto LABEL_29;
    }
    v39 = 0;
    v33 = 0;
    v34 = 0;
    v36[0] = 0LL;
    v35 = 0LL;
    v14 = **v12;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
    v15 = v14(v12, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v35);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x763,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v15,
        v31);
    v16 = (*(__int64 (__fastcall **)(struct IInputTarget *, int *))(*(_QWORD *)v35 + 32LL))(v35, &v39);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x765,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v16,
        v31);
    v17 = (*(__int64 (__fastcall **)(struct IInputTarget *, int *))(*(_QWORD *)v35 + 40LL))(v35, &v33);
    if ( v17 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x766,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v17,
        v31);
    v18 = (*(__int64 (__fastcall **)(struct IInputTarget *, int *))(*(_QWORD *)v35 + 48LL))(v35, &v34);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x767,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v18,
        v31);
    v19 = (*(__int64 (__fastcall **)(struct IInputTarget *, __int64 *))(*(_QWORD *)v35 + 64LL))(v35, v36);
    if ( v19 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x768,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v19,
        v31);
    v20 = a2;
    v21 = a4 == v39 && v13 == v33 && a3 == v34 && a2 == v36[0];
    v22 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    if ( !v21 )
      goto LABEL_19;
  }
  else if ( v12 )
  {
    v29 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v11 + 80LL))((char *)this - 16, 0LL);
    if ( v29 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x751,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v29,
        v31);
  }
}
