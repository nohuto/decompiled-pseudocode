/*
 * XREFs of PpmPerfApplyLatencyHints @ 0x1404AF3B0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfApplyLatencyHint @ 0x140527A28 (PpmPerfApplyLatencyHint.c)
 */

__int64 PpmPerfApplyLatencyHints()
{
  PBOOLEAN i; // rbx
  __int64 result; // rax
  unsigned int j; // edi

  if ( PpmCheckLatencyBoostActive )
  {
    for ( i = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
          i != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
          i = *(PBOOLEAN *)i )
    {
      for ( j = 0; j < *((_DWORD *)i + 74); ++j )
      {
        result = *((_QWORD *)i + 39);
        if ( *(_QWORD *)(1224LL * j + result) )
          result = PpmPerfApplyLatencyHint();
      }
    }
  }
  return result;
}
