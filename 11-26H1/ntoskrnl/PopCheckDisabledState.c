/*
 * XREFs of PopCheckDisabledState @ 0x1409C09E8
 * Callers:
 *     PopFilterCapabilities @ 0x1409C06CC (PopFilterCapabilities.c)
 * Callees:
 *     <none>
 */

char __fastcall PopCheckDisabledState(int a1)
{
  struct _KTHREAD *v1; // r8
  char v2; // dl

  v1 = *(struct _KTHREAD **)&PpmIdlePolicyLock.SystemCallNumber;
  v2 = 0;
  while ( v1 != (struct _KTHREAD *)&PpmIdlePolicyLock.SystemCallNumber )
  {
    if ( *((_BYTE *)&v1->Header.WaitListHead.Blink + a1) )
      return 1;
    v1 = *(struct _KTHREAD **)&v1->Header.Lock;
  }
  return v2;
}
