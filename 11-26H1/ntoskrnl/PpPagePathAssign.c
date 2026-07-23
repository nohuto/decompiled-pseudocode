/*
 * XREFs of PpPagePathAssign @ 0x1407A6AA0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     PiPagePathSetState @ 0x1407A6950 (PiPagePathSetState.c)
 */

__int64 __fastcall PpPagePathAssign(struct _FILE_OBJECT *a1)
{
  return PiPagePathSetState(a1, 1);
}
