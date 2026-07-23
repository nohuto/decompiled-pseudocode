/*
 * XREFs of KdpCloseFileCallback @ 0x140C19460
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 */

NTSTATUS __fastcall KdpCloseFileCallback(__int64 a1)
{
  void *v1; // rcx
  NTSTATUS result; // eax

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    return ZwClose(v1);
  return result;
}
