/*
 * XREFs of PopCheckDisabledState @ 0x140945078
 * Callers:
 *     PopFilterCapabilities @ 0x140944D5C (PopFilterCapabilities.c)
 * Callees:
 *     <none>
 */

char __fastcall PopCheckDisabledState(int a1)
{
  struct _KTHREAD *Next; // r8
  char v2; // dl

  Next = (struct _KTHREAD *)stru_140F10070.SystemAffinityTokenListHead.Next;
  v2 = 0;
  while ( Next != (struct _KTHREAD *)&stru_140F10070.SystemAffinityTokenListHead )
  {
    if ( *((_BYTE *)&Next->Header.WaitListHead.Blink + a1) )
      return 1;
    Next = *(struct _KTHREAD **)&Next->Header.Lock;
  }
  return v2;
}
