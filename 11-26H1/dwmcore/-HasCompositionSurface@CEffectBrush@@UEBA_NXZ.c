/*
 * XREFs of ?HasCompositionSurface@CEffectBrush@@UEBA_NXZ @ 0x18026E1D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CEffectBrush::HasCompositionSurface(CEffectBrush *this)
{
  __int64 i; // rbx
  __int64 v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 48); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * i);
    if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 272LL))(v3) )
      return 1;
  }
  return 0;
}
