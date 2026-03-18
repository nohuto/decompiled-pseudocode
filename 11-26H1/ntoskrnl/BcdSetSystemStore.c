/*
 * XREFs of BcdSetSystemStore @ 0x1408910B8
 * Callers:
 *     BcdSetBootBcdAsSystemStore @ 0x140D01EC4 (BcdSetBootBcdAsSystemStore.c)
 * Callees:
 *     BcdMarkAsSystemStore @ 0x140891044 (BcdMarkAsSystemStore.c)
 *     BiMarkTreatAsSystemStore @ 0x1409CFFAC (BiMarkTreatAsSystemStore.c)
 *     BiLogMessage @ 0x1409D490C (BiLogMessage.c)
 */

__int64 __fastcall BcdSetSystemStore(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // r8d
  __int64 result; // rax

  v2 = BcdMarkAsSystemStore();
  if ( v2 >= 0 )
  {
    LOBYTE(v3) = 1;
    result = BiMarkTreatAsSystemStore(a1, v3, (unsigned int)v2);
    if ( (int)result >= 0 )
      return result;
    BiLogMessage(4LL, L"BcdSetSystemStore: Failed to set mark as system store.Status: %x", (unsigned int)result);
  }
  else
  {
    BiLogMessage(4LL, L"BcdSetSystemStore: Failed to set store as system store.Status: %x", (unsigned int)v2);
  }
  return v4;
}
