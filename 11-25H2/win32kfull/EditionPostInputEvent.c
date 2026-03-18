/*
 * XREFs of EditionPostInputEvent @ 0x140128AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall EditionPostInputEvent(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  struct tagTHREADINFO **v9; // rax

  if ( a1 == 30 )
    return 0LL;
  v9 = (struct tagTHREADINFO **)ValidateHwnd(a2);
  if ( !v9 )
    return 0LL;
  else
    return PostEventMessageEx(v9[2], *((struct tagQ **)v9[2] + 59), a1, (struct tagWND *)v9, a4, a5, a6, 0LL);
}
