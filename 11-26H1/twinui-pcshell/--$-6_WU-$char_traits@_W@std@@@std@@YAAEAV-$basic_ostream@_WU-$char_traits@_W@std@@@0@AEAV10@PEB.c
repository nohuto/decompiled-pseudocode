/*
 * XREFs of ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x1801AFC68
 * Callers:
 *     ?GenerateCandidateListForTelemetry@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBU?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Z @ 0x1801AFA90 (-GenerateCandidateListForTelemetry@@YA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??0sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z @ 0x1806A8D5C (--0sentry@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::operator<<<wchar_t,std::char_traits<wchar_t>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rbx
  unsigned __int16 v8; // ax
  __int16 v9; // ax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int16 v13; // ax
  __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  char v17; // [rsp+28h] [rbp-30h]

  v3 = a1;
  v4 = 0;
  v5 = std::_WChar_traits<wchar_t>::length(a2);
  if ( std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL))) <= v5 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL))) - v5;
  }
  std::wostream::sentry::sentry(&v16, v3);
  if ( v17 )
  {
    if ( (std::ios_base::flags((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL))) & 0x1C0) != 0x40 )
    {
      while ( v6 > 0 )
      {
        v7 = std::wios::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        v8 = std::wios::fill(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        try
        {
          v9 = std::wstreambuf::sputc(v7, v8);
        }
        catch ( ... )
        {
          LOBYTE(v10) = 1;
          std::wios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v10);
          v3 = a1;
          v4 = 0;
          goto LABEL_18;
        }
        if ( v9 == -1 )
          goto LABEL_15;
        --v6;
      }
    }
    v11 = std::wios::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
    if ( std::wstreambuf::sputn(v11, a2, v5) == v5 )
    {
      while ( v6 > 0 )
      {
        v12 = std::wios::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        v13 = std::wios::fill(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        if ( (unsigned __int16)std::wstreambuf::sputc(v12, v13) == 0xFFFF )
          goto LABEL_15;
        --v6;
      }
    }
    else
    {
LABEL_15:
      v4 = 4;
    }
    std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL)), 0LL);
  }
  else
  {
    v4 = 4;
  }
LABEL_18:
  std::wios::setstate(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v4, 0LL);
  if ( !std::uncaught_exception() )
    std::wostream::_Osfx(v16);
  v14 = std::wios::rdbuf(v16 + *(int *)(*(_QWORD *)v16 + 4LL));
  if ( v14 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 16LL))(v14, v14);
  return v3;
}
