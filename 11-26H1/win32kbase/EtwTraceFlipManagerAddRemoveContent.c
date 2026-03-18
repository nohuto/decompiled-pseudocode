/*
 * XREFs of EtwTraceFlipManagerAddRemoveContent @ 0x14012BB30
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qp_EtwWriteTransfer @ 0x1400ABEA4 (McTemplateK0qp_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceFlipManagerAddRemoveContent(__int64 a1, int a2, __int64 a3)
{
  int v3; // r9d
  const EVENT_DESCRIPTOR *v4; // rdx
  NTSTATUS result; // eax

  if ( (_DWORD)a1 )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 1) == 0 )
      return result;
    v3 = a2;
    v4 = (const EVENT_DESCRIPTOR *)&FlipManagerAddContent;
    return McTemplateK0qp_EtwWriteTransfer(a1, v4, a3, v3, a3);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
  {
    v3 = a2;
    v4 = (const EVENT_DESCRIPTOR *)&FlipManagerRemoveContent;
    return McTemplateK0qp_EtwWriteTransfer(a1, v4, a3, v3, a3);
  }
  return result;
}
