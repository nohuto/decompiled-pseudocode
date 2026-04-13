/*
 * XREFs of ?GetEventNameFromToken@ContentManagement@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800523F8
 * Callers:
 *     ?IsHighPriorityEvent@ContentManagement@@YA_NPEBG@Z @ 0x18005436C (-IsHighPriorityEvent@ContentManagement@@YA_NPEBG@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004B620 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004B658 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     _anonymous_namespace_::SplitString @ 0x18005872C (_anonymous_namespace_--SplitString.c)
 *     ?_Destroy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEAAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@0@Z @ 0x18005A6F0 (-_Destroy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005C76C (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::GetEventNameFromToken(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-19h] BYREF
  __int64 v7; // [rsp+30h] [rbp-9h]
  __int128 v8; // [rsp+38h] [rbp-1h] BYREF
  __int64 v9; // [rsp+48h] [rbp+Fh]
  __int64 v10; // [rsp+58h] [rbp+1Fh]
  _BYTE v11[16]; // [rsp+60h] [rbp+27h] BYREF
  __int64 v12; // [rsp+70h] [rbp+37h]

  v10 = a1;
  std::wstring::wstring((__int64)v11);
  if ( !v12 )
  {
LABEL_13:
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_WORD *)a1 = 0;
    goto LABEL_14;
  }
  anonymous_namespace_::SplitString(&v6, v11, L"?");
  v2 = v6;
  if ( *((_QWORD *)&v6 + 1) - (_QWORD)v6 != 64LL )
  {
LABEL_11:
    if ( v2 )
    {
      std::vector<std::wstring>::_Destroy(v3, v2, *((_QWORD *)&v6 + 1));
      operator delete((void *)v6);
    }
    goto LABEL_13;
  }
  anonymous_namespace_::SplitString(&v8, v6 + 32, L"=");
  if ( *((_QWORD *)&v8 + 1) - (_QWORD)v8 != 64LL )
  {
    if ( (_QWORD)v8 )
    {
      std::vector<std::wstring>::_Destroy(v3, v8, *((_QWORD *)&v8 + 1));
      operator delete((void *)v8);
    }
    v2 = v6;
    goto LABEL_11;
  }
  std::wstring::wstring(a1, v8 + 32);
  if ( (_QWORD)v8 )
  {
    std::vector<std::wstring>::_Destroy(v4, v8, *((_QWORD *)&v8 + 1));
    operator delete((void *)v8);
    v8 = 0LL;
    v9 = 0LL;
  }
  v2 = v6;
  if ( (_QWORD)v6 )
  {
    std::vector<std::wstring>::_Destroy(v4, v6, *((_QWORD *)&v6 + 1));
    operator delete((void *)v6);
    v6 = 0LL;
    v7 = 0LL;
  }
LABEL_14:
  LOBYTE(v2) = 1;
  std::wstring::_Tidy(v11, v2, 0LL);
  return a1;
}
