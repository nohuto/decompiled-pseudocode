/*
 * XREFs of CmpIsRegistryLockContended @ 0x1404CE9A4
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x140944A98 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     <none>
 */

char CmpIsRegistryLockContended()
{
  __int64 v0; // rdx
  char v1; // r8

  v0 = 0LL;
  v1 = 1;
  while ( (unsigned int)v0 < 0x20 )
  {
    if ( (**((_BYTE **)&CmpRegistryLock->Header.Lock + v0) & 2) != 0 )
      return v1;
    v0 = (unsigned int)(v0 + 1);
  }
  return 0;
}
