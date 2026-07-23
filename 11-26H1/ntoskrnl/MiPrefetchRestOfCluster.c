/*
 * XREFs of MiPrefetchRestOfCluster @ 0x1404C5E4C
 * Callers:
 *     MiWaitForInPageComplete @ 0x14038FFA0 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x140373760 (MiGetEffectivePagePriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x1403A2470 (MiPrefetchVirtualMemory.c)
 */

void __fastcall MiPrefetchRestOfCluster(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // r9
  __int64 v3; // r9
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  char EffectivePagePriorityThread; // al
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r10
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2[3];
  if ( v2 < a2[2] )
  {
    v3 = 2 * v2;
    v4 = a2[1];
    v5 = *(_QWORD *)(v4 + 8 * v3);
    v6 = (*(unsigned int *)(a1 + 184) + *(_QWORD *)(a1 + 232) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    if ( v6 >= v5 )
    {
      v7 = *(_QWORD *)(v4 + 8 * v3 + 8);
      if ( v6 < v7 + v5 )
      {
        v12[0] = v6;
        v12[1] = v7 + v5 - v6;
        EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
        v10 = 1LL;
        if ( v11 < 0xFFFF800000000000uLL )
          v10 = v9;
        MiPrefetchVirtualMemory(
          1uLL,
          (__int64)v12,
          v10,
          EffectivePagePriorityThread & 7 | (8 * (EffectivePagePriorityThread & 7 | 0x8000)));
      }
    }
  }
}
