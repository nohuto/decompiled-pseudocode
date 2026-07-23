/*
 * XREFs of ObQueryNameInfo @ 0x140A666F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ObQueryNameInfo(__int64 a1)
{
  __int64 v1; // rax
  char v2; // cl

  v1 = a1 - 48;
  v2 = *(_BYTE *)(a1 - 22);
  if ( (v2 & 2) != 0 )
    return v1 - ObpInfoMaskToOffset[v2 & 3];
  else
    return 0LL;
}
