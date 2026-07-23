/*
 * XREFs of VmpLogSlatFillFailure @ 0x1406C6C70
 * Callers:
 *     VmpFillSlat @ 0x1406C4B94 (VmpFillSlat.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall VmpLogSlatFillFailure(__int64 a1, __int64 a2, __int16 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // r10
  __int64 v10; // r11
  int v11; // [rsp+20h] [rbp-E0h]
  int v12; // [rsp+28h] [rbp-D8h]
  __int16 v13; // [rsp+40h] [rbp-C0h] BYREF
  int Flink; // [rsp+44h] [rbp-BCh] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  int v16; // [rsp+4Ch] [rbp-B4h] BYREF
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+60h] [rbp-A0h] BYREF
  int *p_Flink; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  int *v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  int *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  __int64 *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  int *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  int *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  __int16 *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  __int64 v35; // [rsp+F0h] [rbp-10h]
  int v36; // [rsp+F8h] [rbp-8h]
  int v37; // [rsp+FCh] [rbp-4h]

  v13 = a3;
  if ( *(_DWORD *)stru_140F06A28.InitialStack > 5u && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 65LL) )
  {
    Flink = (int)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    p_Flink = &Flink;
    v23 = &v15;
    v25 = &v16;
    v19 = a5;
    v27 = &v19;
    v17 = a6;
    v29 = &v17;
    v18 = a7;
    v31 = &v18;
    v33 = &v13;
    v36 = 16 * (unsigned __int16)v7;
    v16 = v8;
    v37 = 0;
    v22 = 4LL;
    v15 = v7;
    v24 = 4LL;
    v26 = 4LL;
    v28 = 8LL;
    v30 = 4LL;
    v32 = 4LL;
    v34 = 2LL;
    v35 = v10;
    tlgWriteEx_EtwWriteEx(v9, (unsigned __int8 *)&word_1400545C2, v7, 0, v11, v12, 0xAu, &v20);
  }
}
