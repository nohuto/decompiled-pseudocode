/*
 * XREFs of PipUpdateSetupInProgressNotify @ 0x14079E948
 * Callers:
 *     PipUpdateSetupInProgressCallback @ 0x14079E930 (PipUpdateSetupInProgressCallback.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x14072A440 (ZwNotifyChangeKey.c)
 *     PipUpdateSetupInProgress @ 0x14079E820 (PipUpdateSetupInProgress.c)
 */

void __fastcall PipUpdateSetupInProgressNotify(void *a1, char a2)
{
  void *v4; // rbx

  if ( PnpSetupInProgress || PnpSetupOOBEInProgress )
  {
    v4 = a1;
    if ( ZwNotifyChangeKey(a1, 0LL, PnpSetupWorkItem, (PVOID)1, &PnpSetupIoStatusBlock, 4u, 0, 0LL, 0, 1u) >= 0 )
      v4 = 0LL;
    if ( a2 )
      PipUpdateSetupInProgress(a1);
    if ( v4 )
      ZwClose(v4);
  }
}
