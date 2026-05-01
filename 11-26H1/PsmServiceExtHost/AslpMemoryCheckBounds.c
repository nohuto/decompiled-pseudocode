/*
 * XREFs of AslpMemoryCheckBounds @ 0x18009E88C
 * Callers:
 *     AslpFileGetImageResourceDirectoryRoot @ 0x18009C63C (AslpFileGetImageResourceDirectoryRoot.c)
 *     AslpFileGetVersionBlockFromResourceRoot @ 0x18009D1B0 (AslpFileGetVersionBlockFromResourceRoot.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x18009D410 (AslpFileGetVersionBlockImageOnly.c)
 * Callees:
 *     <none>
 */

bool __fastcall AslpMemoryCheckBounds(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rax

  v4 = a1 + a2;
  v5 = a3 + a4;
  return a1 >= a3 && a1 <= v4 && a1 <= v5 && v4 >= a3 && v4 <= v5 && a3 <= v5 && a2 <= a4;
}
