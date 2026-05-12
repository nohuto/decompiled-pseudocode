/*
 * XREFs of RaidQueryAcpiDsdStorageD3Property @ 0x140045CF4
 * Callers:
 *     NvmeAdapterInitializeD3Configuration @ 0x140123888 (NvmeAdapterInitializeD3Configuration.c)
 *     RaidInitializeAdapter @ 0x140186B24 (RaidInitializeAdapter.c)
 * Callees:
 *     RaidQueryAcpiDsdSynchronous @ 0x140045DC8 (RaidQueryAcpiDsdSynchronous.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

char __fastcall RaidQueryAcpiDsdStorageD3Property(PDEVICE_OBJECT DeviceObject, _DWORD *a2)
{
  char v4; // di
  _DWORD v6[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v7; // [rsp+3Ch] [rbp-CCh]
  int v8; // [rsp+40h] [rbp-C8h]
  int InputBuffer; // [rsp+50h] [rbp-B8h] BYREF
  GUID v10; // [rsp+54h] [rbp-B4h]
  int v11; // [rsp+64h] [rbp-A4h]
  char v12[136]; // [rsp+68h] [rbp-A0h] BYREF

  *a2 = -1;
  v4 = 0;
  memset_0(v6, 0, 0xC0uLL);
  InputBuffer = 1214866753;
  v10 = GUID_STORAGE_ACPI_DSD_D3_ENABLE;
  v11 = 16;
  strcpy(v12, "StorageD3Enable");
  if ( (int)RaidQueryAcpiDsdSynchronous(DeviceObject, &InputBuffer) >= 0 && v6[0] == 1114596673 && v6[2] == 1 && !v7 )
  {
    v4 = 1;
    *a2 = v8;
  }
  return v4;
}
