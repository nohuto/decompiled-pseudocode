/*
 * XREFs of _lambda_219695f63e651180cfc7ae358f81f100_::_lambda_219695f63e651180cfc7ae358f81f100_ @ 0x180387420
 * Callers:
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x1801A9C80 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180218F54 (-InternalAddRef@-$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_219695f63e651180cfc7ae358f81f100_::_lambda_219695f63e651180cfc7ae358f81f100_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v5; // r8
  __int64 v6; // r10
  _DWORD *v7; // r9
  __int64 result; // rax

  *a1 = *a2;
  Microsoft::WRL::ComPtr<CStartExperienceManager>::InternalAddRef(a1);
  *(_QWORD *)(v6 + 8) = v5;
  *(_DWORD *)(v6 + 16) = *v7;
  result = v6;
  *(_DWORD *)(v6 + 20) = *a5;
  return result;
}
