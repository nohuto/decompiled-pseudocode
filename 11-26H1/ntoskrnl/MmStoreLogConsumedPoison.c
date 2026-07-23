/*
 * XREFs of MmStoreLogConsumedPoison @ 0x14053040C
 * Callers:
 *     SmLogConsumedPoison @ 0x1404F7904 (SmLogConsumedPoison.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall MmStoreLogConsumedPoison(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r8
  int v4; // r9d
  __int64 v5; // r10
  __int64 v6; // r11
  int *v7; // rdx
  __int64 v8; // r11
  int v9; // [rsp+20h] [rbp-B8h]
  int v10; // [rsp+28h] [rbp-B0h]
  ULONG v11; // [rsp+30h] [rbp-A8h]
  int v12; // [rsp+40h] [rbp-98h] BYREF
  __int64 v13; // [rsp+48h] [rbp-90h] BYREF
  __int64 v14; // [rsp+50h] [rbp-88h] BYREF
  __int64 v15; // [rsp+58h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+60h] [rbp-78h] BYREF
  __int64 *v17; // [rsp+80h] [rbp-58h]
  __int64 v18; // [rsp+88h] [rbp-50h]
  int *v19; // [rsp+90h] [rbp-48h]
  __int64 v20; // [rsp+98h] [rbp-40h]
  __int64 *v21; // [rsp+A0h] [rbp-38h]
  __int64 v22; // [rsp+A8h] [rbp-30h]
  __int64 *v23; // [rsp+B0h] [rbp-28h]
  __int64 v24; // [rsp+B8h] [rbp-20h]

  if ( stru_140E366D8.FirstArgument )
  {
    if ( a3 )
    {
      if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u
        && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000002LL) )
      {
        v14 = v8;
        v17 = &v14;
        v7 = (int *)&byte_14005B375;
        v15 = 0x1000000LL;
        v19 = &v12;
        v13 = *v3;
        v21 = &v13;
        v23 = &v15;
        v11 = 6;
        v24 = 8LL;
        goto LABEL_9;
      }
    }
    else if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u
           && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000002LL) )
    {
      v13 = v6;
      v17 = &v13;
      v7 = &dword_14005B314;
      v14 = 0x1000000LL;
      v19 = &v12;
      v21 = &v14;
      v11 = 5;
LABEL_9:
      v12 = v4;
      v18 = 8LL;
      v20 = 4LL;
      v22 = 8LL;
      tlgWriteEx_EtwWriteEx(v5, (unsigned __int8 *)v7, (__int64)v3, 1u, v9, v10, v11, &v16);
    }
  }
}
