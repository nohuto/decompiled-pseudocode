/*
 * XREFs of RIMIDEFreeInjectedInfo @ 0x1401323A0
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x140131EEC (RIMFreeSpecificDevWorker.c)
 *     RIMIDECreateHIDDesc @ 0x14020749C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall RIMIDEFreeInjectedInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  char *v6; // rcx

  v5 = *(_QWORD *)(a1 + 368);
  if ( v5 )
  {
    v6 = *(char **)(v5 + 72);
    if ( v6 )
      GreDeleteFastMutex(v6, a2, a3, a4);
    GreDeleteFastMutex(*(char **)(a1 + 368), a2, a3, a4);
    *(_QWORD *)(a1 + 368) = 0LL;
  }
}
