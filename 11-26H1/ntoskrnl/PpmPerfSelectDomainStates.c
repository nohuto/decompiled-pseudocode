/*
 * XREFs of PpmPerfSelectDomainStates @ 0x140484A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void PpmPerfSelectDomainStates()
{
  PBOOLEAN i; // rcx
  unsigned int v1; // eax
  unsigned int v2; // r8d
  char v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r10
  unsigned int v6; // eax
  char v7; // r11

  for ( i = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
        i != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
        i = *(PBOOLEAN *)i )
  {
    v6 = *((_DWORD *)i + 74);
    v7 = 0;
    v3 = 0;
    v2 = 1;
    if ( v6 )
    {
      v5 = v6;
      v4 = *((_QWORD *)i + 39) + 56LL;
      do
      {
        if ( *(_DWORD *)(v4 - 40) != 2 )
        {
          v1 = *(_DWORD *)v4;
          if ( *(_DWORD *)v4 <= v2 )
            v1 = v2;
          v2 = v1;
          if ( *(_BYTE *)(v4 + 4) )
            v3 = 1;
        }
        v4 += 1224LL;
        --v5;
      }
      while ( v5 );
    }
    if ( *((_DWORD *)i + 133) != v2 || i[540] != v3 )
      v7 = 1;
    *((_DWORD *)i + 133) = v2;
    i[540] = v3;
    if ( v7 )
      i[1445] = 1;
  }
}
