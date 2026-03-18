/*
 * XREFs of ?WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z @ 0x140055200
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x140158B00 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 * Callees:
 *     CalcWakeMask @ 0x140055540 (CalcWakeMask.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 */

void __fastcall WakeSomeoneAfterUnlockingOrUndeferring(struct tagQMSG *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  int v3; // r11d

  v1 = *((_QWORD *)a1 + 13);
  if ( v1 )
  {
    v2 = (*((_DWORD *)a1 + 24) != 0 ? -73 : -8265) & (unsigned int)CalcWakeMask(
                                                                     *((unsigned int *)a1 + 6),
                                                                     *((unsigned int *)a1 + 6),
                                                                     0LL);
    if ( v3 != 786 )
      LODWORD(v2) = v2 & 0xFFFFFF7F;
    if ( ((unsigned int)v2 & *(_DWORD *)(*(_QWORD *)(v1 + 480) + 4LL)) != (_DWORD)v2 )
      SetWakeBit(v1, v2);
  }
}
