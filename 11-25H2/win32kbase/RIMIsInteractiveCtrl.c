/*
 * XREFs of RIMIsInteractiveCtrl @ 0x140156990
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x14002A1AC (RIMIDECreateHIDDesc.c)
 *     RIMAllocateHidDesc @ 0x1401DE298 (RIMAllocateHidDesc.c)
 * Callees:
 *     <none>
 */

bool __fastcall RIMIsInteractiveCtrl(_WORD *a1)
{
  bool result; // al

  result = 0;
  if ( a1[1] == 1 )
    return *a1 == 14;
  return result;
}
