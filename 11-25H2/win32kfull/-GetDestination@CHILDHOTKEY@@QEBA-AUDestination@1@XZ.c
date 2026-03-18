/*
 * XREFs of ?GetDestination@CHILDHOTKEY@@QEBA?AUDestination@1@XZ @ 0x1402258D0
 * Callers:
 *     ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14028B1B8 (-xxxReportHotKey@@YA-AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@.c)
 *     ?xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z @ 0x14028B784 (-xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall CHILDHOTKEY::GetDestination(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0LL;
  v4 = a2;
  if ( !v2
    || (LOBYTE(a2) = 1, (v3 = HMValidateHandleNoSecure(v2, a2)) != 0)
    && (v5 = *(_QWORD *)(v3 + 40), *(char *)(v5 + 19) >= 0)
    && *(char *)(v5 + 20) >= 0 )
  {
    *(_QWORD *)v4 = 1LL;
    *(_QWORD *)(v4 + 8) = v3;
  }
  else
  {
    *(_DWORD *)v4 = 0;
    *(_DWORD *)(v4 + 4) = 0;
    *(_QWORD *)(v4 + 8) = 0LL;
  }
  return v4;
}
