/*
 * XREFs of RtlHandleRdclNoOverride @ 0x140C05220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlHandleRdclNoOverride(__int64 a1, _DWORD *a2)
{
  char result; // al
  int v4; // edx

  result = *(_BYTE *)(a1 + 4);
  if ( result == 2 )
  {
    if ( *(_DWORD *)(a1 + 8) == 6 )
    {
      v4 = *(_DWORD *)(a1 + 12);
      if ( v4 == 28
        || (result = v4 - 38, (unsigned int)(v4 - 38) <= 1)
        || (result = v4 - 53, (unsigned int)(v4 - 53) <= 1) )
      {
LABEL_11:
        *a2 = 1;
      }
    }
  }
  else
  {
    if ( result != 3 )
    {
      *a2 = 1;
      return result;
    }
    if ( *(_DWORD *)(a1 + 8) == 6 && *(_DWORD *)(a1 + 12) == 13 )
      goto LABEL_11;
  }
  return result;
}
