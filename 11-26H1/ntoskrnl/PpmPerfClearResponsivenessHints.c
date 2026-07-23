/*
 * XREFs of PpmPerfClearResponsivenessHints @ 0x1404C483C
 * Callers:
 *     PpmCheckReInit @ 0x140AEBB2C (PpmCheckReInit.c)
 * Callees:
 *     <none>
 */

__int64 PpmPerfClearResponsivenessHints()
{
  PBOOLEAN i; // rdx
  unsigned int v1; // r8d
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  for ( i = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
        i != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
        i = *(PBOOLEAN *)i )
  {
    v1 = 0;
    for ( i[540] = 0; v1 < *((_DWORD *)i + 74); *(_BYTE *)(v3 + result + 60) = 0 )
    {
      v2 = v1++;
      v3 = 1224 * v2;
      result = *((_QWORD *)i + 39);
    }
  }
  return result;
}
