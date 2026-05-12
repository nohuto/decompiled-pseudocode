/*
 * XREFs of RaidQueryDlrmSupportStatus @ 0x1400956AC
 * Callers:
 *     StorAdapterInitializeDlrmIfSupported @ 0x1401B0860 (StorAdapterInitializeDlrmIfSupported.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidSyncAcpiEvalMethod @ 0x140047160 (RaidSyncAcpiEvalMethod.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidQueryDlrmSupportStatus(PDEVICE_OBJECT DeviceObject, _BYTE *a2)
{
  char *Pool; // rax
  char *v6; // rbx
  int v7; // esi
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  __int128 OutputBuffer; // [rsp+38h] [rbp-40h] BYREF
  __int64 v10; // [rsp+48h] [rbp-30h]

  v10 = 0LL;
  OutputBuffer = 0LL;
  if ( !a2 )
    return 3221225485LL;
  *a2 = 0;
  Pool = (char *)RaidAllocatePool(64LL, 64LL, 1128358226LL, (__int64)DeviceObject);
  v6 = Pool;
  if ( !Pool )
    return 3221225626LL;
  memset_0(Pool, 0, 0x40uLL);
  *(_DWORD *)v6 = 1130980673;
  *((_DWORD *)v6 + 1) = 1297302623;
  *((_DWORD *)v6 + 2) = 64;
  *((_DWORD *)v6 + 3) = 4;
  *((_DWORD *)v6 + 4) = 1048578;
  *(GUID *)(v6 + 20) = GUID_ACPI_DSM_DLRM_SUPPORT_STATUS;
  *((_WORD *)v6 + 19) = 4;
  *((_DWORD *)v6 + 10) = 1;
  *((_WORD *)v6 + 23) = 4;
  *((_DWORD *)v6 + 12) = 1;
  *((_WORD *)v6 + 26) = 4;
  v7 = RaidSyncAcpiEvalMethod(DeviceObject, v6, 0x40u, &OutputBuffer, 0x18u, &v8);
  if ( v7 >= 0 )
  {
    if ( (_DWORD)OutputBuffer == 1114596673 && DWORD2(OutputBuffer) && !WORD6(OutputBuffer) )
      *a2 = v10 & 1;
    else
      v7 = -1072431089;
  }
  ExFreePoolWithTag(v6, 0x43416152u);
  return (unsigned int)v7;
}
