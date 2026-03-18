/*
 * XREFs of ?WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z @ 0x14011F8C4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x14023EDC0 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 * Callees:
 *     SetWakeBit @ 0x1400338D0 (SetWakeBit.c)
 *     CalcWakeMask @ 0x1401206B0 (CalcWakeMask.c)
 *     ??BINTERLOCKEDINT@@QEBAHXZ @ 0x1402756EC (--BINTERLOCKEDINT@@QEBAHXZ.c)
 */

void __fastcall WakeSomeoneAfterUnlockingOrUndeferring(struct tagQMSG *a1)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v3; // rdx

  v1 = *((_QWORD *)a1 + 13);
  if ( v1 )
  {
    CalcWakeMask(*((unsigned int *)a1 + 6), *((unsigned int *)a1 + 6), 0LL);
    v2 = INTERLOCKEDINT::operator int(*(_QWORD *)(v1 + 488) + 4LL);
    if ( ((unsigned int)v3 & v2) != (_DWORD)v3 )
      SetWakeBit(v1, v3);
  }
}
