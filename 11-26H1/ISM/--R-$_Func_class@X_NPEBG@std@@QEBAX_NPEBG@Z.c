/*
 * XREFs of ??R?$_Func_class@X_NPEBG@std@@QEBAX_NPEBG@Z @ 0x18019DE04
 * Callers:
 *     ?Initialize@CompliantHapticInterface@@QEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@@Z @ 0x18019DFE8 (-Initialize@CompliantHapticInterface@@QEAAJ$$QEAV-$unique_any_t@V-$unique_storage@U-$handle_inva.c)
 *     ?QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ @ 0x18019E14C (-QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ.c)
 *     ?ReportValidationError@CompliantHapticInterface@@AEAAXPEBG@Z @ 0x18019EE34 (-ReportValidationError@CompliantHapticInterface@@AEAAXPEBG@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Func_class<void,bool,unsigned short const *>::operator()(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rcx
  char v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v3 + 16LL))(v3, &v5, &v6);
}
