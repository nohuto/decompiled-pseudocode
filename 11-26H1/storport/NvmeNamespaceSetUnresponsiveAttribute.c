/*
 * XREFs of NvmeNamespaceSetUnresponsiveAttribute @ 0x140113520
 * Callers:
 *     NvmeNamespaceAttributeManagementIoctl @ 0x1401013DC (NvmeNamespaceAttributeManagementIoctl.c)
 * Callees:
 *     StorEtwNvmeNamespaceEvent @ 0x1400B2058 (StorEtwNvmeNamespaceEvent.c)
 *     StorpTelemetryMarkNamespaceUnresponsive @ 0x1400BD168 (StorpTelemetryMarkNamespaceUnresponsive.c)
 *     NvmeControllerResetRecovery @ 0x14012BD30 (NvmeControllerResetRecovery.c)
 */

__int64 __fastcall NvmeNamespaceSetUnresponsiveAttribute(__int64 a1)
{
  int v1; // eax
  void *v2; // rdi
  wchar_t *Buffer; // rdx
  struct _UNICODE_STRING v6; // [rsp+A0h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 112);
  v2 = *(void **)(a1 + 16);
  v6 = 0LL;
  if ( (v1 & 0x200) == 0 )
  {
    RtlStringFromGUID((const GUID *const)(a1 + 160), &v6);
    Buffer = (wchar_t *)&word_140152E7C;
    if ( v6.Buffer )
      Buffer = v6.Buffer;
    StorEtwNvmeNamespaceEvent(
      a1,
      1,
      4,
      (__int64)L"NVMe namespace clear unresponsive",
      Buffer,
      0,
      (void *)&word_140152E7C,
      0);
    StorpTelemetryMarkNamespaceUnresponsive(a1);
    *(_QWORD *)(a1 + 112) |= 0x200uLL;
    NvmeControllerResetRecovery(v2);
  }
  return 0LL;
}
