/*
 * XREFs of RIMIDEFreeInjectedInfo @ 0x14013553C
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x14002A1AC (RIMIDECreateHIDDesc.c)
 *     RIMFreeSpecificDevWorker @ 0x1401380A4 (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

void __fastcall RIMIDEFreeInjectedInfo(__int64 a1)
{
  __int64 v2; // rcx
  char *v3; // rcx

  v2 = *(_QWORD *)(a1 + 368);
  if ( v2 )
  {
    v3 = *(char **)(v2 + 72);
    if ( v3 )
      GreDeleteFastMutex(v3);
    GreDeleteFastMutex(*(char **)(a1 + 368));
    *(_QWORD *)(a1 + 368) = 0LL;
  }
}
