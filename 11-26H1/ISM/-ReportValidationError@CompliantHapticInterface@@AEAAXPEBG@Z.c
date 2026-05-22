/*
 * XREFs of ?ReportValidationError@CompliantHapticInterface@@AEAAXPEBG@Z @ 0x18019EE34
 * Callers:
 *     ?Initialize@CompliantHapticInterface@@QEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@@Z @ 0x18019DFE8 (-Initialize@CompliantHapticInterface@@QEAAJ$$QEAV-$unique_any_t@V-$unique_storage@U-$handle_inva.c)
 *     ?QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ @ 0x18019E14C (-QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ.c)
 * Callees:
 *     ??R?$_Func_class@X_NPEBG@std@@QEBAX_NPEBG@Z @ 0x18019DE04 (--R-$_Func_class@X_NPEBG@std@@QEBAX_NPEBG@Z.c)
 */

void __fastcall CompliantHapticInterface::ReportValidationError(
        CompliantHapticInterface *this,
        const unsigned __int16 *a2)
{
  char *v2; // rcx

  v2 = (char *)this + 464;
  if ( *((_QWORD *)v2 + 7) )
    std::_Func_class<void,bool,unsigned short const *>::operator()((__int64)v2, 1, (__int64)a2);
}
