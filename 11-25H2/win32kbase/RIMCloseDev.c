/*
 * XREFs of RIMCloseDev @ 0x14013F5A8
 * Callers:
 *     rimOnPnpRemoveComplete @ 0x14002E724 (rimOnPnpRemoveComplete.c)
 *     RIMUnregisterForInput @ 0x14009DC10 (RIMUnregisterForInput.c)
 *     rimOnPnpArrived @ 0x140181640 (rimOnPnpArrived.c)
 *     RIMOpenDev @ 0x1401D57E0 (RIMOpenDev.c)
 *     rimFakePnpRemoveComplete @ 0x1401ED134 (rimFakePnpRemoveComplete.c)
 *     rimOnPnpQueryRemove @ 0x1401ED378 (rimOnPnpQueryRemove.c)
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
    *(_QWORD *)(a1 + 208) = 0LL;
    *(_DWORD *)(a1 + 168) &= 0xFFFFFE7F;
  }
  return v2;
}
