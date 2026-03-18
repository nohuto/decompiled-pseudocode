/*
 * XREFs of flagString @ 0x140101C60
 * Callers:
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x14010136C (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 * Callees:
 *     ?RtlStringCchCatA@@YAJPEAD_KPEBD@Z @ 0x140101E28 (-RtlStringCchCatA@@YAJPEAD_KPEBD@Z.c)
 */

__int64 __fastcall flagString(int a1, int a2, int a3)
{
  __int16 v3; // bx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 UserSessionState; // rax
  unsigned __int64 v25; // rdx

  v3 = a1;
  *(_BYTE *)(W32GetUserSessionState(a1, a2, a3) + 12312) = 0;
  if ( (v3 & 1) == 0
    || (v18 = W32GetUserSessionState(v5, v4, v6), (int)RtlStringCchCatA((char *)(v18 + 12312), v19, "|NEW") >= 0) )
  {
    if ( (v3 & 2) == 0
      || (v7 = W32GetUserSessionState(v5, v4, v6), (int)RtlStringCchCatA((char *)(v7 + 12312), v8, "|INRANGE") >= 0) )
    {
      if ( (v3 & 4) == 0
        || (v9 = W32GetUserSessionState(v5, v4, v6), (int)RtlStringCchCatA((char *)(v9 + 12312), v10, "|INCONTACT") >= 0) )
      {
        if ( (v3 & 0x2000) == 0
          || (v11 = W32GetUserSessionState(v5, v4, v6),
              (int)RtlStringCchCatA((char *)(v11 + 12312), v12, "|PRIMARY") >= 0) )
        {
          if ( (v3 & 0x4000) == 0
            || (v13 = W32GetUserSessionState(v5, v4, v6),
                (int)RtlStringCchCatA((char *)(v13 + 12312), v14, "|CONFIDENCE") >= 0) )
          {
            if ( v3 >= 0
              || (v20 = W32GetUserSessionState(v5, v4, v6),
                  (int)RtlStringCchCatA((char *)(v20 + 12312), v21, "|CANCELED") >= 0) )
            {
              if ( (v3 & 0x10) == 0
                || (v15 = W32GetUserSessionState(v5, v4, v6),
                    (int)RtlStringCchCatA((char *)(v15 + 12312), v16, "|FIRSTBUTTON") >= 0) )
              {
                if ( (v3 & 0x20) == 0
                  || (v22 = W32GetUserSessionState(v5, v4, v6),
                      (int)RtlStringCchCatA((char *)(v22 + 12312), v23, "|SECONDBUTTON") >= 0) )
                {
                  if ( (v3 & 0x40) != 0 )
                  {
                    UserSessionState = W32GetUserSessionState(v5, v4, v6);
                    RtlStringCchCatA((char *)(UserSessionState + 12312), v25, "|THIRDBUTTON");
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return W32GetUserSessionState(v5, v4, v6) + 12312;
}
