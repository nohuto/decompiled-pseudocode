/*
 * XREFs of ?bXformRound@EXFORMOBJR@@QEBA_NPEBU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x140099E70
 * Callers:
 *     <none>
 * Callees:
 *     ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x14009A520 (-bXformRound@EXFORMOBJR@@QEBA_NAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 */

__int64 __fastcall EXFORMOBJR::bXformRound(
        EXFORMOBJR *this,
        const struct _POINTL *a2,
        struct _POINTFIX *a3,
        __int64 a4)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+38h] [rbp-10h]

  v5[0] = a2;
  v5[2] = 0LL;
  v5[1] = a4;
  v6 = 0;
  return EXFORMOBJR::bXformRound(this, v5, a3, a4);
}
