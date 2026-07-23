/*
 * XREFs of IoSetGenericIrpExtension @ 0x140491AC0
 * Callers:
 *     StRtlIoStorInfoSetNvCachePriority @ 0x14072146C (StRtlIoStorInfoSetNvCachePriority.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall IoSetGenericIrpExtension(__int64 a1, const void *a2, unsigned __int16 a3, char a4)
{
  char **v6; // rcx
  char *v7; // rax
  char *v8; // rax
  char v9; // dl

  if ( a3 > 4u )
    return 3221225485LL;
  v6 = (char **)(a1 + 200);
  if ( !a4 )
  {
    v7 = *v6;
    if ( *(char *)(a1 + 71) < 0 || v7 && (v7[2] & 4) != 0 )
      return 3221225505LL;
  }
  v8 = *v6;
  v9 = *(_BYTE *)(a1 + 71);
  if ( *v6 )
  {
    if ( v9 >= 0 )
    {
      *((_WORD *)v8 + 1) |= 4u;
LABEL_11:
      memmove(v8 + 4, a2, a3);
      return 0LL;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 71) = v9 | 0x80;
  }
  v8 = (char *)v6 - 4;
  if ( v6 != (char **)4 )
    goto LABEL_11;
  return 3221225626LL;
}
