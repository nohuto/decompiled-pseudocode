/*
 * XREFs of IopWaitForSynchronousIo @ 0x1404634B0
 * Callers:
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x140985BC0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x140989BF0 (IopQueryXxxInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IopCheckIrpCancelled @ 0x14046358C (IopCheckIrpCancelled.c)
 *     IopCancelAlertedRequest @ 0x140B21254 (IopCancelAlertedRequest.c)
 */

__int64 __fastcall IopWaitForSynchronousIo(PIRP Irp, unsigned int *a2, KPROCESSOR_MODE a3)
{
  int v4; // esi
  KPROCESSOR_MODE v8; // r8
  NTSTATUS v9; // eax

  v4 = a2[20] & 4;
  while ( (a2[38] & 0x7F) != 0 || !a2[39] )
  {
    v8 = a3;
    if ( !v4 )
      v8 = 0;
    v9 = KeWaitForSingleObject(a2 + 38, Executive, v8, 1u, 0LL);
    if ( v9 != 192 && v9 != 257 )
      break;
    if ( v4
      || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
      || (unsigned __int8)IopCheckIrpCancelled(a2 + 38, Irp) )
    {
      IopCancelAlertedRequest(a2 + 38, Irp);
      return a2[14];
    }
  }
  return a2[14];
}
