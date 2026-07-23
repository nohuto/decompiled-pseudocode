/*
 * XREFs of KiCountNodeZeroSetBitsGroupAffinity @ 0x140CCFB30
 * Callers:
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 * Callees:
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x14046A570 (KeEnumerateNextSchedulerSubNodeInNode.c)
 */

__int64 KiCountNodeZeroSetBitsGroupAffinity()
{
  unsigned int v0; // ebx
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 i; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  v2[1] = 0LL;
  v2[0] = KeNodeBlock[0];
  for ( i = 0LL;
        !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((unsigned int *)v2, &i);
        v0 += __popcnt(*(_QWORD *)(i + 128)) )
  {
    ;
  }
  return v0;
}
