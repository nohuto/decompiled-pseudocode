/*
 * XREFs of _lambda_76f340d5d82a2ae937276f5837d7f307_::_lambda_76f340d5d82a2ae937276f5837d7f307_ @ 0x1802894F4
 * Callers:
 *     ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@AEAAJPEAUHSTRING__@@0@Z @ 0x180289360 (-OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@AEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall lambda_76f340d5d82a2ae937276f5837d7f307_::_lambda_76f340d5d82a2ae937276f5837d7f307_(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v8; // rcx

  v8 = *a2;
  *a1 = *a2;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  a1[1] = *a3;
  std::wstring::wstring((__int64)(a1 + 2), a4);
  std::wstring::wstring((__int64)(a1 + 6), a5);
  return a1;
}
