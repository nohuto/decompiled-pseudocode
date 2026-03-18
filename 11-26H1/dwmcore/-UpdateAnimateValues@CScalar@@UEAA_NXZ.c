/*
 * XREFs of ?UpdateAnimateValues@CScalar@@UEAA_NXZ @ 0x18027F4F0
 * Callers:
 *     ??1CScalar@@MEAA@XZ @ 0x18027F408 (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     ?Invalidate@CExpressionManager@@QEAAXXZ @ 0x18010E50C (-Invalidate@CExpressionManager@@QEAAXXZ.c)
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x18016A508 (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CScalar::UpdateAnimateValues(CScalar *this)
{
  char v1; // si
  unsigned int v2; // edi

  v1 = 0;
  v2 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    v1 = 1;
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*((_QWORD *)this + 1) + 16LL * v2) + 96LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * v2),
        *(unsigned int *)(*((_QWORD *)this + 1) + 16LL * v2 + 8),
        18LL,
        (char *)this + 48);
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 8) );
  }
  if ( *((_DWORD *)this + 8) )
    CExpressionManager::Invalidate(*(CExpressionManager **)(*((_QWORD *)this - 6) + 816LL));
  CBaseAnimation::UnregisterAnimateResource((CComposition **)this - 9);
  return v1;
}
