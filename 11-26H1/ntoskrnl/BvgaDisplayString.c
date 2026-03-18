/*
 * XREFs of BvgaDisplayString @ 0x1405C5BC0
 * Callers:
 *     <none>
 * Callees:
 *     BvgaAcquireLock @ 0x1405C5AD0 (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x1405C5DC0 (BvgaReleaseLock.c)
 *     HeadlessDispatch @ 0x1406CB870 (HeadlessDispatch.c)
 */

char __fastcall BvgaDisplayString(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rcx

  if ( BvgaDisplayState )
    return 0;
  BvgaAcquireLock();
  if ( BvgaBootDriverInstalled )
    VidDisplayString(a1);
  v2 = -1LL;
  do
    ++v2;
  while ( *(_BYTE *)(a1 + v2) );
  HeadlessDispatch(3LL, a1, v2 + 1);
  BvgaReleaseLock(v3);
  return 1;
}
