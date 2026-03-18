/*
 * XREFs of ?GetDestination@CHILDHOTKEY@@QEBA?AUDestination@1@XZ @ 0x14025DDE0
 * Callers:
 *     ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140279114 (-xxxReportHotKey@@YA-AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@.c)
 *     ?xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z @ 0x1402A7B44 (-xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 */

_QWORD *__fastcall CHILDHOTKEY::GetDestination(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0LL;
  if ( !v2
    || (v3 = HMValidateHandleNoSecure(v2, 1)) != 0
    && (v5 = *(_QWORD *)(v3 + 40), *(char *)(v5 + 19) >= 0)
    && *(char *)(v5 + 20) >= 0 )
  {
    *a2 = 1LL;
    a2[1] = v3;
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
