/*
 * XREFs of ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x140032694
 * Callers:
 *     GetNewMonitor @ 0x14004B044 (GetNewMonitor.c)
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 */

char __fastcall HasMaximizedState(const struct tagWND *a1)
{
  bool v2; // al
  char v3; // dl
  __int64 v4; // rcx

  v2 = IsArranged(a1);
  v3 = 0;
  if ( v2 )
    return 1;
  v4 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v4 + 31) & 1) != 0 || (*(_BYTE *)(v4 + 20) & 0x40) != 0 )
    return 1;
  return v3;
}
