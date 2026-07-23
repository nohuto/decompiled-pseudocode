/*
 * XREFs of SepConcatenatePrivileges @ 0x140934F50
 * Callers:
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x14090BCA0 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x14090C4C0 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14090CA40 (CmpCheckOpenAccessOnKeyBody.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     SeAppendPrivileges @ 0x1409338F0 (SeAppendPrivileges.c)
 *     ObCheckObjectAccess @ 0x1409349E0 (ObCheckObjectAccess.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
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
