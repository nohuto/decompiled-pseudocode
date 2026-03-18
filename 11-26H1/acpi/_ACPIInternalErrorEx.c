/*
 * XREFs of _ACPIInternalErrorEx @ 0x1400254AC
 * Callers:
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x14001DB20 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIIrpDispatchDeviceControl @ 0x140021AD0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchIrp @ 0x140024580 (ACPIDispatchIrp.c)
 *     ACPIDispatchForwardIrp @ 0x140026DF0 (ACPIDispatchForwardIrp.c)
 *     ACPIIoctlEvaluateUsb4Osc @ 0x140062A9C (ACPIIoctlEvaluateUsb4Osc.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn ACPIInternalErrorEx(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0xA3u, 2uLL, (unsigned int)BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}
