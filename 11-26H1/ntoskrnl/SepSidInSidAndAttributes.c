/*
 * XREFs of SepSidInSidAndAttributes @ 0x140A621C8
 * Callers:
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x140A62010 (SepRemoveDisabledGroupsAndPrivileges.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

char __fastcall SepSidInSidAndAttributes(unsigned __int8 **a1, unsigned int a2, __int64 a3, _BYTE *a4)
{
  unsigned __int8 **v6; // rbx
  unsigned int v7; // edi
  unsigned int v8; // ebp
  unsigned __int8 *v9; // rdx

  v6 = a1;
  if ( a1 )
  {
    v7 = 0;
    v8 = 4 * (unsigned __int8)a4[1] + 8;
    while ( v7 < a2 )
    {
      v9 = *v6;
      if ( *a4 == **v6 && v8 == 4 * v9[1] + 8 && !memcmp(a4, v9, v8) )
        return 1;
      v6 += 2;
      ++v7;
    }
  }
  return 0;
}
