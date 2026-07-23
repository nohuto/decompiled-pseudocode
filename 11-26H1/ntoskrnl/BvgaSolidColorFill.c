/*
 * XREFs of BvgaSolidColorFill @ 0x1405C8810
 * Callers:
 *     <none>
 * Callees:
 *     BvgaAcquireLock @ 0x1405C8340 (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x1405C8630 (BvgaReleaseLock.c)
 *     HeadlessDispatch @ 0x1406CF8A0 (HeadlessDispatch.c)
 */

void __fastcall BvgaSolidColorFill(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  _DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( !BvgaDisplayState )
  {
    BvgaAcquireLock();
    if ( BvgaBootDriverInstalled )
      VidSolidColorFill(a1, a2, a3, a4, a5);
    v9[0] = 37;
    BvgaTerminalBkgdColor = 40;
    v9[1] = 40;
    HeadlessDispatch(9LL, v9, 8LL);
    HeadlessDispatch(4LL, 0LL, 0LL);
    BvgaReleaseLock();
  }
}
