/*
 * XREFs of ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180019420
 * Callers:
 *     <none>
 * Callees:
 *     ?_Putmfld@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_W1V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@3@Z @ 0x180016C00 (-_Putmfld@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ost.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180021B5D (--3@YAXPEAX@Z_0.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18005CAB8 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005CBE0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005CCEC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x180084ED0 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::do_put(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        char a4,
        __int64 a5,
        unsigned __int16 a6,
        _QWORD *a7)
{
  _QWORD *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rsi
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  char v14; // si
  __int64 v15; // r9
  unsigned __int64 v16; // r11
  _WORD *v17; // rcx
  unsigned __int64 i; // r8
  _QWORD *v19; // rcx
  _WORD *v20; // rax
  __int16 v21; // dx
  __int16 v22; // cx
  unsigned __int16 v23; // bx
  __int128 v26; // [rsp+68h] [rbp-71h] BYREF
  _WORD v27[8]; // [rsp+78h] [rbp-61h] BYREF
  __int64 v28; // [rsp+88h] [rbp-51h]
  __int64 v29; // [rsp+90h] [rbp-49h]
  __int64 v30; // [rsp+98h] [rbp-41h]
  void *v31[2]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-29h]
  unsigned __int64 v33; // [rsp+B8h] [rbp-21h]
  _WORD v34[12]; // [rsp+C0h] [rbp-19h] BYREF

  v30 = -2LL;
  v10 = a7;
  v11 = **(_QWORD **)(a5 + 64);
  *(_QWORD *)&v26 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = std::use_facet<std::ctype<wchar_t>>((std::locale *)&v26);
  if ( v11 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v11 = 0LL;
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  (*(void (__fastcall **)(__int64, const char *, char *, _WORD *))(*(_QWORD *)v12 + 88LL))(v12, "0123456789-", "", v34);
  v14 = v11;
  v15 = v11;
  v16 = a7[2];
  if ( v16 )
  {
    v17 = a7[3] < 8uLL ? a7 : (_WORD *)*a7;
    if ( *v17 == v34[10] )
    {
      v14 = 1;
      v15 = 1LL;
    }
  }
  for ( i = v15; i < v16; ++i )
  {
    if ( a7[3] < 8uLL )
      v19 = a7;
    else
      v19 = (_QWORD *)*a7;
    v20 = v34;
    if ( v34[0] )
    {
      v21 = *((_WORD *)v19 + i);
      v22 = v34[0];
      do
      {
        if ( v22 == v21 )
          break;
        v22 = *++v20;
      }
      while ( *v20 );
    }
    if ( (unsigned __int64)(v20 - v34) >= 0xA )
      break;
  }
  if ( a7[3] >= 8uLL )
    v10 = (_QWORD *)*a7;
  v33 = 7LL;
  v32 = v11;
  LOWORD(v31[0]) = v11;
  std::wstring::assign(v31, (char *)v10 + 2 * v15, i - v15);
  if ( v32 == v11 )
    std::wstring::append(v31, 1LL, v34[0]);
  v23 = v34[0];
  v29 = 7LL;
  v28 = 0LL;
  v27[0] = 0;
  std::wstring::assign(v27, v31, 0LL, -1LL);
  v26 = *a3;
  std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Putmfld(a1, a2, &v26, a4, a5, a6, v14, (__int64)v27, v23);
  if ( v33 >= 8 )
    operator delete(v31[0]);
  return a2;
}
