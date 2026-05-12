/*
 * XREFs of sub_14018377C @ 0x14018377C
 * Callers:
 *     sub_14017B158 @ 0x14017B158 (sub_14017B158.c)
 * Callees:
 *     sub_1400AF078 @ 0x1400AF078 (sub_1400AF078.c)
 *     sub_140183B04 @ 0x140183B04 (sub_140183B04.c)
 */

char sub_14018377C()
{
  int v0; // eax

  if ( dword_1401684A8 )
    sub_1400AF078();
  if ( (int)sub_140183B04(&dword_140168178) >= 0 )
    byte_140168DD2 = 1;
  if ( (int)sub_140183B04(&dword_1401681B0) >= 0 )
    byte_140168DD1 = 1;
  v0 = sub_140183B04(&dword_1401681E8);
  if ( v0 >= 0 )
    byte_140168DD0 = 1;
  if ( byte_140168DD2 )
  {
    KeInitializeTimer(&stru_140168F60);
    KeInitializeDpc(&stru_140168EA0, (PKDEFERRED_ROUTINE)sub_140041EA0, 0LL);
    KeSetCoalescableTimer(&stru_140168F60, (LARGE_INTEGER)-6000000000LL, 0, 0xEA60u, &stru_140168EA0);
    KeInitializeTimer(&stru_140168E60);
    KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)sub_140041EA0, 0LL);
    KeSetCoalescableTimer(&stru_140168E60, (LARGE_INTEGER)-138000000000LL, 0, 0x493E0u, &Dpc);
    if ( dword_1401684A8 || dword_140168478 )
    {
      KeInitializeTimer(&stru_140168EE0);
      KeInitializeDpc(&stru_1401690A0, (PKDEFERRED_ROUTINE)sub_140041EA0, 0LL);
      KeSetCoalescableTimer(&stru_140168EE0, (LARGE_INTEGER)-6000000000LL, 0, 0xEA60u, &stru_1401690A0);
    }
    if ( dword_140168498 )
    {
      KeInitializeTimer(&stru_140169020);
      KeInitializeDpc(&stru_140169060, (PKDEFERRED_ROUTINE)sub_140041EA0, 0LL);
      KeSetCoalescableTimer(&stru_140169020, (LARGE_INTEGER)-6000000000LL, 0, 0xEA60u, &stru_140169060);
    }
    KeInitializeTimer(&Timer);
    KeInitializeDpc(&stru_140168FE0, (PKDEFERRED_ROUTINE)sub_140041EA0, 0LL);
    LOBYTE(v0) = KeSetCoalescableTimer(&Timer, (LARGE_INTEGER)-6000000000LL, 0, 0xEA60u, &stru_140168FE0);
  }
  return v0;
}
