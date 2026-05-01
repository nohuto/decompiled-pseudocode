/*
 * XREFs of GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_1b0c182535871ea6c5139e310f080a01___ @ 0x180070C90
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x180070BB8 (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180071690 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x180071868 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802B01C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_1b0c182535871ea6c5139e310f080a01___(
        __int64 a1)
{
  __int64 v2; // rbx
  HKEY v3; // rcx
  const WCHAR *v4; // rdx
  unsigned int ValueW; // eax
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rdx
  unsigned int pdwType; // [rsp+20h] [rbp-58h]
  DWORD pcbData[4]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD pvData[2]; // [rsp+50h] [rbp-28h] BYREF
  __int128 v12; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(pcbData);
  v2 = *(_QWORD *)pcbData;
  if ( *(_QWORD *)pcbData )
  {
    v3 = *(HKEY *)(*(_QWORD *)pcbData + 40LL);
    v4 = **(const WCHAR ***)a1;
    if ( v3 )
    {
      pcbData[0] = 24;
      ValueW = RegGetValueW(v3, v4, L"VirtualDesktop", 8u, 0LL, pvData, pcbData);
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
      if ( pcbData[0] == 24 )
      {
LABEL_6:
        if ( pvData[0] != 16 )
        {
          v6 = 61LL;
LABEL_17:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v6,
            (int)"pcshell\\twinui\\appviewmanager\\lib\\Persistence.h",
            (const char *)0x8007000DLL);
          goto LABEL_11;
        }
        if ( pvData[1] != 1447309360 )
        {
          v6 = 62LL;
          goto LABEL_17;
        }
        *(_OWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = v12;
LABEL_11:
        if ( v2 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v2);
        return;
      }
      v7 = -2147024883;
      v8 = 129LL;
    }
    else
    {
      v7 = -2144927145;
      v8 = 113LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
      (const char *)v7);
    goto LABEL_11;
  }
}
