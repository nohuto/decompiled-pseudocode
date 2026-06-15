/*
 * XREFs of wil::details::lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___::_lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___ @ 0x1800AE8B0
 * Callers:
 *     _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$6 @ 0x180165F33 (_CVolumeStrip--RuntimeClassInitialize_--_1_--dtor$6.c)
 *     _CVolumeSoftware::Make_::_1_::dtor$1 @ 0x18016672C (_CVolumeSoftware--Make_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___::_lambda_call__lambda_c171d1cfc9bb0199cde32a6699e12b6f___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)a1 + 16LL))(**(_QWORD **)a1);
  }
  return result;
}
