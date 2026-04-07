/*
 * XREFs of ??_G?$__func@V_lambda_1_@?3??RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@34@@Z@$$A6A_NPEAX131I@Z@__function@wistd@@UEAAPEAXI@Z @ 0x180090B80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall wistd::__function::Z::$$A6A_NPEAX131I::Z::__func<`wil::details_abi::RecordWnfUsageIndex'::`4'::_lambda_1_,AXPEBU__WIL__WNF_STATE_NAME,unsigned __int64,wil::details_abi::RawUsageIndex const &>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<void (int const &)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
