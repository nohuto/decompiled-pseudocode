/*
 * XREFs of ?DxgMmsDeInitDebug@@YAXXZ @ 0x14009C244
 * Callers:
 *     DriverUnload @ 0x14004D040 (DriverUnload.c)
 * Callees:
 *     <none>
 */

void DxgMmsDeInitDebug(void)
{
  if ( P )
  {
    KeDeregisterBugCheckReasonCallback(P);
    ExFreePoolWithTag(P, 0x4B677844u);
    P = 0LL;
    qword_14008A2B8 = 0LL;
  }
}
