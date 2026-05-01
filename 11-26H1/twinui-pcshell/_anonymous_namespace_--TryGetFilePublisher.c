/*
 * XREFs of _anonymous_namespace_::TryGetFilePublisher @ 0x1805EB00C
 * Callers:
 *     _anonymous_namespace_::DoRequestorAndForegroundPublisherMatch @ 0x1805E56A4 (_anonymous_namespace_--DoRequestorAndForegroundPublisherMatch.c)
 *     _anonymous_namespace_::TryGetProcessPublisher @ 0x1805EB748 (_anonymous_namespace_--TryGetProcessPublisher.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$FilePublisherRetrieved@PEBGAEAPEAG@PinManagerTelemetry@@SAX$$QEAPEBGAEAPEAG@Z @ 0x1805DE838 (--$FilePublisherRetrieved@PEBGAEAPEAG@PinManagerTelemetry@@SAX$$QEAPEBGAEAPEAG@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1805E0F94 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall anonymous_namespace_::TryGetFilePublisher(__int64 a1, LPCWSTR *a2)
{
  const WCHAR *v3; // rdi
  DWORD FileVersionInfoSize; // eax
  const char *v5; // r9
  __int64 result; // rax
  const WCHAR *v9; // [rsp+40h] [rbp-48h] BYREF
  LPVOID lpBuffer; // [rsp+48h] [rbp-40h] BYREF
  DWORD dwHandle; // [rsp+50h] [rbp-38h] BYREF
  unsigned int puLen; // [rsp+54h] [rbp-34h] BYREF
  LPCVOID pBlock[2]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v14; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  dwHandle = 0;
  v3 = *a2;
  FileVersionInfoSize = GetFileVersionInfoSizeExW(2u, *a2, &dwHandle);
  try
  {
    if ( FileVersionInfoSize )
    {
      *(_OWORD *)pBlock = 0LL;
      v14 = 0LL;
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(pBlock, FileVersionInfoSize);
      if ( GetFileVersionInfoExW(2u, v3, 0, LODWORD(pBlock[1]) - LODWORD(pBlock[0]), (LPVOID)pBlock[0]) )
      {
        lpBuffer = 0LL;
        puLen = 0;
        if ( VerQueryValueW(pBlock[0], L"\\StringFileInfo\\040904B0\\CompanyName", &lpBuffer, &puLen) )
        {
          v9 = v3;
          PinManagerTelemetry::FilePublisherRetrieved<unsigned short const *,unsigned short * &>(
            &v9,
            (const WCHAR **)&lpBuffer);
          std::wstring::wstring(a1, (__int64)lpBuffer);
          if ( pBlock[0] )
            std::_Deallocate<16>((void *)pBlock[0], (struct std::nothrow_t *)(v14 - (unsigned __int64)pBlock[0]));
          return a1;
        }
      }
      if ( pBlock[0] )
        std::_Deallocate<16>((void *)pBlock[0], (struct std::nothrow_t *)(v14 - (unsigned __int64)pBlock[0]));
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
      (void *)0x233,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      v5);
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
    return a1;
  }
  return result;
}
