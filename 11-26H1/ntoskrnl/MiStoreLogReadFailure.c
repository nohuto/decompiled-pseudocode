/*
 * XREFs of MiStoreLogReadFailure @ 0x14070F7D8
 * Callers:
 *     MiWaitForInPageComplete @ 0x14038FFA0 (MiWaitForInPageComplete.c)
 *     MiStoreFaultComplete @ 0x14048E5F8 (MiStoreFaultComplete.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void MiStoreLogReadFailure()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // rax
  int v3; // ecx
  int v4; // [rsp+20h] [rbp-E0h]
  int v5; // [rsp+28h] [rbp-D8h]
  int Flink; // [rsp+40h] [rbp-C0h] BYREF
  int v7; // [rsp+44h] [rbp-BCh] BYREF
  int v8; // [rsp+48h] [rbp-B8h] BYREF
  int v9; // [rsp+4Ch] [rbp-B4h] BYREF
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+70h] [rbp-90h] BYREF
  int *p_Flink; // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  int *v17; // [rsp+A0h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-58h]
  int *v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  __int64 *v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  int *v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  __int64 *v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  int *v27; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  __int64 *v29; // [rsp+100h] [rbp+0h]
  __int64 v30; // [rsp+108h] [rbp+8h]

  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000002LL) )
  {
    Flink = (int)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    p_Flink = &Flink;
    v2 = *(_QWORD *)(v1 + 152);
    v16 = 4LL;
    v3 = *(_DWORD *)(v2 + 1296);
    v17 = &v7;
    v8 = *(_DWORD *)(v1 + 80);
    v19 = &v8;
    v11 = *(_QWORD *)(v1 + 232);
    v21 = &v11;
    v9 = *(_DWORD *)(v1 + 184);
    v23 = &v9;
    v12 = *(_QWORD *)(v1 + 96);
    v25 = &v12;
    v10 = dword_140E36160;
    v27 = &v10;
    v29 = &v13;
    v7 = v3;
    v18 = 4LL;
    v20 = 4LL;
    v22 = 8LL;
    v24 = 4LL;
    v26 = 8LL;
    v28 = 4LL;
    v13 = 0x1000000LL;
    v30 = 8LL;
    tlgWriteEx_EtwWriteEx(v0, (unsigned __int8 *)&byte_14005B111, v0, 1u, v4, v5, 0xAu, &v14);
  }
}
