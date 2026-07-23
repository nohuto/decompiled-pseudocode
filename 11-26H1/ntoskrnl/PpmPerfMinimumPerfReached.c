/*
 * XREFs of PpmPerfMinimumPerfReached @ 0x1404A0508
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1404A02A0 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     <none>
 */

char PpmPerfMinimumPerfReached()
{
  PBOOLEAN v0; // rcx
  char i; // r8
  unsigned int v2; // eax
  __int64 v3; // r9
  _DWORD *v4; // rdx

  v0 = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
  for ( i = 1; v0 != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2); v0 = *(PBOOLEAN *)v0 )
  {
    v2 = *((_DWORD *)v0 + 74);
    if ( v2 )
    {
      v3 = v2;
      v4 = (_DWORD *)(*((_QWORD *)v0 + 39) + 56LL);
      do
      {
        if ( *(v4 - 10) != 2 && *v4 > *((_DWORD *)v0 + 224) )
          i = 0;
        v4 += 306;
        --v3;
      }
      while ( v3 );
    }
  }
  return i;
}
