/*
 * XREFs of RIMCloseDev @ 0x1400933FC
 * Callers:
 *     rimOnPnpRemoveComplete @ 0x1400930E8 (rimOnPnpRemoveComplete.c)
 *     rimOnPnpArrived @ 0x140093AC0 (rimOnPnpArrived.c)
 *     RIMOpenDev @ 0x1400944B4 (RIMOpenDev.c)
 *     RIMUnregisterForInput @ 0x140129F90 (RIMUnregisterForInput.c)
 *     rimFakePnpRemoveComplete @ 0x14020B834 (rimFakePnpRemoveComplete.c)
 *     rimOnPnpQueryRemove @ 0x14020BA78 (rimOnPnpQueryRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCloseDev(__int64 a1)
{
  unsigned int v2; // edi
  void *v3; // rcx
  NTSTATUS v4; // eax
  void *v5; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = *(void **)(a1 + 208);
  if ( v3 )
  {
    IoStatusBlock = 0LL;
    ZwCancelIoFile(v3, &IoStatusBlock);
    v4 = ZwClose(*(HANDLE *)(a1 + 208));
    v5 = *(void **)(a1 + 216);
    v2 = v4;
    if ( v5 )
    {
      ObfDereferenceObject(v5);
      *(_QWORD *)(a1 + 216) = 0LL;
    }
    *(_DWORD *)(a1 + 168) &= 0xFFFFFE7F;
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  return v2;
}
