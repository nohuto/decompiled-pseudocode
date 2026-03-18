/*
 * XREFs of ?DpiAcpiEventCallback@@YAXPEAXK@Z @ 0x14005A570
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DpiAcpiCallAcpiEventHandler @ 0x14005A5C8 (DpiAcpiCallAcpiEventHandler.c)
 */

void __fastcall DpiAcpiEventCallback(PVOID Object)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)Object, (__int64)&EventACPIEvent);
  DpiAcpiCallAcpiEventHandler(Object);
}
