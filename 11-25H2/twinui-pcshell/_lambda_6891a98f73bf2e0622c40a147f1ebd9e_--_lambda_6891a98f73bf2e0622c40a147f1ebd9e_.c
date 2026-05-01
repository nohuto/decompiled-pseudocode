/*
 * XREFs of _lambda_6891a98f73bf2e0622c40a147f1ebd9e_::_lambda_6891a98f73bf2e0622c40a147f1ebd9e_ @ 0x1803639D0
 * Callers:
 *     ?SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ @ 0x1801B8680 (-SetWindowRegion@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_6891a98f73bf2e0622c40a147f1ebd9e_::_lambda_6891a98f73bf2e0622c40a147f1ebd9e_(
        __int64 a1,
        _QWORD *a2,
        _BYTE *a3,
        __int128 *a4,
        _DWORD *a5,
        _BYTE *a6,
        _OWORD *a7)
{
  __int128 v7; // xmm0
  __int64 result; // rax

  v7 = *a4;
  *(_QWORD *)a1 = *a2;
  *(_BYTE *)(a1 + 8) = *a3;
  *(_OWORD *)(a1 + 12) = v7;
  *(_DWORD *)(a1 + 28) = *a5;
  *(_BYTE *)(a1 + 32) = *a6;
  result = a1;
  *(_OWORD *)(a1 + 36) = *a7;
  return result;
}
