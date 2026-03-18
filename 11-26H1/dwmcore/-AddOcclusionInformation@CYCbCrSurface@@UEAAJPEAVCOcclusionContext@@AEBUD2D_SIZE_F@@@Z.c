/*
 * XREFs of ?AddOcclusionInformation@CYCbCrSurface@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180269670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CYCbCrSurface::AddOcclusionInformation(
        CYCbCrSurface *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  v3 = *((_QWORD *)this + 9);
  result = 0LL;
  if ( v3 )
  {
    if ( *((_QWORD *)this + 10) )
      return (*(__int64 (__fastcall **)(_QWORD, struct COcclusionContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v3 + 200LL))(
               *((_QWORD *)this + 9),
               a2,
               a3);
  }
  return result;
}
