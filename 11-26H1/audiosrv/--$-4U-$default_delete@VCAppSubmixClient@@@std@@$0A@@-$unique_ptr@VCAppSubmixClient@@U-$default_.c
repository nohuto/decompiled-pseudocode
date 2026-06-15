/*
 * XREFs of ??$?4U?$default_delete@VCAppSubmixClient@@@std@@$0A@@?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B03B0
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient___________lambda_d253d5d01bc5b20cb42527c72daa90e2___ @ 0x1800BB490 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CAppSub.c)
 * Callees:
 *     ??R?$default_delete@VCAppSubmixClient@@@std@@QEBAXPEAVCAppSubmixClient@@@Z @ 0x18007B64C (--R-$default_delete@VCAppSubmixClient@@@std@@QEBAXPEAVCAppSubmixClient@@@Z.c)
 */

__int64 **__fastcall std::unique_ptr<CAppSubmixClient>::operator=<std::default_delete<CAppSubmixClient>,0>(
        __int64 **a1,
        __int64 **a2)
{
  __int64 *v2; // rax
  __int64 *v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<CAppSubmixClient>::operator()((__int64)a1, v4);
  return a1;
}
