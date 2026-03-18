/*
 * XREFs of ?HasAntialiasedContent@CVisual@@MEBA_NXZ @ 0x18016D320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CVisual::HasAntialiasedContent(CVisual *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 31);
  return v1 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 232LL))(v1);
}
