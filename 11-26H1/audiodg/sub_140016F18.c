/*
 * XREFs of sub_140016F18 @ 0x140016F18
 * Callers:
 *     sub_140016D5C @ 0x140016D5C (sub_140016D5C.c)
 *     sub_140016F0C @ 0x140016F0C (sub_140016F0C.c)
 *     sub_140018504 @ 0x140018504 (sub_140018504.c)
 *     sub_140019E50 @ 0x140019E50 (sub_140019E50.c)
 *     sub_14001D308 @ 0x14001D308 (sub_14001D308.c)
 *     sub_1400455D8 @ 0x1400455D8 (sub_1400455D8.c)
 *     sub_140067874 @ 0x140067874 (sub_140067874.c)
 *     sub_14006F770 @ 0x14006F770 (sub_14006F770.c)
 *     sub_1400800C4 @ 0x1400800C4 (sub_1400800C4.c)
 *     sub_1400801B0 @ 0x1400801B0 (sub_1400801B0.c)
 *     sub_1400806A0 @ 0x1400806A0 (sub_1400806A0.c)
 *     sub_1400807B0 @ 0x1400807B0 (sub_1400807B0.c)
 *     sub_1400873B0 @ 0x1400873B0 (sub_1400873B0.c)
 *     sub_140087960 @ 0x140087960 (sub_140087960.c)
 *     sub_14008D8B0 @ 0x14008D8B0 (sub_14008D8B0.c)
 *     sub_140090808 @ 0x140090808 (sub_140090808.c)
 *     sub_1400909A0 @ 0x1400909A0 (sub_1400909A0.c)
 *     sub_1400ADBB0 @ 0x1400ADBB0 (sub_1400ADBB0.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall sub_140016F18(void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
  {
    if ( v1 != (void *)-1LL )
      return CloseHandle(v1);
  }
  return result;
}
