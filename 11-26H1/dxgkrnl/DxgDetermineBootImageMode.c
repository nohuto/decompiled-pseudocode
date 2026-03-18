/*
 * XREFs of DxgDetermineBootImageMode @ 0x1401BDAC0
 * Callers:
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x140402768 (DpiAcquirePostDisplayInfoFromBgfx.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1401E5F30 (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 *     ?DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z @ 0x140417310 (-DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z.c)
 */

int __fastcall DxgDetermineBootImageMode(__int64 a1, _QWORD *a2, char a3, _BYTE *a4)
{
  __int128 v4; // xmm1
  __int128 v8; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  int result; // eax
  unsigned int v16; // ebx
  __int64 v17; // rax
  int v18; // eax
  struct DXGGLOBAL *Global; // rax
  unsigned int v20; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v21; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v22; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING v23; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v24[2]; // [rsp+88h] [rbp-78h] BYREF
  wchar_t v25; // [rsp+A8h] [rbp-58h]
  _OWORD v26[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v27; // [rsp+D0h] [rbp-30h]
  _OWORD v28[8]; // [rsp+E0h] [rbp-20h] BYREF
  int v29; // [rsp+160h] [rbp+60h]
  WCHAR v30; // [rsp+164h] [rbp+64h]

  *(_QWORD *)&v21.Length = 8781956LL;
  v4 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v28[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v8 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers";
  v28[1] = v4;
  v20 = -1;
  v10 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers";
  *(_QWORD *)&v22.Length = 2228256LL;
  v28[2] = v8;
  v11 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers";
  v28[3] = v10;
  v12 = *(_OWORD *)L"et\\Control\\GraphicsDrivers";
  v28[4] = v11;
  v13 = *(_OWORD *)L"ol\\GraphicsDrivers";
  v28[5] = v12;
  v28[6] = v13;
  v14 = *(_OWORD *)L"icsDrivers";
  v24[1] = *(_OWORD *)L"mageMode";
  v28[7] = v14;
  v29 = *(_DWORD *)L"rs";
  v30 = aRegistryMachin_9[66];
  v21.Buffer = (wchar_t *)v28;
  v25 = aCddbootimagemo[16];
  v22.Buffer = (wchar_t *)v24;
  v24[0] = *(_OWORD *)L"CddBootImageMode";
  result = ReadRegistryDwordKeyValue(&v21, &v22, &v20);
  if ( result >= 0 )
  {
    v16 = v20;
  }
  else
  {
    v27 = *(_DWORD *)L"e";
    v23.Buffer = (wchar_t *)v26;
    *(_QWORD *)&v23.Length = 2359330LL;
    v26[0] = *(_OWORD *)L"CddBootScreenMode";
    v26[1] = *(_OWORD *)L"creenMode";
    result = ReadRegistryDwordKeyValue(&v21, &v23, &v20);
    v16 = v20;
    if ( result < 0 )
      v16 = -1;
  }
  if ( v16 )
  {
    if ( v16 != 1 )
    {
      switch ( v16 )
      {
        case 2u:
          result = WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 5274;
          break;
        case 3u:
          *((_DWORD *)DXGGLOBAL::GetGlobal() + 372) = 3;
          return DxgkSetBootAnimationRelayState(1LL);
        case 0xFFFFFFFF:
          break;
        default:
          result = WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 5340;
          return result;
      }
    }
    if ( a3 )
    {
      *((_DWORD *)DXGGLOBAL::GetGlobal() + 372) = 1;
      result = DxgkSetBootAnimationRelayState(3LL);
      if ( (_BYTE)result )
      {
LABEL_24:
        *a4 = 1;
        return result;
      }
      WdLogSingleEntry0(1LL);
      v17 = 5290LL;
    }
    else
    {
      if ( !a2 )
        return result;
      v18 = *(_DWORD *)(a1 + 12);
      if ( v18 != 22 && v18 != 20 )
      {
        result = WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 5303;
        return result;
      }
      Global = DXGGLOBAL::GetGlobal();
      *((_OWORD *)Global + 94) = *(_OWORD *)a1;
      *((_OWORD *)Global + 95) = *(_OWORD *)(a1 + 16);
      *((_QWORD *)DXGGLOBAL::GetGlobal() + 187) = *a2;
      *((_QWORD *)DXGGLOBAL::GetGlobal() + 201) = a2[2];
      *((_DWORD *)DXGGLOBAL::GetGlobal() + 372) = 1;
      result = DxgkSetBootAnimationRelayState(1LL);
      if ( (_BYTE)result )
        goto LABEL_24;
      WdLogSingleEntry0(1LL);
      v17 = 5323LL;
    }
    WdLogGlobalForLineNumber = v17;
    result = DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bRet", v17, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_24;
  }
  return result;
}
