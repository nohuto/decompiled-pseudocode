/*
 * XREFs of ?GetDisplayAdapterLuid@COverlayContext@@IEBA?AU_LUID@@XZ @ 0x1801BC984
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180141868 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _LUID __fastcall COverlayContext::GetDisplayAdapterLuid(COverlayContext *this, __int64 a2)
{
  __int64 v3; // rax

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 280LL))(*((_QWORD *)this + 7));
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 232LL))(v3, a2);
  return (struct _LUID)a2;
}
