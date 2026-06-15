/*
 * XREFs of wil::details::lambda_call__lambda_842938c96e8d505d80aca0d1b991fd0a___::_lambda_call__lambda_842938c96e8d505d80aca0d1b991fd0a___ @ 0x1800B02C0
 * Callers:
 *     _EffectPack::SetDeviceFormatAndSpatialSettings_::_1_::dtor$8 @ 0x18016BA61 (_EffectPack--SetDeviceFormatAndSpatialSettings_--_1_--dtor$8.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_842938c96e8d505d80aca0d1b991fd0a___::_lambda_call__lambda_842938c96e8d505d80aca0d1b991fd0a___(
        _BYTE *a1)
{
  __int64 result; // rax

  result = (__int64)a1;
  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)g_policyConfigInternal + 32LL))(
             g_policyConfigInternal,
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1584LL) + 48LL));
  }
  return result;
}
