/*
 * XREFs of EtwTraceTouchpadEndInertiaQueued @ 0x1401B8A30
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceTouchpadEndInertiaQueued(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &TouchpadEndInertiaQueued, &W32kControlGuid);
  return result;
}
