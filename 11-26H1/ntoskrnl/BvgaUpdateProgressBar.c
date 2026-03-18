/*
 * XREFs of BvgaUpdateProgressBar @ 0x1405C6070
 * Callers:
 *     BvgaIndicateProgress @ 0x140CBA240 (BvgaIndicateProgress.c)
 * Callees:
 *     BvgaAcquireLock @ 0x1405C5AD0 (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x1405C5DC0 (BvgaReleaseLock.c)
 */

void __fastcall BvgaUpdateProgressBar(int a1)
{
  int v1; // ebx
  int v2; // ecx
  __int64 v3; // rdi

  v1 = 0;
  if ( ShowProgressBar )
  {
    if ( BvgaBootDriverInstalled )
    {
      if ( !BvgaDisplayState )
      {
        v2 = 18 * (BvgaProgressState + dword_140F86758 * a1);
        if ( v2 / 10000 > 0 )
        {
          v3 = (unsigned int)(v2 / 10000);
          do
          {
            BvgaAcquireLock();
            VidSolidColorFill(
              (unsigned int)(v1 + ProgressBarLeft),
              (unsigned int)ProgressBarTop,
              (unsigned int)(v1 + ProgressBarLeft + 7),
              (unsigned int)(ProgressBarTop + 7),
              11);
            BvgaReleaseLock();
            v1 += 9;
            --v3;
          }
          while ( v3 );
        }
      }
    }
  }
}
