/*
 * XREFs of _lambda_be09023083cb68ae0d6884a72774a2ad_::_lambda_be09023083cb68ae0d6884a72774a2ad_ @ 0x180304470
 * Callers:
 *     ?SetForceActiveWindowAppearance@CFrameApplicationPresentation@@UEAAJ_N@Z @ 0x180305B90 (-SetForceActiveWindowAppearance@CFrameApplicationPresentation@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_be09023083cb68ae0d6884a72774a2ad_::_lambda_be09023083cb68ae0d6884a72774a2ad_(
        __int64 a1,
        __int64 a2,
        _BYTE *a3)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 8) = *a3;
  result = a1;
  *(_QWORD *)a1 = a2;
  return result;
}
