/*
 * XREFs of ?GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOperationData@1@@Z @ 0x180518088
 * Callers:
 *     ?StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@@Z @ 0x18051B9CC (-StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppLayoutData@TabletModeTraceLogging@@CAJPEAUIAppLayout@@PEAUAppLayoutData@1@@Z @ 0x180517D00 (-GetAppLayoutData@TabletModeTraceLogging@@CAJPEAUIAppLayout@@PEAUAppLayoutData@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModeTraceLogging::GetAppLayoutOperationData(
        struct IAppLayoutOperation *a1,
        struct TabletModeTraceLogging::AppLayoutOperationData *a2)
{
  __int64 (__fastcall *v4)(struct IAppLayoutOperation *, struct IAppLayout **); // rbx
  int AppLayoutData; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(struct IAppLayoutOperation *, struct IAppLayout **); // rbx
  int v9; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IAppLayout *v13; // [rsp+40h] [rbp+20h] BYREF
  struct IAppLayout *v14; // [rsp+50h] [rbp+30h] BYREF

  v14 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, struct IAppLayout **))(*(_QWORD *)a1 + 40LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  AppLayoutData = v4(a1, &v14);
  v6 = AppLayoutData;
  if ( AppLayoutData < 0 )
  {
    v7 = 453LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
      (const char *)(unsigned int)AppLayoutData);
    goto LABEL_12;
  }
  AppLayoutData = TabletModeTraceLogging::GetAppLayoutData(v14, a2);
  v6 = AppLayoutData;
  if ( AppLayoutData < 0 )
  {
    v7 = 454LL;
    goto LABEL_5;
  }
  v13 = 0LL;
  v8 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, struct IAppLayout **))(*(_QWORD *)a1 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
  v9 = v8(a1, &v13);
  v6 = v9;
  if ( v9 >= 0 )
  {
    v9 = TabletModeTraceLogging::GetAppLayoutData(
           v13,
           (struct TabletModeTraceLogging::AppLayoutOperationData *)((char *)a2 + 120));
    v6 = v9;
    if ( v9 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
      v6 = 0;
      goto LABEL_12;
    }
    v10 = 458LL;
  }
  else
  {
    v10 = 457LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
    (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  return v6;
}
