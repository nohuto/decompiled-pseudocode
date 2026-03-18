/*
 * XREFs of ?clear@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180183404
 * Callers:
 *     ??1?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180183300 (--1-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippingScopeState@CSco.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1)
{
  __int64 v1; // rbx
  _QWORD *result; // rax
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *a1;
  result = (_QWORD *)0xAAAAAAAAAAAAAAABLL;
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 6);
  if ( v4 )
  {
    v5 = (a1[1] - *a1) >> 6 << 6;
    v6 = v5 + v1;
    result = stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v8, *a1, v4);
    while ( v1 != v6 )
    {
      v7 = *(_QWORD *)(v1 + 176);
      if ( v7 )
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v1 += 192LL;
    }
    a1[1] -= v5;
  }
  return result;
}
