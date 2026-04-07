/*
 * XREFs of ??$detach_abi@I$0A@@winrt@@YA?A_P$$QEAI@Z @ 0x18002EBF4
 * Callers:
 *     ?Resolve@?$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18002EB70 (-Resolve@-$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z.c)
 *     ?store@?$_Atomic_storage@I$03@std@@QEAAXI@Z @ 0x180086C90 (-store@-$_Atomic_storage@I$03@std@@QEAAXI@Z.c)
 *     ?store@?$_Atomic_storage@H$03@std@@QEAAXH@Z @ 0x18009350C (-store@-$_Atomic_storage@H$03@std@@QEAAXH@Z.c)
 *     ??$detach_from@I@impl@winrt@@YA?A_P$$QEAI@Z @ 0x1800D9FA8 (--$detach_from@I@impl@winrt@@YA-A_P$$QEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::detach_abi<unsigned int,0>(unsigned int *a1)
{
  return *a1;
}
