/*
 * XREFs of SepConcatenatePrivileges @ 0x140904FC0
 * Callers:
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     SeAppendPrivileges @ 0x140903960 (SeAppendPrivileges.c)
 *     ObCheckObjectAccess @ 0x140904A50 (ObCheckObjectAccess.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x140930170 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140930990 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140930F10 (CmpCheckOpenAccessOnKeyBody.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall SepConcatenatePrivileges(_DWORD *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v5; // r9d
  __int64 result; // rax

  if ( a1 )
  {
    if ( *a1 )
      v5 = 12 * *a1 + 8;
    else
      v5 = 8;
  }
  else
  {
    v5 = 0;
  }
  memmove((char *)a1 + v5, a3 + 2, 12 * *a3);
  result = *a3;
  *a1 += result;
  return result;
}
