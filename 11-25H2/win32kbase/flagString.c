/*
 * XREFs of flagString @ 0x1400D0330
 * Callers:
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x140206CB4 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 * Callees:
 *     ?RtlStringCchCatA@@YAJPEAD_KPEBD@Z @ 0x1400D04F8 (-RtlStringCchCatA@@YAJPEAD_KPEBD@Z.c)
 */

__int64 __fastcall flagString(__int64 a1, __int64 a2)
{
  __int16 v2; // bx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 UserSessionState; // rax
  unsigned __int64 v23; // rdx

  v2 = a1;
  *(_BYTE *)(W32GetUserSessionState(a1, a2) + 12312) = 0;
  if ( (v2 & 1) == 0
    || (v16 = W32GetUserSessionState(v4, v3), (int)RtlStringCchCatA((char *)(v16 + 12312), v17, "|NEW") >= 0) )
  {
    if ( (v2 & 2) == 0
      || (v5 = W32GetUserSessionState(v4, v3), (int)RtlStringCchCatA((char *)(v5 + 12312), v6, "|INRANGE") >= 0) )
    {
      if ( (v2 & 4) == 0
        || (v7 = W32GetUserSessionState(v4, v3), (int)RtlStringCchCatA((char *)(v7 + 12312), v8, "|INCONTACT") >= 0) )
      {
        if ( (v2 & 0x2000) == 0
          || (v9 = W32GetUserSessionState(v4, v3), (int)RtlStringCchCatA((char *)(v9 + 12312), v10, "|PRIMARY") >= 0) )
        {
          if ( (v2 & 0x4000) == 0
            || (v11 = W32GetUserSessionState(v4, v3),
                (int)RtlStringCchCatA((char *)(v11 + 12312), v12, "|CONFIDENCE") >= 0) )
          {
            if ( v2 >= 0
              || (v18 = W32GetUserSessionState(v4, v3),
                  (int)RtlStringCchCatA((char *)(v18 + 12312), v19, "|CANCELED") >= 0) )
            {
              if ( (v2 & 0x10) == 0
                || (v13 = W32GetUserSessionState(v4, v3),
                    (int)RtlStringCchCatA((char *)(v13 + 12312), v14, "|FIRSTBUTTON") >= 0) )
              {
                if ( (v2 & 0x20) == 0
                  || (v20 = W32GetUserSessionState(v4, v3),
                      (int)RtlStringCchCatA((char *)(v20 + 12312), v21, "|SECONDBUTTON") >= 0) )
                {
                  if ( (v2 & 0x40) != 0 )
                  {
                    UserSessionState = W32GetUserSessionState(v4, v3);
                    RtlStringCchCatA((char *)(UserSessionState + 12312), v23, "|THIRDBUTTON");
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return W32GetUserSessionState(v4, v3) + 12312;
}
