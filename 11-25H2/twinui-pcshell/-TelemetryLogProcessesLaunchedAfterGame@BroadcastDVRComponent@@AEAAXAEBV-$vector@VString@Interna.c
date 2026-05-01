/*
 * XREFs of ?TelemetryLogProcessesLaunchedAfterGame@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@@Z @ 0x18010EDA4
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18010F694 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180013248 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z @ 0x18019022C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@QEBG@Z @ 0x1801BF49C (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1801BF49C.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BroadcastDVRComponent::TelemetryLogProcessesLaunchedAfterGame(__int64 a1, HSTRING **a2)
{
  HSTRING *v2; // rbx
  HSTRING *v3; // rdi
  WCHAR *StringRawBuffer; // rdx
  char **v5; // rax
  void *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  const WCHAR *p_Src; // rax
  const WCHAR *v10; // [rsp+30h] [rbp-78h] BYREF
  __int128 Src; // [rsp+38h] [rbp-70h] BYREF
  __m128i si128; // [rsp+48h] [rbp-60h]
  void *v13[4]; // [rsp+58h] [rbp-50h] BYREF
  void *v14[4]; // [rsp+78h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  Src = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(Src) = 0;
  v2 = *a2;
  v3 = a2[1];
  try
  {
    while ( v2 != v3 )
    {
      StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(*v2, 0LL);
      v5 = std::wstring::wstring((char **)v14, StringRawBuffer);
      v6 = (void *)std::operator+<unsigned short>(v13, v5, L";");
      std::wstring::append(&Src, v6);
      std::wstring::_Tidy_deallocate(v13);
      std::wstring::_Tidy_deallocate(v14);
      ++v2;
    }
    if ( (unsigned int)dword_180895060 > 5 && tlgKeywordOn((__int64)&dword_180895060, 0x400000000000LL) )
    {
      p_Src = (const WCHAR *)&Src;
      if ( si128.m128i_i64[1] > 7uLL )
        p_Src = (const WCHAR *)Src;
      v10 = p_Src;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v7,
        byte_1807BACE9,
        0LL,
        v8,
        &v10);
    }
    std::wstring::_Tidy_deallocate((void **)&Src);
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8BF,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)0x8007000ELL);
  }
}
