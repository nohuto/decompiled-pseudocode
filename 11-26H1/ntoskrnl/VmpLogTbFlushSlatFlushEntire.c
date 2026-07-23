/*
 * XREFs of VmpLogTbFlushSlatFlushEntire @ 0x14052C2F8
 * Callers:
 *     VmpFlushTb @ 0x140253324 (VmpFlushTb.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void VmpLogTbFlushSlatFlushEntire()
{
  __int64 v0; // r8
  __int64 v1; // r9
  int v2; // [rsp+20h] [rbp-88h]
  int v3; // [rsp+28h] [rbp-80h]
  int Flink; // [rsp+40h] [rbp-68h] BYREF
  __int64 v5; // [rsp+48h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+50h] [rbp-58h] BYREF
  int *p_Flink; // [rsp+70h] [rbp-38h]
  __int64 v8; // [rsp+78h] [rbp-30h]
  __int64 *v9; // [rsp+80h] [rbp-28h]
  __int64 v10; // [rsp+88h] [rbp-20h]

  if ( *(_DWORD *)stru_140F06A28.InitialStack > 5u && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 256LL) )
  {
    Flink = (int)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    p_Flink = &Flink;
    v9 = &v5;
    v8 = 4LL;
    v5 = v1;
    v10 = 8LL;
    tlgWriteEx_EtwWriteEx(v0, (unsigned __int8 *)&byte_140054587, v0, 0, v2, v3, 4u, &v6);
  }
}
