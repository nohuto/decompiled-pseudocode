/*
 * XREFs of EditionPostAccessibilitySettingChangedEvent @ 0x14022BE40
 * Callers:
 *     <none>
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall EditionPostAccessibilitySettingChangedEvent(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct tagQ **v3; // rcx

  v2 = (unsigned int)a1;
  v3 = *(struct tagQ ***)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19144) + 40LL) + 56LL)
                        + 16LL);
  return PostEventMessageEx((struct tagTHREADINFO *)v3, v3[59], 0xDu, 0LL, 0, (LARGE_INTEGER)11LL, v2, 0LL);
}
