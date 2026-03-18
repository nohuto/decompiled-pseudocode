/*
 * XREFs of ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1402DEF14
 * Callers:
 *     NtUserGetWindowTrackInfoAsync @ 0x140299A90 (NtUserGetWindowTrackInfoAsync.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

bool __fastcall BeginGetWidnowTrackInfoAsync(struct tagTHREADINFO **a1)
{
  return (unsigned int)PostEventMessageEx(
                         a1[2],
                         *((struct tagQ **)a1[2] + 59),
                         9u,
                         (LARGE_INTEGER *)a1,
                         0x342u,
                         (LARGE_INTEGER)1LL,
                         0LL,
                         0LL) != 0;
}
