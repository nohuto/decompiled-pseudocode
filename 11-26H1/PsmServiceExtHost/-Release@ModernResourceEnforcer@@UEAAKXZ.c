/*
 * XREFs of ?Release@ModernResourceEnforcer@@UEAAKXZ @ 0x180061690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ModernResourceEnforcer::Release(ModernResourceEnforcer *this)
{
  int v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 54);
  if ( v1 < 0 )
    __fastfail(0x80004005);
  if ( !v1 && this )
    (*(void (__fastcall **)(ModernResourceEnforcer *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  return (unsigned int)v1;
}
