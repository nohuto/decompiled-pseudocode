/*
 * XREFs of _lambda_668917084cb4c0da526c2ffad1d9f84c_::_lambda_668917084cb4c0da526c2ffad1d9f84c_ @ 0x180398548
 * Callers:
 *     ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x180398BF8 (-ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_668917084cb4c0da526c2ffad1d9f84c_::_lambda_668917084cb4c0da526c2ffad1d9f84c_(
        __int64 a1,
        _BYTE *a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int64 result; // rax

  v3 = *a3;
  *(_BYTE *)a1 = *a2;
  v4 = a3[1];
  *((_QWORD *)a3 + 2) = 0LL;
  *(_WORD *)a3 = 0;
  result = a1;
  *(_OWORD *)(a1 + 8) = v3;
  *((_QWORD *)a3 + 3) = 7LL;
  *(_OWORD *)(a1 + 24) = v4;
  return result;
}
