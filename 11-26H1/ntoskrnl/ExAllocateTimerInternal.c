/*
 * XREFs of ExAllocateTimerInternal @ 0x1406D2BE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocateTimerInternal2 @ 0x14044E590 (ExAllocateTimerInternal2.c)
 */

__int64 __fastcall ExAllocateTimerInternal(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 *v4; // r8
  int v6; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 2) != 0 )
  {
    v6 = 1;
    v4 = (unsigned __int16 *)&v6;
  }
  else
  {
    v4 = 0LL;
  }
  return ExAllocateTimerInternal2(a1, a2, v4, a3);
}
