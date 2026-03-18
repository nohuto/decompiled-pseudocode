/*
 * XREFs of ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x14016327C
 * Callers:
 *     NtUserQueryWindow @ 0x14019A8B0 (NtUserQueryWindow.c)
 *     EditionHandleHungWindow @ 0x140213430 (EditionHandleHungWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x140046B68 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z @ 0x1401632E4 (-_GhostOwnerWindowAndOwnees@@YAXPEAUtagWND@@@Z.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x140163388 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

void __fastcall ProcessHungWindow(struct tagWND *a1)
{
  struct tagWND *v2; // rbx
  const struct tagTHREADINFO **v3; // rcx
  _BYTE v4[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v4);
  v2 = ShouldProcessHungWindow(a1);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = (const struct tagTHREADINFO **)*((_QWORD *)v2 + 15);
      if ( !v3 || !IsHungWindow(v3) )
        break;
      v2 = (struct tagWND *)*((_QWORD *)v2 + 15);
    }
    _GhostOwnerWindowAndOwnees(v2);
  }
  if ( v4[0] )
    --*(_DWORD *)(v5 + 28);
}
