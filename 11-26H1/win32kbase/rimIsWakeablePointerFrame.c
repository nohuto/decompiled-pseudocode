/*
 * XREFs of rimIsWakeablePointerFrame @ 0x14007B3D8
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x140072D40 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsNext @ 0x140074BA4 (RIMCmActiveContactsNext.c)
 *     RIMCmActiveContactsBegin @ 0x140075F1C (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x14007B47C (RIMCmActiveContactsEnd.c)
 */

char __fastcall rimIsWakeablePointerFrame(__int64 a1)
{
  char v2; // bl
  __int64 **v3; // rax
  __int64 *v4; // xmm1_8
  __int64 active; // rax
  __int128 v6; // xmm1
  __int64 *v7; // xmm0_8
  __int64 v8; // rax
  __int128 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v11; // [rsp+30h] [rbp-40h]
  __int128 v12; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v13; // [rsp+48h] [rbp-28h]
  char v14[32]; // [rsp+50h] [rbp-20h] BYREF

  v2 = 0;
  v3 = RIMCmActiveContactsBegin((__int64 **)&v12, a1);
  v4 = v3[2];
  v10 = *(_OWORD *)v3;
  v11 = v4;
  while ( 1 )
  {
    active = RIMCmActiveContactsEnd(v14, a1);
    v6 = *(_OWORD *)active;
    v7 = *(__int64 **)(active + 16);
    v8 = *(_QWORD *)active;
    v13 = v7;
    v12 = v6;
    if ( (_QWORD)v10 == v8 && DWORD2(v10) == DWORD2(v12) && v11 == v13 )
      break;
    if ( (*(_DWORD *)(v11 - 1) & 0x404) == 0 )
      return 1;
    RIMCmActiveContactsNext(a1, (__int64 **)&v10);
  }
  return v2;
}
