/*
 * XREFs of ?bIsProcessLocalSystem@@YAHXZ @ 0x14026E000
 * Callers:
 *     ?UmpdSecurityGateNoUmpdObj@@YA_NXZ @ 0x1400D3200 (-UmpdSecurityGateNoUmpdObj@@YA_NXZ.c)
 *     NtGdiSetPUMPDOBJ @ 0x140265370 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x140230610 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall bIsProcessLocalSystem(__int64 a1)
{
  struct _EPROCESS *CurrentProcess; // rax

  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(a1);
  return bIsProcessLocalSystem(CurrentProcess);
}
