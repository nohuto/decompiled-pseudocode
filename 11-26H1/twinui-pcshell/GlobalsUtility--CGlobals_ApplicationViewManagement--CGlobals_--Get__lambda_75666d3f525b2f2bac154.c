/*
 * XREFs of GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___ @ 0x180071510
 * Callers:
 *     ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x180070E08 (-InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180071690 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x180071868 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802B01C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18030A3C8 (--$CloakTypeChange@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@.c)
 */

void __fastcall GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___(
        __int64 a1)
{
  __int64 v2; // rbx
  HKEY v3; // rcx
  const WCHAR **v4; // r14
  const WCHAR *v5; // rdx
  unsigned int ValueW; // eax
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int64 v9; // rdx
  int *v10; // rdx
  unsigned int pdwType; // [rsp+20h] [rbp-38h]
  _DWORD pvData[2]; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 pcbData; // [rsp+68h] [rbp+10h] BYREF

  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&pcbData);
  v2 = pcbData;
  if ( pcbData )
  {
    v3 = *(HKEY *)(pcbData + 40);
    v4 = *(const WCHAR ***)a1;
    v13 = 0;
    if ( v3 )
    {
      v5 = *v4;
      LODWORD(pcbData) = 12;
      ValueW = RegGetValueW(v3, v5, L"CloakType", 8u, 0LL, pvData, (LPDWORD)&pcbData);
      if ( ValueW == 2 )
        goto LABEL_11;
      if ( ValueW )
      {
        if ( wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x7F,
               (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
               (const char *)ValueW,
               pdwType) < 0 )
          goto LABEL_11;
        goto LABEL_6;
      }
      if ( (_DWORD)pcbData == 12 )
      {
LABEL_6:
        if ( pvData[0] != 4 )
        {
          v7 = 61LL;
LABEL_17:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v7,
            (int)"pcshell\\twinui\\appviewmanager\\lib\\Persistence.h",
            (const char *)0x8007000DLL);
          goto LABEL_11;
        }
        if ( pvData[1] != 1129590832 )
        {
          v7 = 62LL;
          goto LABEL_17;
        }
        v10 = (int *)(*(_QWORD *)(a1 + 8) + 264LL);
        *v10 = v13 & 3;
        ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(
          v4,
          v10);
LABEL_11:
        if ( v2 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v2);
        return;
      }
      v8 = -2147024883;
      v9 = 129LL;
    }
    else
    {
      v8 = -2144927145;
      v9 = 113LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
      (const char *)v8);
    goto LABEL_11;
  }
}
