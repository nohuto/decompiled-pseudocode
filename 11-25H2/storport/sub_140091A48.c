/*
 * XREFs of sub_140091A48 @ 0x140091A48
 * Callers:
 *     sub_140010CA0 @ 0x140010CA0 (sub_140010CA0.c)
 * Callees:
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140091A48(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned __int8 *v6; // r8
  int v8; // r10d
  unsigned __int64 v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+28h] [rbp-30h] BYREF
  int v13; // [rsp+30h] [rbp-28h]
  int v14; // [rsp+34h] [rbp-24h]
  unsigned __int64 v15; // [rsp+38h] [rbp-20h]
  unsigned __int64 v16; // [rsp+40h] [rbp-18h]

  v6 = *(unsigned __int8 **)(a2 + 184);
  v11 = *(_QWORD *)(a2 + 168);
  v12 = 1LL;
  v14 = 0;
  v8 = *v6;
  v16 = a4;
  v9 = v11;
  if ( a5 <= a4 )
    a4 = a5;
  HIDWORD(v12) = v8;
  if ( a4 > v11 )
    v9 = a4;
  v15 = v9;
  v13 = *((_DWORD *)v6 + 2);
  if ( *(int *)(a2 + 48) < 0 )
    HIDWORD(v12) = v8 | 0x400;
  IoRecordIoAttribution(a3, &v12);
  result = *(_QWORD *)(a1 + 32);
  _InterlockedDecrement((volatile signed __int32 *)(result + 12));
  return result;
}
