/*
 * XREFs of LdrpCompareRedirectedFunction @ 0x18007BDAC
 * Callers:
 *     LdrpCheckRedirection @ 0x18007AC78 (LdrpCheckRedirection.c)
 *     LdrpAddRedirectedFunction @ 0x18015DDB0 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18007B0A0 (RtlCompareUnicodeStrings.c)
 */

LONG __fastcall LdrpCompareRedirectedFunction(__int64 a1, __int64 a2)
{
  LONG result; // eax
  char *v4; // rax
  __int64 v5; // rdx
  char v6; // r8

  result = *(_DWORD *)(a2 + 24) - *(_DWORD *)a1;
  if ( !result )
  {
    result = *(_DWORD *)(a2 + 28) - *(_DWORD *)(a1 + 4);
    if ( !result )
    {
      v4 = *(char **)(a2 + 32);
      v5 = *(_QWORD *)(a1 + 8) - (_QWORD)v4;
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 != v4[v5] )
          break;
        ++v4;
        if ( !v6 )
        {
          result = 0;
          goto LABEL_7;
        }
      }
      result = (unsigned __int8)*v4 < (unsigned __int8)v4[v5] ? -1 : 1;
LABEL_7:
      if ( !result )
        return RtlCompareUnicodeStrings(
                 *(PCWCH *)(a2 + 48),
                 (unsigned __int64)*(unsigned __int16 *)(a2 + 40) >> 1,
                 *(PCWCH *)(a1 + 24),
                 (unsigned __int64)*(unsigned __int16 *)(a1 + 16) >> 1,
                 1u);
    }
  }
  return result;
}
