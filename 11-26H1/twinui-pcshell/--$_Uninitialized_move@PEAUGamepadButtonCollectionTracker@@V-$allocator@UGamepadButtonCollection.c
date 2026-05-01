/*
 * XREFs of ??$_Uninitialized_move@PEAUGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAPEAUGamepadButtonCollectionTracker@@QEAU1@0PEAU1@AEAV?$allocator@UGamepadButtonCollectionTracker@@@0@@Z @ 0x18033EA6C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUGamepadButtonCollectionTracker@@@?$vector@UGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@AEAAPEAUGamepadButtonCollectionTracker@@QEAU2@AEBU2@@Z @ 0x18033D71C (--$_Emplace_reallocate@AEBUGamepadButtonCollectionTracker@@@-$vector@UGamepadButtonCollectionTra.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAXPEAUGamepadButtonCollectionTracker@@QEAU1@AEAV?$allocator@UGamepadButtonCollectionTracker@@@0@@Z @ 0x18033D35C (--$_Destroy_range@V-$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAXPEAUGamepadButton.c)
 */

GamepadButtonCollectionTracker *__fastcall std::_Uninitialized_move<GamepadButtonCollectionTracker *>(
        _QWORD *a1,
        _QWORD *a2,
        GamepadButtonCollectionTracker *a3)
{
  _QWORD *v4; // r8
  char *v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 5;
    v5 = (char *)(a3 - (GamepadButtonCollectionTracker *)a1);
    do
    {
      *(_OWORD *)a3 = *(_OWORD *)(v4 - 5);
      *((_OWORD *)a3 + 1) = *(_OWORD *)(v4 - 3);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = 0LL;
      a3 = (GamepadButtonCollectionTracker *)((char *)a3 + 64);
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = *(v4 - 1);
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = *v4;
      *(v4 - 1) = 0LL;
      *v4 = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 8) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 16) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 8) = v4[1];
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 16) = v4[2];
      v4[1] = 0LL;
      v4[2] = 0LL;
      v4 += 8;
    }
    while ( v4 - 5 != a2 );
  }
  std::_Destroy_range<std::allocator<GamepadButtonCollectionTracker>>(a3, a3);
  return a3;
}
