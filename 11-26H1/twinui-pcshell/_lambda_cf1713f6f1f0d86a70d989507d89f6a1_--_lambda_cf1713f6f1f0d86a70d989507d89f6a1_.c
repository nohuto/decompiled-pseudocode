/*
 * XREFs of _lambda_cf1713f6f1f0d86a70d989507d89f6a1_::_lambda_cf1713f6f1f0d86a70d989507d89f6a1_ @ 0x1803AD1F0
 * Callers:
 *     ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18001E5D0 (-UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18018D1A0 (-BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_cf1713f6f1f0d86a70d989507d89f6a1_::_lambda_cf1713f6f1f0d86a70d989507d89f6a1_(
        __int64 a1,
        _BYTE *a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 result; // rax

  *(_BYTE *)a1 = *a2;
  *(_DWORD *)(a1 + 4) = *a3;
  result = a1;
  *(_QWORD *)(a1 + 8) = a4;
  return result;
}
