/*
 * XREFs of BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000DD18
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000E460 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     __security_check_cookie @ 0x1400049A0 (__security_check_cookie.c)
 *     memset_0 @ 0x140005978 (memset_0.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000AF88 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$?0AEBV?$allocator@E@std@@$$V@?$_Compressed_pair@V?$allocator@E@std@@V?$_Vector_val@U?$_Simple_types@E@std@@@2@$00@std@@QEAA@U_One_then_variadic_args_t@1@AEBV?$allocator@E@1@@Z @ 0x14000D5A4 (--$-0AEBV-$allocator@E@std@@$$V@-$_Compressed_pair@V-$allocator@E@std@@V-$_Vector_val@U-$_Simple.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@E@std@@@std@@YAPEAEAEAV?$allocator@E@0@AEA_K@Z @ 0x14000D5E0 (--$_Allocate_at_least_helper@V-$allocator@E@std@@@std@@YAPEAEAEAV-$allocator@E@0@AEA_K@Z.c)
 *     ??$_Reallocate_for@V_lambda_1_@?1??assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV34@QEBG_K@Z@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_1_@?1??assign@01@QEAAAEAV01@QEBG0@Z@PEBG@Z @ 0x14000D988 (--$_Reallocate_for@V_lambda_1_@-1--assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@E@std@@@std@@YAPEAEPEAE_KAEAV?$allocator@E@0@@Z @ 0x14000DA34 (--$_Uninitialized_value_construct_n@V-$allocator@E@std@@@std@@YAPEAEPEAE_KAEAV-$allocator@E@0@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x14000DAB8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@EV?$allocator@E@std@@@std@@@std@@QEAA@XZ @ 0x14000DB20 (--1-$_Tidy_guard@V-$vector@EV-$allocator@E@std@@@std@@@std@@QEAA@XZ.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x14000EC1C (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x14000EC9C (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x14000ED84 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x14000EE0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     ?move@?$_Char_traits@GG@std@@SAPEAGQEAGQEBG_K@Z @ 0x14000EE24 (-move@-$_Char_traits@GG@std@@SAPEAGQEAGQEBG_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000F104 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

__int64 __fastcall BlackScreenDiagnostics::GetCurrentProcessVersionInfo(_QWORD *a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  const void *v4; // r9
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // r9
  HANDLE CurrentProcess; // rax
  DWORD v9; // eax
  __int64 v10; // rcx
  const WCHAR *v12; // r8
  DWORD v13; // eax
  __int64 v14; // rcx
  size_t v15; // rdx
  size_t v16; // rbx
  __int64 v17; // rcx
  void *v18; // r9
  const WCHAR *v19; // r10
  DWORD LastError; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // rbx
  _QWORD *v26; // rsi
  int v27; // [rsp+20h] [rbp-E0h]
  int v28; // [rsp+28h] [rbp-D8h]
  int v29; // [rsp+30h] [rbp-D0h]
  DWORD dwSize; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int puLen; // [rsp+44h] [rbp-BCh] BYREF
  size_t v32; // [rsp+48h] [rbp-B8h] BYREF
  LPCVOID pBlock; // [rsp+50h] [rbp-B0h] BYREF
  char *v34; // [rsp+58h] [rbp-A8h]
  char *v35; // [rsp+60h] [rbp-A0h]
  LPVOID lpBuffer; // [rsp+68h] [rbp-98h] BYREF
  LPCWSTR lptstrFilename[4]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v38[8]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-60h]
  __int128 v40; // [rsp+B0h] [rbp-50h]
  __int16 v41; // [rsp+C0h] [rbp-40h]
  WCHAR ExeName[264]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = std::_WChar_traits<unsigned short>::length(L"Unknown");
  v5 = v2;
  if ( v2 > a1[3] )
  {
    ____Reallocate_for_V_lambda_1___1__assign___basic_string_GU__char_traits_G_std__V__allocator_G_2__std__QEAAAEAV34_QEBG_K_Z_PEBG___basic_string_GU__char_traits_G_std__V__allocator_G_2__std__AEAAAEAV01__KV_lambda_1___1__assign_01_QEAAAEAV01_QEBG0_Z_PEBG_Z(
      (__int64)a1,
      v2,
      v3,
      v4);
  }
  else
  {
    v6 = a1;
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(a1) )
      v6 = (_QWORD *)*a1;
    a1[2] = v5;
    std::_Char_traits<unsigned short,unsigned short>::move(v6, v7, v5);
    *((_WORD *)v6 + v5) = 0;
  }
  dwSize = 260;
  memset_0(ExeName, 0, 0x208uLL);
  CurrentProcess = GetCurrentProcess();
  if ( QueryFullProcessImageNameW(CurrentProcess, 0, ExeName, &dwSize) )
  {
    std::wstring::wstring((__int64)lptstrFilename, (__int64)ExeName);
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(lptstrFilename) )
      v12 = lptstrFilename[0];
    if ( GetFileVersionInfoSizeW(v12, 0LL) )
    {
      std::_Compressed_pair<std::allocator<unsigned char>,std::_Vector_val<std::_Simple_types<unsigned char>>,1>::_Compressed_pair<std::allocator<unsigned char>,std::_Vector_val<std::_Simple_types<unsigned char>>,1>(&pBlock);
      v16 = v15;
      v32 = v15;
      pBlock = std::_Allocate_at_least_helper<std::allocator<unsigned char>>(v17, &v32);
      v35 = (char *)pBlock + v16;
      v34 = std::_Uninitialized_value_construct_n<std::allocator<unsigned char>>((char *)pBlock, v16);
      v32 = 0LL;
      std::_Tidy_guard<std::vector<unsigned char>>::~_Tidy_guard<std::vector<unsigned char>>(&v32);
      if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(lptstrFilename) )
        v19 = lptstrFilename[0];
      if ( GetFileVersionInfoW(v19, 0, (_DWORD)v34 - (_DWORD)v18, v18) )
      {
        lpBuffer = 0LL;
        puLen = 0;
        if ( VerQueryValueW(pBlock, L"\\", &lpBuffer, &puLen) )
        {
          *(_OWORD *)v38 = 0LL;
          v39 = 0LL;
          v41 = 0;
          v40 = 0LL;
          v29 = *((unsigned __int16 *)lpBuffer + 6);
          v28 = *((unsigned __int16 *)lpBuffer + 7);
          v27 = *((unsigned __int16 *)lpBuffer + 4);
          StringCchPrintfW(
            v38,
            0x19uLL,
            (size_t *)L"%hu.%hu.%hu.%hu",
            *((unsigned __int16 *)lpBuffer + 5),
            v27,
            v28,
            v29);
          v23 = std::_WChar_traits<unsigned short>::length(v38);
          v25 = v23;
          if ( v23 > a1[3] )
          {
            ____Reallocate_for_V_lambda_1___1__assign___basic_string_GU__char_traits_G_std__V__allocator_G_2__std__QEAAAEAV34_QEBG_K_Z_PEBG___basic_string_GU__char_traits_G_std__V__allocator_G_2__std__AEAAAEAV01__KV_lambda_1___1__assign_01_QEAAAEAV01_QEBG0_Z_PEBG_Z(
              (__int64)a1,
              v23,
              v24,
              v38);
          }
          else
          {
            v26 = a1;
            if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(a1) )
              v26 = (_QWORD *)*a1;
            a1[2] = v25;
            std::_Char_traits<unsigned short,unsigned short>::move(v26, v38, v25);
            *((_WORD *)v26 + v25) = 0;
          }
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredArgs(v22, 0LL, 0LL);
        }
      }
      else
      {
        LastError = GetLastError();
        MicrosoftTelemetryAssertTriggeredArgs(v21, LastError, 0LL);
      }
      std::vector<unsigned char>::_Tidy(&pBlock);
    }
    else
    {
      v13 = GetLastError();
      MicrosoftTelemetryAssertTriggeredArgs(v14, v13, 0LL);
    }
    return std::wstring::_Tidy_deallocate(lptstrFilename);
  }
  else
  {
    v9 = GetLastError();
    return MicrosoftTelemetryAssertTriggeredArgs(v10, v9, 0LL);
  }
}
