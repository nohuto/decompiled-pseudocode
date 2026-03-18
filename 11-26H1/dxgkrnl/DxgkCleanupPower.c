/*
 * XREFs of DxgkCleanupPower @ 0x14023F2D8
 * Callers:
 *     DxgkUnload @ 0x1401D5860 (DxgkUnload.c)
 *     DriverEntry @ 0x14044C078 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void DxgkCleanupPower()
{
  signed __int64 v0; // rax

  if ( byte_140168DD8 )
  {
    if ( Handle )
    {
      PoUnregisterPowerSettingCallback(Handle);
      Handle = 0LL;
    }
    if ( qword_1401692B0 )
    {
      PoUnregisterPowerSettingCallback(qword_1401692B0);
      qword_1401692B0 = 0LL;
    }
    if ( qword_140169340 )
    {
      KeCancelTimer(&Timer);
      KeFlushQueuedDpcs();
      v0 = _InterlockedCompareExchange64(&qword_140169340, qword_140169340 | 3, qword_140169340 | 1);
      if ( (v0 & 1) == 0 )
      {
        IoFreeWorkItem((PIO_WORKITEM)(v0 & 0xFFFFFFFFFFFFFFFCuLL));
        qword_140169340 = 0LL;
      }
    }
  }
}
