/*
 * XREFs of VmpLogTbFlushSlatInvalidate @ 0x1406C6EEC
 * Callers:
 *     VmpProcessInvalidateList @ 0x140512570 (VmpProcessInvalidateList.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall VmpLogTbFlushSlatInvalidate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // r11
  int v10; // [rsp+20h] [rbp-99h]
  int v11; // [rsp+28h] [rbp-91h]
  int Flink; // [rsp+40h] [rbp-79h] BYREF
  int v13; // [rsp+44h] [rbp-75h] BYREF
  int v14; // [rsp+48h] [rbp-71h] BYREF
  __int64 v15; // [rsp+50h] [rbp-69h] BYREF
  __int64 v16; // [rsp+58h] [rbp-61h] BYREF
  __int64 v17; // [rsp+60h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+70h] [rbp-49h] BYREF
  int *p_Flink; // [rsp+90h] [rbp-29h]
  __int64 v20; // [rsp+98h] [rbp-21h]
  __int64 *v21; // [rsp+A0h] [rbp-19h]
  __int64 v22; // [rsp+A8h] [rbp-11h]
  int *v23; // [rsp+B0h] [rbp-9h]
  __int64 v24; // [rsp+B8h] [rbp-1h]
  int *v25; // [rsp+C0h] [rbp+7h]
  __int64 v26; // [rsp+C8h] [rbp+Fh]
  __int64 *v27; // [rsp+D0h] [rbp+17h]
  __int64 v28; // [rsp+D8h] [rbp+1Fh]
  __int64 *v29; // [rsp+E0h] [rbp+27h]
  __int64 v30; // [rsp+E8h] [rbp+2Fh]

  if ( *(_DWORD *)stru_140F06A28.InitialStack > 5u && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 2LL) )
  {
    Flink = (int)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    p_Flink = &Flink;
    v21 = &v15;
    v23 = &v13;
    v25 = &v14;
    v16 = a5;
    v27 = &v16;
    v17 = a6;
    v29 = &v17;
    v22 = 8LL;
    v14 = v7;
    v28 = 8LL;
    v30 = 8LL;
    v20 = 4LL;
    v15 = v9;
    v13 = v6;
    v24 = 4LL;
    v26 = 4LL;
    tlgWriteEx_EtwWriteEx(v8, (unsigned __int8 *)&unk_140054720, v6, 0, v10, v11, 8u, &v18);
  }
}
