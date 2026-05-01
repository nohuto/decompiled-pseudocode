/*
 * XREFs of ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x18010AAD8
 * Callers:
 *     ?GenerateCandidateListForTelemetry@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBU?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@Z @ 0x18010A63C (-GenerateCandidateListForTelemetry@@YA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W.c)
 * Callees:
 *     ??0sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z @ 0x1802B1B84 (--0sentry@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::operator<<<wchar_t,std::char_traits<wchar_t>>(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rbx
  unsigned __int16 v8; // ax
  __int16 v9; // ax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int16 v13; // ax
  __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-48h] BYREF
  char v17; // [rsp+28h] [rbp-40h]

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a2 + 2 * v5) );
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
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
          goto LABEL_22;
        }
        if ( v9 == -1 )
        {
          v4 = 4;
          goto LABEL_20;
        }
        --v6;
      }
      v2 = a2;
    }
    v11 = std::wios::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
    if ( std::wstreambuf::sputn(v11, v2, v5) == v5 )
    {
      while ( v6 > 0 )
      {
        v12 = std::wios::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        v13 = std::wios::fill(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        if ( (unsigned __int16)std::wstreambuf::sputc(v12, v13) == 0xFFFF )
          goto LABEL_19;
        --v6;
      }
    }
    else
    {
LABEL_19:
      v4 = 4;
    }
LABEL_20:
    std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL)), 0LL);
  }
  else
  {
    v4 = 4;
  }
LABEL_22:
  std::wios::setstate(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v4, 0LL);
  if ( !std::uncaught_exception() )
    std::wostream::_Osfx(v16);
  v14 = std::wios::rdbuf(v16 + *(int *)(*(_QWORD *)v16 + 4LL));
  if ( v14 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 16LL))(v14, v14);
  return v3;
}
