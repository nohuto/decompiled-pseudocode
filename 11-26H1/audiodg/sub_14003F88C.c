/*
 * XREFs of sub_14003F88C @ 0x14003F88C
 * Callers:
 *     sub_140046D40 @ 0x140046D40 (sub_140046D40.c)
 *     sub_1400487A8 @ 0x1400487A8 (sub_1400487A8.c)
 *     sub_14005E604 @ 0x14005E604 (sub_14005E604.c)
 *     sub_14006B498 @ 0x14006B498 (sub_14006B498.c)
 *     sub_140075B80 @ 0x140075B80 (sub_140075B80.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall sub_14003F88C(HKEY *a1)
{
  HKEY v1; // rcx
  LSTATUS result; // eax

  v1 = *a1;
  if ( v1 )
    return RegCloseKey(v1);
  return result;
}
