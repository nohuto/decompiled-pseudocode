/*
 * XREFs of ??$_Getvals@_W@?$_Mpunct@_W@std@@IEAAX_WPEBUlconv@@@Z @ 0x18000EE30
 * Callers:
 *     ?_Init@?$_Mpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180013F84 (-_Init@-$_Mpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x18000626C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x180021CF6 (memcpy_0.c)
 *     wcslen_0 @ 0x180021E8D (wcslen_0.c)
 */

_WORD *__fastcall std::_Mpunct<wchar_t>::_Getvals<wchar_t>(__int64 a1, __int64 a2, __int64 a3)
{
  const wchar_t *v5; // rsi
  unsigned __int64 v6; // rdi
  void *v7; // rbx
  const wchar_t *v8; // rsi
  unsigned __int64 v9; // rdi
  void *v10; // rbx
  const wchar_t *v11; // rsi
  unsigned __int64 v12; // rdi
  void *v13; // rbx
  _WORD *result; // rax

  v5 = *(const wchar_t **)((-(__int64)(*(_BYTE *)(a1 + 68) != 0) & 0xFFFFFFFFFFFFFFF8uLL) + a3 + 112);
  v6 = wcslen_0(v5) + 1;
  v7 = operator new[](saturated_mul(v6, 2uLL));
  memcpy_0(v7, v5, 2 * v6);
  *(_QWORD *)(a1 + 32) = v7;
  v8 = &Src;
  if ( *(_BYTE *)(a3 + 86) <= 4u )
    v8 = *(const wchar_t **)(a3 + 136);
  v9 = wcslen_0(v8) + 1;
  v10 = operator new[](saturated_mul(v9, 2uLL));
  memcpy_0(v10, v8, 2 * v9);
  *(_QWORD *)(a1 + 40) = v10;
  v11 = L"-";
  if ( *(_BYTE *)(a3 + 87) <= 4u )
    v11 = *(const wchar_t **)(a3 + 144);
  v12 = wcslen_0(v11) + 1;
  v13 = operator new[](saturated_mul(v12, 2uLL));
  memcpy_0(v13, v11, 2 * v12);
  *(_QWORD *)(a1 + 48) = v13;
  *(_WORD *)(a1 + 24) = **(_WORD **)(a3 + 120);
  result = *(_WORD **)(a3 + 128);
  *(_WORD *)(a1 + 26) = *result;
  return result;
}
