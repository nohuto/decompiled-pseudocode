/*
 * XREFs of ?GetDestination@tagHOTKEY@@QEBA?AUDestination@1@XZ @ 0x1402790A8
 * Callers:
 *     ?xxxReportHotKey@@YA?AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140279114 (-xxxReportHotKey@@YA-AW4tagHotKeyCallBackResult@@PEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 */

_QWORD *__fastcall tagHOTKEY::GetDestination(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v4 = HMValidateHandleNoSecure(v2, 1);
    if ( v4 && (v5 = *(_QWORD *)(v4 + 40), *(char *)(v5 + 19) >= 0) && *(char *)(v5 + 20) >= 0 )
    {
      *a2 = 2LL;
      a2[1] = v4;
    }
    else
    {
      *a2 = 0LL;
      a2[1] = 0LL;
    }
  }
  else
  {
    *a2 = 1LL;
    a2[1] = 0LL;
  }
  return a2;
}
