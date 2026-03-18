/*
 * XREFs of _guard_dispatch_icall_nop @ 0x140722950
 * Callers:
 *     SymCryptParallelHashProcess @ 0x140558734 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1405589F4 (SymCryptParallelHashProcess_serial.c)
 *     SymCryptParallelHashSetNextWork @ 0x140558B74 (SymCryptParallelHashSetNextWork.c)
 *     SymCryptHashAppendInternal @ 0x1405681A4 (SymCryptHashAppendInternal.c)
 *     SymCryptHashCommonPaddingMd4Style @ 0x14056829C (SymCryptHashCommonPaddingMd4Style.c)
 *     SymCryptFdefIntToModElement @ 0x14056F07C (SymCryptFdefIntToModElement.c)
 *     SymCryptFdefIntToModulus @ 0x14056F104 (SymCryptFdefIntToModulus.c)
 *     SymCryptFdefModElementGetValue @ 0x14056F4CC (SymCryptFdefModElementGetValue.c)
 *     SymCryptFdefModElementSetValueNegUint32 @ 0x14056F6C4 (SymCryptFdefModElementSetValueNegUint32.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140722980 (_guard_xfg_dispatch_icall_nop.c)
 *     KeGuardDispatchICall @ 0x140C7B6F0 (KeGuardDispatchICall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
