/*
 * XREFs of _anonymous_namespace_::TryGetFilePublisher @ 0x1805C7258
 * Callers:
 *     _anonymous_namespace_::DoRequestorAndForegroundPublisherMatch @ 0x1805C158C (_anonymous_namespace_--DoRequestorAndForegroundPublisherMatch.c)
 *     _anonymous_namespace_::TryGetProcessPublisher @ 0x1805C79B4 (_anonymous_namespace_--TryGetProcessPublisher.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$FilePublisherRetrieved@PEBGAEAPEAG@PinManagerTelemetry@@SAX$$QEAPEBGAEAPEAG@Z @ 0x1805BAD30 (--$FilePublisherRetrieved@PEBGAEAPEAG@PinManagerTelemetry@@SAX$$QEAPEBGAEAPEAG@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1805BD588 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::TryGetFilePublisher(__int64 a1, LPCWSTR *a2)
{
  const WCHAR *v3; // r14
  DWORD FileVersionInfoSize; // eax
  const char *v5; // r9
  __int64 v6; // rsi
  void *v7; // rdi
  __int64 result; // rax
  const WCHAR *v11; // [rsp+40h] [rbp-58h] BYREF
  LPVOID lpBuffer; // [rsp+48h] [rbp-50h] BYREF
  DWORD v13; // [rsp+50h] [rbp-48h] BYREF
  unsigned int puLen; // [rsp+54h] [rbp-44h] BYREF
  LPCVOID pBlock[2]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v16; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v13 = 0;
  v3 = *a2;
  FileVersionInfoSize = GetFileVersionInfoSizeExW(2u, *a2, &v13);
  try
  {
    if ( FileVersionInfoSize )
    {
      *(_OWORD *)pBlock = 0LL;
      v16 = 0LL;
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>((__int64)pBlock, FileVersionInfoSize);
      v6 = v16;
      v7 = (void *)pBlock[0];
      if ( GetFileVersionInfoExW(2u, v3, 0, LODWORD(pBlock[1]) - LODWORD(pBlock[0]), (LPVOID)pBlock[0]) )
      {
        lpBuffer = 0LL;
        puLen = 0;
        if ( VerQueryValueW(v7, L"\\StringFileInfo\\040904B0\\CompanyName", &lpBuffer, &puLen) )
        {
          v11 = v3;
          PinManagerTelemetry::FilePublisherRetrieved<unsigned short const *,unsigned short * &>(
            &v11,
            (const WCHAR **)&lpBuffer);
          std::wstring::wstring((char **)a1, lpBuffer);
          if ( v7 )
            std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)(v6 - (_QWORD)v7));
          return a1;
        }
      }
      if ( v7 )
        std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)(v6 - (_QWORD)v7));
    }
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
    result = a1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x259,
      (int)"pcshell\\twinui\\PinManager\\lib\\PinManager.cpp",
      v5);
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
    return a1;
  }
  return result;
}
