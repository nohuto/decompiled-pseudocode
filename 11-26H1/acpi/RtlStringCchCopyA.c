/*
 * XREFs of RtlStringCchCopyA @ 0x1400019D0
 * Callers:
 *     ParseSuperName @ 0x140001A40 (ParseSuperName.c)
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 *     ACPIDispatchAddDevice @ 0x14005E070 (ACPIDispatchAddDevice.c)
 *     Debugger @ 0x14006F69C (Debugger.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  size_t v3; // r9
  signed __int64 v4; // r8
  char v5; // al
  NTSTRSAFE_PSTR v6; // rax
  NTSTATUS result; // eax

  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v3 = 2147483646 - cchDest;
    v4 = pszSrc - pszDest;
    do
    {
      if ( !(v3 + cchDest) )
        break;
      v5 = pszDest[v4];
      if ( !v5 )
        break;
      *pszDest++ = v5;
      --cchDest;
    }
    while ( cchDest );
    v6 = pszDest - 1;
    if ( cchDest )
      v6 = pszDest;
    *v6 = 0;
    result = -2147483643;
    if ( cchDest )
      return 0;
  }
  return result;
}
