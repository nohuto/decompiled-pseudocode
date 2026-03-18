/*
 * XREFs of ?DxgkCleanupTelemetry@@YAXXZ @ 0x140079D4C
 * Callers:
 *     DxgkUnload @ 0x1401D5860 (DxgkUnload.c)
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x14028A7CC (TlgUnregisterAggregateProvider.c)
 */

void DxgkCleanupTelemetry(void)
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx
  REGHANDLE v3; // rcx

  TlgUnregisterAggregateProvider(&dword_1401665B8);
  v0 = qword_1401665A0;
  qword_1401665A0 = 0LL;
  dword_140166580 = 0;
  EtwUnregister(v0);
  v1 = qword_140166568;
  qword_140166568 = 0LL;
  dword_140166548 = 0;
  EtwUnregister(v1);
  v2 = RegHandle;
  RegHandle = 0LL;
  dword_1401665F0 = 0;
  EtwUnregister(v2);
  TlgUnregisterAggregateProvider(&dword_140166660);
  v3 = qword_140166648;
  qword_140166648 = 0LL;
  dword_140166628 = 0;
  EtwUnregister(v3);
}
