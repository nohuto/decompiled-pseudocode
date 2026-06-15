/*
 * XREFs of sub_140072B9C @ 0x140072B9C
 * Callers:
 *     sub_140072B90 @ 0x140072B90 (sub_140072B90.c)
 *     sub_140072BD0 @ 0x140072BD0 (sub_140072BD0.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_140072B9C(HMODULE *a1)
{
  HMODULE v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return FreeLibrary(v1);
  return result;
}
