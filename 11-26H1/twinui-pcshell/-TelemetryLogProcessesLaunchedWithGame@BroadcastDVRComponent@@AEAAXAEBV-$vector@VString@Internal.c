/*
 * XREFs of ?TelemetryLogProcessesLaunchedWithGame@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@@Z @ 0x180201678
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x18004ECD4 (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800334F0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Take_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXAEAV12@@Z @ 0x1800336B0 (-_Take_contents@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXAEAV12@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z @ 0x180033C3C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18016F55C (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
void BroadcastDVRComponent::TelemetryLogProcessesLaunchedWithGame()
{
  int v0; // edi
  HSTRING **v1; // rdx
  HSTRING *v2; // rbx
  HSTRING *v3; // rsi
  PCWSTR StringRawBuffer; // rax
  unsigned __int64 v5; // r8
  const void *v6; // rcx
  unsigned __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r9
  const WCHAR *v11; // rax
  const WCHAR *v12; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-70h] BYREF
  _OWORD v14[2]; // [rsp+58h] [rbp-50h] BYREF
  _OWORD Src[2]; // [rsp+78h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v0 = 0;
  LODWORD(v12) = 0;
  std::wstring::wstring((__int64)v13);
  v2 = *v1;
  v3 = v1[1];
  try
  {
    while ( v2 != v3 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*v2, 0LL);
      memset(Src, 0, sizeof(Src));
      v5 = std::_WChar_traits<wchar_t>::length((__int64)StringRawBuffer);
      std::wstring::_Construct<1,unsigned short const *>((char **)Src, v6, v5);
      v7 = std::_WChar_traits<wchar_t>::length((__int64)L";");
      v8 = std::wstring::append(Src, L";", v7);
      memset(v14, 0, sizeof(v14));
      std::wstring::_Take_contents(v14, (__int64)v8);
      v0 |= 1u;
      std::wstring::append(v13, v14);
      std::wstring::_Tidy_deallocate(v14);
      std::wstring::_Tidy_deallocate(Src);
      ++v2;
    }
    if ( (unsigned int)dword_1808D50F0 > 5 && tlgKeywordOn((__int64)&dword_1808D50F0, 0x400000000000LL) )
    {
      v11 = (const WCHAR *)v13;
      if ( v13[3] > 7uLL )
        v11 = (const WCHAR *)v13[0];
      v12 = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v9,
        byte_1807E8050,
        0LL,
        v10,
        &v12);
    }
    std::wstring::_Tidy_deallocate(v13);
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8D4,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)0x8007000ELL);
  }
}
