/*
 * XREFs of ??$_Copy_impl@PEA_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@YA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@0@PEA_W0V10@U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18000E9A0
 * Callers:
 *     ?do_put@?$time_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBUtm@@DD@Z @ 0x18001AB50 (-do_put@-$time_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$ostreambu.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_OWORD *__fastcall std::_Copy_impl<wchar_t *,std::ostreambuf_iterator<wchar_t>>(
        _OWORD *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        __int64 a4)
{
  unsigned __int16 *v6; // rbx
  __int64 v8; // rdi
  unsigned __int16 v9; // r8
  int *v10; // rax
  unsigned __int16 **v11; // rcx
  unsigned __int16 *v12; // rdx
  _OWORD *result; // rax

  v6 = a2;
  if ( a2 != a3 )
  {
    v8 = *(_QWORD *)(a4 + 8);
    do
    {
      if ( !v8
        || ((v9 = *v6, !**(_QWORD **)(v8 + 64)) || (v10 = *(int **)(v8 + 88), *v10 <= 0)
          ? (v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, v9))
          : (--*v10, v11 = *(unsigned __int16 ***)(v8 + 64), v12 = *v11, ++*v11, *v12 = v9),
            v9 == 0xFFFF) )
      {
        *(_BYTE *)a4 = 1;
      }
      ++v6;
    }
    while ( v6 != a3 );
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
