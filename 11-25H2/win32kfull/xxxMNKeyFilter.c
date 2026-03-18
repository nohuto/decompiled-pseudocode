/*
 * XREFs of xxxMNKeyFilter @ 0x1402EC7F8
 * Callers:
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 * Callees:
 *     xxxMNCloseHierarchy @ 0x14003CF70 (xxxMNCloseHierarchy.c)
 *     xxxMNCancel @ 0x14003D33C (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x14003DFC0 (xxxMNSelectItem.c)
 *     xxxMessageBeep @ 0x1401107D4 (xxxMessageBeep.c)
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     xxxMNStartMenu @ 0x14015D464 (xxxMNStartMenu.c)
 *     xxxMNOpenHierarchy @ 0x14016D6F0 (xxxMNOpenHierarchy.c)
 *     MNPositionSysMenu @ 0x140209594 (MNPositionSysMenu.c)
 *     xxxMNChar @ 0x1402BF514 (xxxMNChar.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1402C07A4 (xxxMNSwitchToAlternateMenu.c)
 */

void __fastcall xxxMNKeyFilter(unsigned int ***a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  unsigned int v5; // esi

  v4 = *(_DWORD *)(a2 + 8);
  v5 = a3;
  if ( (v4 & 8) == 0 )
  {
    if ( (v4 & 4) == 0 )
    {
      if ( !xxxMNStartMenu(a1, a2, 1) )
        return;
      *(_DWORD *)(a2 + 8) |= 4u;
    }
    if ( v5 )
    {
      if ( v5 == 32
        || v5 == 45
        && (!*((_QWORD *)**a1 + 1) || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)**a1 + 1) + 40LL) + 31LL) & 0xC0) == 0x40) )
      {
        if ( *((_QWORD *)**a1 + 1) && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)**a1 + 1) + 40LL) + 30LL) & 8) == 0 )
        {
          xxxMessageBeep(0LL, a2);
          goto LABEL_19;
        }
        xxxMNCloseHierarchy((__int64)**a1, a2, a3, a4);
        if ( (***a1 & 4) == 0 && *((_QWORD *)**a1 + 6) )
          xxxMNSwitchToAlternateMenu((__int64 **)a1, a2);
        if ( (***a1 & 4) == 0 )
          goto LABEL_19;
        MNPositionSysMenu(*((_QWORD *)**a1 + 2), *((_QWORD **)**a1 + 5));
        xxxMNSelectItem((__int64 **)a1, a2, 0);
        xxxMNOpenHierarchy((__int64 **)a1, a2);
        ***a1 &= ~0x80u;
      }
      else
      {
        xxxMNChar((__int64 **)a1, a2, v5);
        if ( (**a1)[20] == -1 )
        {
LABEL_19:
          *(_DWORD *)(a2 + 8) &= ~0x100u;
          if ( (***a1 & 0x80000) == 0 )
            xxxMNCancel(a2, 0, 0LL, 0LL);
          return;
        }
      }
    }
    else
    {
      xxxMNSelectItem((__int64 **)a1, a2, 0);
    }
    if ( (v4 & 4) == 0 && (*(_DWORD *)(a2 + 8) & 4) != 0 )
      xxxMNLoop((__int64 **)a1, a2, 0LL, 0);
  }
}
