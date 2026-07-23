/*
 * XREFs of PpmPerfForceDomainStates @ 0x1404DD4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 PpmPerfForceDomainStates()
{
  PBOOLEAN i; // rdx
  __int64 v1; // rax
  unsigned int v2; // r8d
  __int64 v3; // rcx
  __int64 result; // rax

  for ( i = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
        i != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
        i = *(PBOOLEAN *)i )
  {
    if ( i[1445] )
    {
      v2 = 0;
      for ( i[1444] = 1; v2 < *((_DWORD *)i + 74); *(_BYTE *)(v3 + result + 168) = 1 )
      {
        v1 = v2++;
        v3 = 1224 * v1;
        result = *((_QWORD *)i + 39);
      }
    }
  }
  return result;
}
