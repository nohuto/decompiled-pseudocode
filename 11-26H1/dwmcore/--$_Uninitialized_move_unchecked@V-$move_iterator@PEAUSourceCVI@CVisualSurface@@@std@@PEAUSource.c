/*
 * XREFs of ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@std@@PEAUSourceCVI@CVisualSurface@@@std@@YAPEAUSourceCVI@CVisualSurface@@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@0@V30@PEAU12@@Z @ 0x180212D6C
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18009C410 (-ensure_extra_capacity@-$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Uninitialized_move_unchecked<std::move_iterator<CVisualSurface::SourceCVI *>,CVisualSurface::SourceCVI *>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v3; // rax

  while ( a1 != a2 )
  {
    v3 = *a1;
    *a1 = 0LL;
    *a3 = v3;
    a3[1] = a1[1];
    a3 += 2;
    a1 += 2;
  }
  return a3;
}
