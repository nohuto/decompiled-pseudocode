/*
 * XREFs of ?do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z @ 0x18001ACA0
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_s_0 @ 0x1800219A8 (memcpy_s_0.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18005CAB8 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::collate<unsigned short>::do_transform(__int64 a1, _QWORD *a2, const void *a3, __int64 a4)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 i; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  void *v10; // rcx
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rax

  a2[3] = 7LL;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  v6 = (a4 - (__int64)a3) >> 1;
  for ( i = 0LL; v6 > i; i = a2[2] )
  {
    std::wstring::append(a2, v6 - i, 0LL);
    if ( a2[3] < 8uLL )
      v8 = a2;
    else
      v8 = (_QWORD *)*a2;
    v9 = (__int64)v8 + 2 * a2[2];
    if ( a2[3] < 8uLL )
      v10 = a2;
    else
      v10 = (void *)*a2;
    v11 = (v9 - (__int64)v10) >> 1;
    if ( v6 <= v11 )
      memcpy_s_0(v10, 2 * v11, a3, 2 * v6);
  }
  if ( v6 > i )
  {
    std::wstring::append(a2, v6 - i, 0LL);
  }
  else
  {
    if ( a2[3] < 8uLL )
      v12 = a2;
    else
      v12 = (_QWORD *)*a2;
    a2[2] = v6;
    *((_WORD *)v12 + v6) = 0;
  }
  return a2;
}
