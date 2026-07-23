/*
 * XREFs of MiStoreLogNotCandidate @ 0x1404BDB30
 * Callers:
 *     MiStoreWriteModifiedPagePrepare @ 0x1404022B0 (MiStoreWriteModifiedPagePrepare.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall MiStoreLogNotCandidate(__int64 a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  int v4; // r10d
  int v5; // [rsp+20h] [rbp-88h]
  int v6; // [rsp+28h] [rbp-80h]
  int v7; // [rsp+40h] [rbp-68h] BYREF
  int v8; // [rsp+44h] [rbp-64h] BYREF
  __int64 v9[8]; // [rsp+50h] [rbp-58h] BYREF

  if ( a2 != -1073741401
    && *(_DWORD *)stru_140E366D8.FirstArgument > 5u
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000002LL) )
  {
    v7 = v3;
    v9[5] = 4LL;
    v9[4] = (__int64)&v7;
    v9[7] = 4LL;
    v9[6] = (__int64)&v8;
    v8 = v2;
    tlgWriteEx_EtwWriteEx(v4, (int)&byte_14005B197, v2, 1, v5, v6, 4u, (__int64)v9);
  }
}
