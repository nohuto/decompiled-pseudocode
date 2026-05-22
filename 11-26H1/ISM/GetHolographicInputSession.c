/*
 * XREFs of GetHolographicInputSession @ 0x1800D597C
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D6FF0 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800D71A0 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ @ 0x1800D83D0 (-StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ.c)
 * Callees:
 *     ?length@?$_WChar_traits@G@std@@SA_KPEBG@Z @ 0x180025A0C (-length@-$_WChar_traits@G@std@@SA_KPEBG@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800A6844 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x1800B3168 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800B5798 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800BBE28 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800C7E80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAAEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH11@Z @ 0x1800D4178 (--$emplace_back@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessio.c)
 *     ??1TraceSessionConfig@@QEAA@XZ @ 0x1800D4B04 (--1TraceSessionConfig@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetHolographicInputSession(__int64 a1)
{
  unsigned __int64 v2; // rax
  const void *v3; // rcx
  const char *v4; // r9
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  const void *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  int v14[8]; // [rsp+48h] [rbp-C0h] BYREF
  char v15[32]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v16; // [rsp+88h] [rbp-80h]
  void *Src[4]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v18; // [rsp+B8h] [rbp-50h]
  __int64 v19; // [rsp+C8h] [rbp-40h]
  __int64 v20; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v21; // [rsp+D8h] [rbp-30h]
  _BYTE v22[528]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+310h] [rbp+208h]

  *(_QWORD *)v14 = a1;
  std::wstring::wstring((__int64)v15);
  v16 = 0LL;
  std::wstring::wstring((__int64)Src);
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v2 = std::_WChar_traits<unsigned short>::length((__int64)L"HolographicInput");
  std::wstring::assign(v15, v3, v2);
  v16 = xmmword_1802064D8;
  *(_QWORD *)&v18 = 64LL;
  *((_QWORD *)&v18 + 1) = 0x810000002LL;
  v19 = 0x10000000002LL;
  memset_0(v22, 0, 0x208uLL);
  if ( !(unsigned int)GetTempPath2W(260LL, v22) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x181,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      v4);
  v5 = std::_WChar_traits<unsigned short>::length((__int64)v22);
  std::wstring::assign((char *)Src, v22, v5);
  v6 = std::_WChar_traits<unsigned short>::length((__int64)L"\\DiagOutputDir\\HolographicInput.etl");
  std::wstring::append(Src, v7, v6);
  v12 = 0;
  v13[0] = 0;
  v14[0] = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v20,
    L"{3317C7E7-7C40-4275-9F7B-D539C10E19BA}",
    v14,
    v13,
    &v12);
  v14[0] = 0;
  v13[0] = 0;
  v12 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v20,
    L"{F903DB44-149E-4B4E-AFE1-2A1096F53DFA}",
    &v12,
    v13,
    v14);
  v14[0] = 0;
  v13[0] = 0;
  v12 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v20,
    L"{6E831A67-EB0D-55CD-69C0-CFE57755346D}",
    &v12,
    v13,
    v14);
  v14[0] = 0;
  v13[0] = 0;
  v12 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v20,
    L"{D27719C1-8DCF-555B-E03F-EF4E275A4799}",
    &v12,
    v13,
    v14);
  std::wstring::wstring(a1);
  *(_OWORD *)(a1 + 32) = v16;
  std::wstring::wstring(a1 + 48);
  *(_OWORD *)(a1 + 80) = v18;
  *(_QWORD *)(a1 + 96) = v19;
  v8 = *((_QWORD *)&v21 + 1);
  v9 = v21;
  v21 = 0uLL;
  v10 = v20;
  v20 = 0LL;
  *(_QWORD *)(a1 + 104) = v10;
  *(_QWORD *)(a1 + 112) = v9;
  *(_QWORD *)(a1 + 120) = v8;
  TraceSessionConfig::~TraceSessionConfig((TraceSessionConfig *)v15);
  return a1;
}
