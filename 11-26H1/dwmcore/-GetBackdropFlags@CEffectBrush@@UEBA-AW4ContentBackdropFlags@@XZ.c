/*
 * XREFs of ?GetBackdropFlags@CEffectBrush@@UEBA?AW4ContentBackdropFlags@@XZ @ 0x1800F9330
 * Callers:
 *     <none>
 * Callees:
 *     ?HasBlurEffectNode@CEffectBrush@@QEBA_NXZ @ 0x1800F93CC (-HasBlurEffectNode@CEffectBrush@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CEffectBrush::GetBackdropFlags(__int64 a1)
{
  unsigned int v1; // eax
  char v2; // bl
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rcx

  v1 = *(_DWORD *)(a1 + 192);
  v2 = 0;
  if ( v1 )
  {
    v4 = 0LL;
    v5 = v1;
    do
    {
      v6 = *(_QWORD *)(v4 + *(_QWORD *)(a1 + 168));
      if ( v6 )
        v2 |= (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 312LL))(v6);
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
    if ( (v2 & 1) != 0 && *(_QWORD *)(a1 + 160) && CEffectBrush::HasBlurEffectNode((CEffectBrush *)a1) )
      return v2 | 8;
  }
  return v2;
}
