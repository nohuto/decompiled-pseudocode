/*
 * XREFs of AudioServerCreateStreamConnection @ 0x180114C00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180013A08 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18005E4A0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall AudioServerCreateStreamConnection(__int64 a1, _WORD *a2, _WORD *a3, __int64 a4, _QWORD *a5)
{
  __m128i v9; // xmm6
  __int64 v10; // rdx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  __int64 (__fastcall *v15)(__int64, void **, void **, __int64, _QWORD *); // r14
  int v16; // edi
  std::_Ref_count_base *v17; // rcx
  std::_Ref_count_base *v18; // rcx
  std::_Ref_count_base *v19; // rcx
  std::_Ref_count_base *v20; // rcx
  void *v21[4]; // [rsp+48h] [rbp-90h] BYREF
  void *v22[4]; // [rsp+68h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  if ( a5 )
  {
    *a5 = 0LL;
    v9 = 0LL;
    v10 = *((_QWORD *)&g_weakStreamMonitorManager + 1);
    if ( *((_QWORD *)&g_weakStreamMonitorManager + 1) )
    {
      v11 = *(_DWORD *)(*((_QWORD *)&g_weakStreamMonitorManager + 1) + 8LL);
      while ( v11 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11);
        if ( v12 == v11 )
        {
          v9 = (__m128i)g_weakStreamMonitorManager;
          break;
        }
      }
    }
    if ( v9.m128i_i64[0] )
    {
      v13 = operator new[](0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
      v14 = v13;
      if ( v13 )
      {
        *v13 = 0LL;
        v13[1] = 0LL;
        v15 = *(__int64 (__fastcall **)(__int64, void **, void **, __int64, _QWORD *))(*(_QWORD *)v9.m128i_i64[0] + 24LL);
        std::wstring::wstring((char **)v22, a3);
        std::wstring::wstring((char **)v21, a2);
        v16 = v15(v9.m128i_i64[0], v21, v22, a4, v14);
        std::wstring::~wstring(v21);
        std::wstring::~wstring(v22);
        if ( v16 >= 0 )
        {
          *a5 = v14;
          v18 = (std::_Ref_count_base *)_mm_srli_si128(v9, 8).m128i_u64[0];
          if ( v18 )
            std::_Ref_count_base::_Decref(v18);
          return 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x149B,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v16);
          v17 = (std::_Ref_count_base *)_mm_srli_si128(v9, 8).m128i_u64[0];
          if ( v17 )
            std::_Ref_count_base::_Decref(v17);
          return (unsigned int)v16;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1499,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)0x8007000ELL);
        v19 = (std::_Ref_count_base *)_mm_srli_si128(v9, 8).m128i_u64[0];
        if ( v19 )
          std::_Ref_count_base::_Decref(v19);
        return 2147942414LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1496,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x8000FFFFLL);
      v20 = (std::_Ref_count_base *)_mm_srli_si128(v9, 8).m128i_u64[0];
      if ( v20 )
        std::_Ref_count_base::_Decref(v20);
      return 2147549183LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1492,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
