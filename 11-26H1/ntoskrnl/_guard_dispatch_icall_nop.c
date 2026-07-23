/*
 * XREFs of _guard_dispatch_icall_nop @ 0x140727520
 * Callers:
 *     SymCryptParallelHashProcess @ 0x14055ABC4 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x14055AE88 (SymCryptParallelHashProcess_serial.c)
 *     SymCryptParallelHashSetNextWork @ 0x14055B008 (SymCryptParallelHashSetNextWork.c)
 *     SymCryptHashAppendInternal @ 0x140567384 (SymCryptHashAppendInternal.c)
 *     SymCryptHashCommonPaddingMd4Style @ 0x14056747C (SymCryptHashCommonPaddingMd4Style.c)
 *     SymCryptFdefIntToModElement @ 0x14056E25C (SymCryptFdefIntToModElement.c)
 *     SymCryptFdefIntToModulus @ 0x14056E2E4 (SymCryptFdefIntToModulus.c)
 *     SymCryptFdefModElementGetValue @ 0x14056E6AC (SymCryptFdefModElementGetValue.c)
 *     SymCryptFdefModElementSetValueNegUint32 @ 0x14056E8A4 (SymCryptFdefModElementSetValueNegUint32.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140727550 (_guard_xfg_dispatch_icall_nop.c)
 *     KeGuardDispatchICall @ 0x140C816F0 (KeGuardDispatchICall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
