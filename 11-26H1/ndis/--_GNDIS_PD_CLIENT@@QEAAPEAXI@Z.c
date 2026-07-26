/*
 * XREFs of ??_GNDIS_PD_CLIENT@@QEAAPEAXI@Z @ 0x14013C4EC
 * Callers:
 *     NdisPDStartup @ 0x1400A7C70 (NdisPDStartup.c)
 *     ?NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z @ 0x14013CFB0 (-NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z.c)
 * Callees:
 *     <none>
 */

NDIS_PD_CLIENT *__fastcall NDIS_PD_CLIENT::`scalar deleting destructor'(NDIS_PD_CLIENT *this)
{
  if ( this )
    ExFreePoolWithTag(this, 0x6341444Eu);
  return this;
}
