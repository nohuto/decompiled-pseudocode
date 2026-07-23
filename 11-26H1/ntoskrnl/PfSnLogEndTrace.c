/*
 * XREFs of PfSnLogEndTrace @ 0x140AA68E8
 * Callers:
 *     PfSnEndTrace @ 0x140AA6328 (PfSnEndTrace.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PfSnLogEndTrace(__int64 a1)
{
  __int64 v2; // rax
  __int16 v3; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v5; // [rsp+50h] [rbp+7h]
  int v6; // [rsp+58h] [rbp+Fh]
  int v7; // [rsp+5Ch] [rbp+13h]
  __int64 v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  __int64 v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  __int64 v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  if ( a1
    && stru_140E67200.WaitBlock[0].Thread
    && EtwEventEnabled((REGHANDLE)stru_140E67200.WaitBlock[0].Thread, &PfSnEvt_EndTrace_Info) )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( *(_WORD *)(a1 + 24 + 2 * v2) );
    v3 = v2;
    UserData.Ptr = (ULONGLONG)&v3;
    v6 = 2 * (unsigned __int16)v2;
    v5 = a1 + 24;
    v8 = a1 + 84;
    v10 = a1 + 88;
    v12 = a1 + 400;
    *(_QWORD *)&UserData.Size = 2LL;
    v7 = 0;
    v9 = 4LL;
    v11 = 4LL;
    v13 = 4LL;
    EtwWrite((REGHANDLE)stru_140E67200.WaitBlock[0].Thread, &PfSnEvt_EndTrace_Info, 0LL, 5u, &UserData);
  }
}
