/*
 * XREFs of NvmeAdapterPowerUpDeviceCompletion @ 0x140124D20
 * Callers:
 *     <none>
 * Callees:
 *     GetNvmeAdapter @ 0x140072360 (GetNvmeAdapter.c)
 *     McTemplateK0zqjdz_EtwWriteTransfer @ 0x14007EC1C (McTemplateK0zqjdz_EtwWriteTransfer.c)
 *     NvmeControllerPowerUp @ 0x1400F8B94 (NvmeControllerPowerUp.c)
 *     NvmeAdapterPowerUpDeviceCompletionLastStep @ 0x140124E40 (NvmeAdapterPowerUpDeviceCompletionLastStep.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterPowerUpDeviceCompletion(__int64 a1, void *a2)
{
  union _SLIST_HEADER **NvmeAdapter; // rax
  __int64 v4; // rdx
  union _SLIST_HEADER **v5; // rbx
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  GUID v10; // [rsp+40h] [rbp-28h] BYREF

  NvmeAdapter = (union _SLIST_HEADER **)GetNvmeAdapter(a1);
  v5 = NvmeAdapter;
  if ( *(_BYTE *)(v4 + 65) )
    *(_BYTE *)(*(_QWORD *)(v4 + 184) + 3LL) |= 1u;
  v6 = *(_DWORD *)(v4 + 48);
  if ( v6 >= 0 && (*((_DWORD *)&NvmeAdapter[50][11].HeaderX64 + 2) & 0x40000000) != 0 )
    LOBYTE(v6) = NvmeControllerPowerUp(NvmeAdapter[144]);
  if ( ((_DWORD)v5[52] & 0x40) != 0 )
  {
    IoQueueWorkItem((PIO_WORKITEM)v5[166], NvmeAdapterPowerUpDeviceLastStepWorkItemRoutine, NormalWorkQueue, a2);
    if ( StorEtwLoggingEnabled )
    {
      v10 = 0LL;
      IoGetActivityIdIrp(a2, &v10);
      if ( (byte_140173446 & 0x40) != 0 )
        McTemplateK0zqjdz_EtwWriteTransfer(
          v8,
          v7,
          &v10,
          (const wchar_t *)v5[129],
          *((_DWORD *)v5 + 14),
          (__int64)(v5 + 131),
          v6);
    }
  }
  else
  {
    NvmeAdapterPowerUpDeviceCompletionLastStep(v5, a2);
  }
  return 3221225494LL;
}
