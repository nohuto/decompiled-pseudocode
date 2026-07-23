/*
 * XREFs of VmpLogLargeSlatFill @ 0x1406C6A0C
 * Callers:
 *     VmpFillSlat @ 0x1406C4B94 (VmpFillSlat.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall VmpLogLargeSlatFill(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // edx
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // r10
  __int64 v10; // r11
  int v11; // [rsp+20h] [rbp-99h]
  int v12; // [rsp+28h] [rbp-91h]
  int Flink; // [rsp+40h] [rbp-79h] BYREF
  int v14; // [rsp+44h] [rbp-75h] BYREF
  int v15; // [rsp+48h] [rbp-71h] BYREF
  __int64 v16; // [rsp+50h] [rbp-69h] BYREF
  __int64 v17; // [rsp+58h] [rbp-61h] BYREF
  __int64 v18; // [rsp+60h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+70h] [rbp-49h] BYREF
  int *p_Flink; // [rsp+90h] [rbp-29h]
  __int64 v21; // [rsp+98h] [rbp-21h]
  __int64 *v22; // [rsp+A0h] [rbp-19h]
  __int64 *v23; // [rsp+B0h] [rbp-9h]
  __int64 v24; // [rsp+B8h] [rbp-1h]
  int *v25; // [rsp+C0h] [rbp+7h]
  __int64 v26; // [rsp+C8h] [rbp+Fh]
  __int64 *v27; // [rsp+D0h] [rbp+17h]
  __int64 v28; // [rsp+D8h] [rbp+1Fh]
  int *v29; // [rsp+E0h] [rbp+27h]
  __int64 v30; // [rsp+E8h] [rbp+2Fh]

  if ( *(_DWORD *)stru_140F06A28.InitialStack > 5u && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 1LL) )
  {
    Flink = (int)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    p_Flink = &Flink;
    v22 = &v16;
    v23 = &v17;
    v25 = &v14;
    v18 = a5;
    v27 = &v18;
    v15 = a6;
    v29 = &v15;
    v24 = (unsigned int)(v6 + 7);
    v14 = v8;
    v28 = v24;
    v21 = 4LL;
    v16 = v10;
    v17 = v7;
    v26 = 4LL;
    v30 = 4LL;
    tlgWriteEx_EtwWriteEx(v9, (unsigned __int8 *)&dword_140054274, v7, 0, v11, v12, v6 + 7, &v19);
  }
}
