/*
 * XREFs of ?_Chassign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0_W@Z @ 0x18005A3F0
 * Callers:
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18005CAB8 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18005CDA0 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall std::wstring::_Chassign(_QWORD *a1, __int64 a2, size_t a3, wchar_t a4)
{
  wchar_t *result; // rax

  if ( a3 == 1 )
  {
    if ( a1[3] >= 8uLL )
      a1 = (_QWORD *)*a1;
    *((_WORD *)a1 + a2) = a4;
  }
  else
  {
    if ( a1[3] >= 8uLL )
      a1 = (_QWORD *)*a1;
    return wmemset((wchar_t *)a1 + a2, a4, a3);
  }
  return result;
}
