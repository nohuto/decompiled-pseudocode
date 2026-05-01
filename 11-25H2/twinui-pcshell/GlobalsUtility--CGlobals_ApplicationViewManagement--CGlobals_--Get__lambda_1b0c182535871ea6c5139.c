/*
 * XREFs of GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_1b0c182535871ea6c5139e310f080a01___ @ 0x180053694
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x1800535CC (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054000 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800541B4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9FD8 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_1b0c182535871ea6c5139e310f080a01___(
        __int64 a1)
{
  __int64 v2; // rbx
  HKEY v3; // rcx
  const WCHAR *v4; // rdx
  unsigned int ValueW; // eax
  __int64 v6; // r9
  const char *v7; // r8
  __int64 v8; // rdx
  unsigned int v9; // [rsp+20h] [rbp-58h]
  DWORD pcbData[2]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD pvData[2]; // [rsp+48h] [rbp-30h] BYREF
  __int128 v12; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(pcbData);
  v2 = *(_QWORD *)pcbData;
  if ( *(_QWORD *)pcbData )
  {
    v3 = *(HKEY *)(*(_QWORD *)pcbData + 40LL);
    v4 = **(const WCHAR ***)a1;
    if ( !v3 )
    {
      v6 = 2150040151LL;
      v7 = "pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp";
      v8 = 113LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(retaddr, (void *)v8, (int)v7, (const char *)v6);
      goto LABEL_6;
    }
    pcbData[0] = 24;
    ValueW = RegGetValueW(v3, v4, L"VirtualDesktop", 8u, 0LL, pvData, pcbData);
    if ( ValueW == 2 )
      goto LABEL_6;
    if ( ValueW )
    {
      if ( (int)wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x7F,
                  (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
                  (const char *)ValueW,
                  v9) < 0 )
        goto LABEL_6;
    }
    else if ( pcbData[0] != 24 )
    {
      v7 = "pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp";
      v8 = 129LL;
LABEL_16:
      v6 = 2147942413LL;
      goto LABEL_17;
    }
    if ( pvData[0] == 16 )
    {
      if ( pvData[1] == 1447309360 )
      {
        *(_OWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = v12;
LABEL_6:
        if ( v2 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v2);
        return;
      }
      v8 = 62LL;
    }
    else
    {
      v8 = 61LL;
    }
    v7 = "pcshell\\twinui\\appviewmanager\\lib\\Persistence.h";
    goto LABEL_16;
  }
}
