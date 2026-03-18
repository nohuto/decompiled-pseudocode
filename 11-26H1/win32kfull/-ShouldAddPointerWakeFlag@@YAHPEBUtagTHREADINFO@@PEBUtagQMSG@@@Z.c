/*
 * XREFs of ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1401AEF90
 * Callers:
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1400976DC (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ShouldAddPointerWakeFlag(const struct tagTHREADINFO *a1, const struct tagQMSG *a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  if ( !a2 || !(unsigned int)IsGenuineMouseInput((char *)a2 + 124) )
    return 0LL;
  if ( !*((_QWORD *)a1 + 80)
    && ((*(_BYTE *)(*((_QWORD *)a1 + 57) + 808LL) & 4) != 0 || (*((_DWORD *)a1 + 340) & 0x6000000) != 0) )
  {
    v5 = *((_DWORD *)a2 + 25);
    if ( (v5 & 0x20) == 0 && (v5 & 0x8000000) == 0 )
      return 1;
  }
  return v2;
}
