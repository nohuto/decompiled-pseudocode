/*
 * XREFs of ??R?$__func@V_lambda_1_@?3??RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@34@@Z@$$A6A_NPEAX131I@Z@__function@wistd@@UEAA_N$$QEAPEAX$$QEA_K01$$QEAI@Z @ 0x1400072A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x140009F8C (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 */

char __fastcall wistd::__function::Z::$$A6A_NPEAX131I::Z::__func<`wil::details_abi::RecordWnfUsageIndex'::`4'::_lambda_1_,AXPEBU__WIL__WNF_STATE_NAME,unsigned __int64,wil::details_abi::RawUsageIndex const &>::operator()(
        __int64 a1,
        void **a2,
        unsigned __int64 *a3,
        void **a4,
        unsigned __int64 *a5,
        unsigned int *a6)
{
  bool v7; // al
  char v8; // dl

  if ( **(_QWORD **)(a1 + 8) < **(_QWORD **)(a1 + 16)
    || (v7 = wil::details_abi::RawUsageIndex::RecordUsage(
               *(wil::details_abi::RawUsageIndex **)(a1 + 24),
               *a2,
               *a3,
               *a4,
               *a5,
               *a6),
        v8 = 0,
        v7) )
  {
    v8 = 1;
    ++**(_QWORD **)(a1 + 8);
  }
  return v8;
}
