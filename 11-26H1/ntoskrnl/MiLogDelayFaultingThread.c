/*
 * XREFs of MiLogDelayFaultingThread @ 0x1407043BC
 * Callers:
 *     MiDelayFaultingThread @ 0x1404FED04 (MiDelayFaultingThread.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void MiLogDelayFaultingThread()
{
  ULONG v0; // edx
  __int64 v1; // r8
  int v2; // r9d
  unsigned int v3; // r10d
  __int64 v4; // r11
  int v5; // [rsp+20h] [rbp-79h]
  int v6; // [rsp+28h] [rbp-71h]
  int v7; // [rsp+40h] [rbp-59h] BYREF
  int v8; // [rsp+44h] [rbp-55h] BYREF
  int v9; // [rsp+48h] [rbp-51h] BYREF
  int Blink_high; // [rsp+4Ch] [rbp-4Dh] BYREF
  int v11; // [rsp+50h] [rbp-49h] BYREF
  __int64 v12; // [rsp+58h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+60h] [rbp-39h] BYREF
  int *v14; // [rsp+80h] [rbp-19h]
  __int64 v15; // [rsp+88h] [rbp-11h]
  int *v16; // [rsp+90h] [rbp-9h]
  __int64 v17; // [rsp+98h] [rbp-1h]
  int *v18; // [rsp+A0h] [rbp+7h]
  __int64 v19; // [rsp+A8h] [rbp+Fh]
  int *p_Blink_high; // [rsp+B0h] [rbp+17h]
  __int64 v21; // [rsp+B8h] [rbp+1Fh]
  __int64 *v22; // [rsp+C0h] [rbp+27h]
  __int64 v23; // [rsp+C8h] [rbp+2Fh]
  int *v24; // [rsp+D0h] [rbp+37h]
  __int64 v25; // [rsp+D8h] [rbp+3Fh]

  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 1LL) )
  {
    v7 = (unsigned __int16)v3;
    v14 = &v7;
    v15 = 4LL;
    v8 = v0 & HIWORD(v3);
    v16 = &v8;
    v18 = &v9;
    v17 = 4LL;
    v19 = 4LL;
    v9 = v0 & (v3 >> 17);
    Blink_high = HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink);
    p_Blink_high = &Blink_high;
    v22 = &v12;
    v24 = &v11;
    v11 = v2;
    v23 = v0 + 7;
    v21 = 4LL;
    v12 = v1;
    v25 = 4LL;
    tlgWriteEx_EtwWriteEx(v4, (unsigned __int8 *)&unk_14005A0E8, v1, v0, v5, v6, v0 + 7, &v13);
  }
}
