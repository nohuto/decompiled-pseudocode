/*
 * XREFs of RootHub_IsPortU3TransitionPending @ 0x14002CC14
 * Callers:
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x14002C8AC (RootHub_WaitForPendingU3TransitionCompletion.c)
 * Callees:
 *     <none>
 */

char __fastcall RootHub_IsPortU3TransitionPending(__int64 a1, int a2)
{
  int v2; // r8d
  char result; // al

  v2 = a2 & 0x1E0;
  if ( v2 == 96 )
    return 0;
  if ( (a2 & 0x200) == 0 )
    return 0;
  result = 1;
  if ( (a2 & 1) == 0
    || (a2 & 2) == 0
    || (a2 & 0x20000) != 0
    || v2 == 128
    || v2 == 480
    || v2 == 192
    || v2 == 320
    || v2 == 288
    || v2 == 352
    || (a2 & 0x10) != 0
    || *(_BYTE *)(a1 + 18) )
  {
    return 0;
  }
  return result;
}
