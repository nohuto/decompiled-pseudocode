/*
 * XREFs of ??0bad_alloc@std@@QEAA@XZ @ 0x1800A59E4
 * Callers:
 *     ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x18009B2D0 (-__scrt_throw_std_bad_alloc@@YAXXZ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800A6EF8 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     <none>
 */

std::bad_alloc *__fastcall std::bad_alloc::bad_alloc(std::bad_alloc *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = "bad allocation";
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
