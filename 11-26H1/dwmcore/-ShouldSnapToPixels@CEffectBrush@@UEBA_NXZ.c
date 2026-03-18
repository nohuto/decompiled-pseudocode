/*
 * XREFs of ?ShouldSnapToPixels@CEffectBrush@@UEBA_NXZ @ 0x1801B33A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CEffectBrush::ShouldSnapToPixels(CEffectBrush *this)
{
  unsigned int v1; // esi
  __int64 i; // rbx
  __int64 v4; // rcx

  v1 = *((_DWORD *)this + 48);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v1 )
      return 0;
    v4 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * i);
    if ( v4 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 336LL))(v4) )
        break;
    }
  }
  return 1;
}
